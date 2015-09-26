using System;
using System.Reflection;
using System.Runtime.Serialization;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Dominion.Failure
{
  /// <summary>
  ///
  /// </summary>
  public abstract class DominionException : ApplicationException
  {
    private string GetStringFieldValue(string fieldName)
    {
      string value = null;

      // Get the Type of this class and search for the requested field.
      // Include non-public and static fields in the search.
      FieldInfo detailInfo = GetType().GetField(fieldName,
                                                BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static);

      // Make sure the field we found is a string.
      if (detailInfo != null && detailInfo.FieldType == typeof(string))
      {
        // If found, and is a string type, get the actual value.
        value = (string)detailInfo.GetValue(this);
      }

      return value;
    }

    protected object[] Context
    {
      get
      {
        return _context;
      }
      set
      {
        _context = (value == null ? new object[0] : value);
      }
    }

    protected string InternalUserMessage
    {
      get
      {
        // Only need to actually get it the first time.
        if (_internalUserMessage == null)
        {
          // Extract the detail message from the derrived class.
          _internalUserMessage = GetStringFieldValue(USER_MESSAGE_FIELD);
        }

        return _internalUserMessage;
      }
    }

    protected string InternalDetailMessage
    {
      get
      {
        // Only need to actually get it the first time.
        if (_internalDetailMessage == null)
        {
          // Extract the detail message from the derrived class.
          _internalDetailMessage = GetStringFieldValue(DETAIL_MESSAGE_FIELD);
        }

        return _internalDetailMessage;
      }
    }

    public virtual string DetailMessage
    {
      get
      {
        // Try to get the __SSRES__DETAIL value from the derived class...
        string detailMsg = InternalUserMessage;

        // If a message has been obtained, format it using the Exceptions' context.
        if (detailMsg != null && _context != null)
        {
          try
          {
            detailMsg = string.Format(detailMsg, _context);
          }
          catch (FormatException e)
          {
            detailMsg =
              string.Format("Failed to format exception message for Exception class {0}.  Text of Exception is '{1}'. FormatException reported is '{2}'",
                            GetType().FullName, detailMsg, e.Message);
          }
        }

        return detailMsg;
      }
    }

    public override string Message
    {
      get
      {
        return DetailMessage;
      }
    }

    public virtual string UserMessage
    {
      get
      {
        string userMsg = InternalUserMessage;

        // If a message has been obtained, format it using the Exceptions' context.
        if (_context != null)
        {
          try
          {
            userMsg = string.Format(userMsg, _context);
          }
          catch (FormatException e)
          {
            userMsg = string.Format(
                        "Failed to format exception message for Exception class {0}. Text of Exception is '{1}'. FormatException reported is '{2}'",
                        GetType().FullName,
                        userMsg,
                        e.Message);
          }
        }

        return userMsg;
      }
    }

    protected DominionException() :
    this(null, new object[0])
    {
    }

    protected DominionException(params object[] context) :
    this(null, context)
    {
    }

    protected DominionException(Exception cause) :
    this(cause, new object[0])
    {
    }

    protected DominionException(Exception cause, params object[] context) :
    base(null, cause)
    {
      Context = context;
    }

    private object[] _context;

    private string _internalDetailMessage;

    private string _internalUserMessage;

    public static readonly string USER_MESSAGE_FIELD = "USER_MESSAGE";

    public static readonly string DETAIL_MESSAGE_FIELD = "DETAIL_MESSAGE";

  }
}

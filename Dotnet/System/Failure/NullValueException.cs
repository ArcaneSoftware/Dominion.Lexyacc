using System;

namespace Dominion.Failure
{
  /// <summary>
  ///
  /// </summary>
  public class NullValueException : DominionException
  {
    public static void CHECK(object value)
    {
      if (value == null)
      {
        throw new NullValueException();
      }
    }
    public NullValueException()
    {
    }

    public NullValueException(Exception cause) :
    base(cause)
    {
    }

    internal const string USER_MESSAGE = "Value is NULL.";

    internal const string DETAIL_MESSAGE = "Value is NULL.";
  }
}

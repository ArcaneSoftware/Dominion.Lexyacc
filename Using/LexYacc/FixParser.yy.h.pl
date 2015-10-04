use warnings;
use Tie::File;

print $ARGV[0];
print "\n";

$i = 0;
tie(@lines,'Tie::File',$ARGV[0]) or die;

foreach $line(@lines) {
   if($line =~ /class CParser/) {
      print $lines[$i];
      
      $lines[$i] =~ s/class CParser/class __declspec(dllexport)CParser/g;
      print "\n";
      print $lines[$i];
      print "\n";
      
      last;
   }
   
   $i++;
}

untie @lines;
use warnings;
use Tie::File;

print $ARGV[0];
print "\n";

$i = 0;
tie(@lines,'Tie::File',$ARGV[0]) or die;

foreach $line(@lines) {
   if($line =~ /std::max/) {
      print $lines[$i];
      
      $lines[$i] =~ s/std::max/max/g;
      print "\n";
      print $lines[$i];
      print "\n";
      
      last;
   }
   
   $i++;
}

untie @lines;
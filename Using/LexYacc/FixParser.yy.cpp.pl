use warnings;
use Tie::File;

print $ARGV[0];
print "\n";

$i = 0;
tie(@lines,'Tie::File',$ARGV[0]) or die;

foreach $line(@lines) {
   if($line =~ /^#define yylex/) {
      print $lines[$i];
      print "\n";
      
      $lines[$i] = '// <Perl> delete incorrect yylex';
      last;
   }
   
   $i++;
}

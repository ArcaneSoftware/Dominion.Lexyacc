bison -d  -o Parser.yy.cpp --defines=Parser.yy.h ./Parser.yy
perl ../../../../Using/LexYacc/FixPositionFile.pl ./position.hh
perl ../../../../Using/LexYacc/FixParser.yy.cpp.pl ./Parser.yy.cpp
perl ../../../../Using/LexYacc/FixParser.yy.h.pl ./Parser.yy.h
flex -+ ./Scanner.ll
FixFlex.exe Scanner.ll.out
del Scanner.ll.out
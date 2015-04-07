How to visualize the output of YACC/YAXX.

# Introduction #

This page is under construction.

# Details #

**Grammar Visualization**

YACC Grammar can be visualized through graphviz by the
following project [YaccViso](http://www.lo-res.org/~aaron/yaccviso/).

A more general idea is to visualize the grammar as a program using our program syntax
visualization with yaxx, as a YACC grammar is also an instance of the a meta-grammar
(grammar of the grammar, see bison's implementation) :-)

Similarly we can construct grammar visualization not just for YACC grammars, but
also for other parser-generators's grammars.

**Program Syntax Visualization**

You can check the phpAspect blog if you want to know more about visualizing a parse tree with Graphviz: http://wcandillon.blogspot.com/2006/10/visualize-parse-tree-of-php-source.html
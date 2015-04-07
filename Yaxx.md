# YAXX: YAcc eXtension to XML #
The YAXX tool is an XML extension to YACC, a well-known compiler-compiler. Given a program
and its YACC grammar, YAXX outputs the internal parse tree of the program as an XML
document. The generated XML conforms to the DTD that is also generated from the YACC
grammar and it can be transformed back to a legal program through XSLT.

**What YAXX includes**
  * Extension to Bison, a variant of YACC.
  * Example grammars for ANSI C, Fortran 77, SQL, Java, XML, PHP.


# Background: How YACC works #
The input to LEX/YACC are two files, one for the lexical analysis (LEX), the other for the
syntax analysis (YACC). LEX is responsible for converting the program into a stream of
tokens, and YACC is responsible for generating a parser from a set of production rules to
construct a parse tree with both terminals and non-terminals. A terminal is a leaf of the
parse tree which corresponds to the LEX tokens, while a non-terminal is the intermediate
node of the parse tree that corresponds to one of left hand side (LHS) of a production
rule, and it often has children which correspond to the right hand sides (RHS) of the
rule. The root of the parse tree is the LHS of the start rule. The parse tree is built
from-bottom-to-up by reducing the symbols popped from a stack into a single non-terminal
and pushing it back to the symbol stack. Once the symbol stack is empty, the parse tree
has been constructed. The decisions of when to do the reduction depends on the grammar.
YACC uses LALR(1) grammar which can peek one symbol further in order to resolve conflicts
by an finite state automata (FSA). Most programming languages such as ANSI C, Java,
Fortran, etc. conform to the LALR(1) grammar, thus YACC has been widely used to construct
context-free grammar parsers from these languages.

_To be continued..._
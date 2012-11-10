#include "awk.def"
obj nullproc(node **, int);
extern obj program(node **, int);
extern obj boolop(node **, int);
extern obj relop(node **, int);
extern obj array(node **, int);
extern obj indirect(node **, int);
extern obj substr(node **, int);
extern obj sindex(node **, int);
extern obj awsprintf(node **, int);
extern obj arith(node **, int);
extern obj incrdecr(node **, int);
extern obj cat(node **, int);
extern obj pastat(node **, int);
extern obj dopa2(node **, int);
extern obj matchop(node **, int);
extern obj aprintf(node **, int);
extern obj print(node **, int);
extern obj split(node **, int);
extern obj assign(node **, int);
extern obj ifstat(node **, int);
extern obj whilestat(node **, int);
extern obj forstat(node **, int);
extern obj instat(node **, int);
extern obj jump(node **, int);
extern obj fncn(node **, int);
extern obj getline(node **, int);
obj (*proctab[77])(node **, int) = {
/*FIRSTTOKEN*/	nullproc,
/*FINAL*/	nullproc,
/*FATAL*/	nullproc,
/*LT*/	relop,
/*LE*/	relop,
/*GT*/	relop,
/*GE*/	relop,
/*EQ*/	relop,
/*NE*/	relop,
/*MATCH*/	matchop,
/*NOTMATCH*/	matchop,
/*APPEND*/	nullproc,
/*ADD*/	arith,
/*MINUS*/	arith,
/*MULT*/	arith,
/*DIVIDE*/	arith,
/*MOD*/	arith,
/*UMINUS*/	arith,
/*ASSIGN*/	assign,
/*ADDEQ*/	assign,
/*SUBEQ*/	assign,
/*MULTEQ*/	assign,
/*DIVEQ*/	assign,
/*MODEQ*/	assign,
/*JUMP*/	nullproc,
/*XBEGIN*/	nullproc,
/*XEND*/	nullproc,
/*NL*/	nullproc,
/*PRINT*/	print,
/*PRINTF*/	aprintf,
/*SPRINTF*/	awsprintf,
/*SPLIT*/	split,
/*IF*/	ifstat,
/*ELSE*/	nullproc,
/*WHILE*/	whilestat,
/*FOR*/	forstat,
/*IN*/	instat,
/*NEXT*/	jump,
/*EXIT*/	jump,
/*BREAK*/	jump,
/*CONTINUE*/	jump,
/*PROGRAM*/	program,
/*PASTAT*/	pastat,
/*PASTAT2*/	dopa2,
/*REGEXPR*/	nullproc,
/*ASGNOP*/	nullproc,
/*BOR*/	boolop,
/*AND*/	boolop,
/*NOT*/	boolop,
/*INDEX*/	sindex,
/*LSUBSTR*/	nullproc,
/*SUBSTR*/	substr,
/*FNCN*/	fncn,
/*ARRAY*/	array,
/*VAR*/	nullproc,
/*NUMBER*/	nullproc,
/*GETLINE*/	getline,
/*MATCHOP*/	nullproc,
/*RELOP*/	nullproc,
/*OR*/	nullproc,
/*CHAR*/	nullproc,
/*NCCL*/	nullproc,
/*CCL*/	nullproc,
/*DOT*/	nullproc,
/*STRING*/	nullproc,
/*CAT*/	cat,
/*QUEST*/	nullproc,
/*PLUS*/	nullproc,
/*STAR*/	nullproc,
/*DECR*/	nullproc,
/*INCR*/	nullproc,
/*PREDECR*/	incrdecr,
/*POSTDECR*/	incrdecr,
/*PREINCR*/	incrdecr,
/*POSTINCR*/	incrdecr,
/*INDIRECT*/	indirect,
/*FIELD*/	nullproc,
};
char *printname[77] = {
/*FIRSTTOKEN*/	"",
/*FINAL*/	"",
/*FATAL*/	"",
/*LT*/	" < ",
/*LE*/	" <= ",
/*GT*/	" > ",
/*GE*/	" >= ",
/*EQ*/	" == ",
/*NE*/	" != ",
/*MATCH*/	" ~ ",
/*NOTMATCH*/	" !~ ",
/*APPEND*/	"",
/*ADD*/	" + ",
/*MINUS*/	" - ",
/*MULT*/	" * ",
/*DIVIDE*/	" / ",
/*MOD*/	" % ",
/*UMINUS*/	" -",
/*ASSIGN*/	" = ",
/*ADDEQ*/	" += ",
/*SUBEQ*/	" -= ",
/*MULTEQ*/	" *= ",
/*DIVEQ*/	" /= ",
/*MODEQ*/	" %= ",
/*JUMP*/	"",
/*XBEGIN*/	"",
/*XEND*/	"",
/*NL*/	"",
/*PRINT*/	"print",
/*PRINTF*/	"printf",
/*SPRINTF*/	"sprintf ",
/*SPLIT*/	"split",
/*IF*/	"if(",
/*ELSE*/	"",
/*WHILE*/	"while(",
/*FOR*/	"for(",
/*IN*/	"instat",
/*NEXT*/	"next",
/*EXIT*/	"exit",
/*BREAK*/	"break",
/*CONTINUE*/	"continue",
/*PROGRAM*/	"",
/*PASTAT*/	"",
/*PASTAT2*/	"",
/*REGEXPR*/	"",
/*ASGNOP*/	"",
/*BOR*/	" || ",
/*AND*/	" && ",
/*NOT*/	" !",
/*INDEX*/	"sindex",
/*LSUBSTR*/	"",
/*SUBSTR*/	"substr",
/*FNCN*/	"fncn",
/*ARRAY*/	"",
/*VAR*/	"",
/*NUMBER*/	"",
/*GETLINE*/	"getline",
/*MATCHOP*/	"",
/*RELOP*/	"",
/*OR*/	"",
/*CHAR*/	"",
/*NCCL*/	"",
/*CCL*/	"",
/*DOT*/	"",
/*STRING*/	"",
/*CAT*/	" ",
/*QUEST*/	"",
/*PLUS*/	"",
/*STAR*/	"",
/*DECR*/	"",
/*INCR*/	"",
/*PREDECR*/	"--",
/*POSTDECR*/	"--",
/*PREINCR*/	"++",
/*POSTINCR*/	"++",
/*INDIRECT*/	"$(",
/*FIELD*/	"",
};

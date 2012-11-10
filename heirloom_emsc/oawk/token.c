#include "awk.h"
struct toke
{ char *tnm;
int yval;
} tok[] = {
{ "FIRSTTOKEN", 258 },
{ "FINAL", 259 },
{ "FATAL", 260 },
{ "LT", 261 },
{ "LE", 262 },
{ "GT", 263 },
{ "GE", 264 },
{ "EQ", 265 },
{ "NE", 266 },
{ "MATCH", 267 },
{ "NOTMATCH", 268 },
{ "APPEND", 269 },
{ "ADD", 270 },
{ "MINUS", 271 },
{ "MULT", 272 },
{ "DIVIDE", 273 },
{ "MOD", 274 },
{ "UMINUS", 275 },
{ "ASSIGN", 276 },
{ "ADDEQ", 277 },
{ "SUBEQ", 278 },
{ "MULTEQ", 279 },
{ "DIVEQ", 280 },
{ "MODEQ", 281 },
{ "JUMP", 282 },
{ "XBEGIN", 283 },
{ "XEND", 284 },
{ "NL", 285 },
{ "PRINT", 286 },
{ "PRINTF", 287 },
{ "SPRINTF", 288 },
{ "SPLIT", 289 },
{ "IF", 290 },
{ "ELSE", 291 },
{ "WHILE", 292 },
{ "FOR", 293 },
{ "IN", 294 },
{ "NEXT", 295 },
{ "EXIT", 296 },
{ "BREAK", 297 },
{ "CONTINUE", 298 },
{ "PROGRAM", 299 },
{ "PASTAT", 300 },
{ "PASTAT2", 301 },
{ "REGEXPR", 302 },
{ "ASGNOP", 303 },
{ "BOR", 304 },
{ "AND", 305 },
{ "NOT", 306 },
{ "INDEX", 307 },
{ "LSUBSTR", 308 },
{ "SUBSTR", 309 },
{ "FNCN", 310 },
{ "ARRAY", 311 },
{ "VAR", 312 },
{ "NUMBER", 313 },
{ "GETLINE", 314 },
{ "MATCHOP", 315 },
{ "RELOP", 316 },
{ "OR", 317 },
{ "CHAR", 318 },
{ "NCCL", 319 },
{ "CCL", 320 },
{ "DOT", 321 },
{ "STRING", 322 },
{ "CAT", 323 },
{ "QUEST", 324 },
{ "PLUS", 325 },
{ "STAR", 326 },
{ "DECR", 327 },
{ "INCR", 328 },
{ "PREDECR", 329 },
{ "POSTDECR", 330 },
{ "PREINCR", 331 },
{ "POSTINCR", 332 },
{ "INDIRECT", 333 },
{ "FIELD", 334 },
{ "LASTTOKEN", 335 },
};
char *tokname(int n)
{
	if (n < FIRSTTOKEN || n >= LASTTOKEN)
		n = FIRSTTOKEN;
	return(tok[n - FIRSTTOKEN].tnm);
}

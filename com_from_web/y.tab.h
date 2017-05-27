/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LOWER_THAN_ELSE = 258,
    ELSE = 259,
    IDENTIFIER = 260,
    CONSTANT = 261,
    STRING_LITERAL = 262,
    SIZEOF = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPE_NAME = 285,
    TYPEDEF = 286,
    EXTERN = 287,
    STATIC = 288,
    AUTO = 289,
    REGISTER = 290,
    INLINE = 291,
    RESTRICT = 292,
    CHAR = 293,
    SHORT = 294,
    INT = 295,
    LONG = 296,
    SIGNED = 297,
    UNSIGNED = 298,
    FLOAT = 299,
    DOUBLE = 300,
    CONST = 301,
    VOLATILE = 302,
    VOID = 303,
    BOOL = 304,
    COMPLEX = 305,
    IMAGINARY = 306,
    STRUCT = 307,
    UNION = 308,
    ENUM = 309,
    ELLIPSIS = 310,
    CASE = 311,
    DEFAULT = 312,
    IF = 313,
    SWITCH = 314,
    WHILE = 315,
    DO = 316,
    FOR = 317,
    GOTO = 318,
    CONTINUE = 319,
    BREAK = 320,
    RETURN = 321
  };
#endif
/* Tokens.  */
#define LOWER_THAN_ELSE 258
#define ELSE 259
#define IDENTIFIER 260
#define CONSTANT 261
#define STRING_LITERAL 262
#define SIZEOF 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPE_NAME 285
#define TYPEDEF 286
#define EXTERN 287
#define STATIC 288
#define AUTO 289
#define REGISTER 290
#define INLINE 291
#define RESTRICT 292
#define CHAR 293
#define SHORT 294
#define INT 295
#define LONG 296
#define SIGNED 297
#define UNSIGNED 298
#define FLOAT 299
#define DOUBLE 300
#define CONST 301
#define VOLATILE 302
#define VOID 303
#define BOOL 304
#define COMPLEX 305
#define IMAGINARY 306
#define STRUCT 307
#define UNION 308
#define ENUM 309
#define ELLIPSIS 310
#define CASE 311
#define DEFAULT 312
#define IF 313
#define SWITCH 314
#define WHILE 315
#define DO 316
#define FOR 317
#define GOTO 318
#define CONTINUE 319
#define BREAK 320
#define RETURN 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

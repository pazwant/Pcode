#ifndef HEADER2_H_INCLUDED
#define HEADER2_H_INCLUDED
#define LINESIZE 10240
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <pthread.h>


char bufy[200000];
char *pSs[20] ;
char *fSs[20] ;
char *token_a;
char *rest_b;
long start;
char bufy_r[200000];
int  datap [100000];
int  datapc[100000];
int  datapr[100000];
int stek_n2[100000];
char *fix;
char sc[2];
char sx[2];
char esc;


typedef struct xxx xxx;
struct xxx	
{	
	char *z;
	char buff[200000];
	
	};
typedef struct paz paz;
struct paz
{
    
    char *Ax;
    char *Bx;
    char *Cx;
    int   Dx;
    char *Px;
	char *Rx;
};
char volatile v;
#endif
int nomansland(char *);
int gvar;
void removeSpaces(char *);
void tokendelete();
void concatenate_string(char *, char *);
void tokenizer_space( char *);
void tokenizer_space_e( char *);
void tokenizer_com( char *);
void tokenizer_par( char *);
void tokenizer_par_z ( char *);
void tokenizer_smaller ( char *);
char * closequalcheck (char *);
void tokenizer_qot (char *);
void reader (char* , int );
void reader_liner (char* , int );
void reader_sqli (char* , int );
void locator (char *);
void locator_c (char *);
void locator_liner (char *, int );
void removenter (char *);
void header();
void footer();
void footer_2();
void reporter();
void forko( char *);
//void *thread_func();
void tokenizer_qot_e ( char *);
void tokendelete_f();



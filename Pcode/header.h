#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <ftw.h>
#include <dirent.h>
#include <termios.h>
#include <unistd.h>

int message(char *, char *, char *, char *);
int messagex(char *, char *, char *, char *);
int messagei(char *, char *, char *, char *);
int messagep(char *, char *, char *, char *);

int db0(char *, int8_t *, char *);
int db1(char *,int8_t *, char *);
int db2(char *,int8_t *, char *);
int db3(char *,int8_t *, char *);
int myfunc(const char *, const struct stat *, int);
int sum;

#endif
void gchck_tsk ();
void sig_handler(int);
void footer();
void reporter();
void *term();
void removeSpaces(char *str1);
void removenter (char *);

char p2[1000];
char p1[1000];
char p3[1000];
char p4[1000];
char p5[3];
char r[3];
int s;

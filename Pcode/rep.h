//
//  rep.h
//  P-Code
//
//  Created by A Pazvant on 03/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#ifndef rep_h
#define rep_h
#include <pthread.h>
#include <stdio.h>
struct xarray {
		
		char inputarray[1000];
		char *finalarray[];
		
	};
	struct xarray parray;

struct global {
	char globalx[100];
	char *globaly;
	int  globalz;
};



short th;
int high;
int low;
int medium;
int info;
char dezelft[1000];
char sqli_glo[100];
int liney;
char *fixx;
int fdw;
int fdi;
int counter;
int counter2;
int counter3;
long pos;
FILE *fpc;
char *global_desc;
char p10[3];
#endif 
/* rep_h */


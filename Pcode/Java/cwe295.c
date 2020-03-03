//
//  cwe295.c
//  P-Code
//
//  Created by A Pazvant on 15/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"
void ssl (paz *cwe295)
{
	header();
	printf("\e[9C🎯  CWE ID %s\n", cwe295->Cx);
	printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe295->Bx);
	if (strcmp(cwe295->Rx,"H") == 0) {
		
		high++;
		
	}
	else if (strcmp(cwe295->Rx,"M") == 0){
		medium++;
	}
	else if (strcmp(cwe295->Rx,"L") == 0) {
		low++;
	}
	printf("\e[9CLine number in the code: %d\e[25m\n\n", cwe295->Dx);
	printf("\e[9C\e[93m Hostnameverifier() method itself is not enough to validate certificate, it can be bypassed during MiTM attacks \n\n\e[31m\e[32m");
	locator(cwe295->Bx);
	reader(cwe295->Bx ,cwe295->Dx);
	footer();
	if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {
	printf("\e[32m\e[32m\e[9C Parameter Search (Y)\e[25m\n");
	fgets(sc, sizeof(sc), stdin);
	if(strstr(sc,"Y")) {
		
		fseek(stdin,0,SEEK_END);
		
		thread_func();
		memset(&bufy, 0, sizeof(bufy)); }
	else {
		
	printf("\e[32m\e[32m\e[9C Open Source File (Y)\e[25m");
	
	fgets(sc, sizeof(sc), stdin);
	if(strstr(sc,"Y")) {
		
		forko(cwe295->Bx);
	}}}sleep(0.5);
	
}


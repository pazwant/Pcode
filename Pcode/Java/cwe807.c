//
//  cwe809.c
//  P-Code
//
//  Created by A Pazvant on 06/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//
#include "rep.h"
#include "header2.h"
void rel (paz *cwe807)
{
	header();
	printf("\e[9C🎯  CWE ID %s\n", cwe807->Cx);
	printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe807->Bx);
	if (strcmp(cwe807->Rx,"H") == 0) {
		
		high++;
		
	}
	else if (strcmp(cwe807->Rx,"M") == 0){
		medium++;
	}
	else if (strcmp(cwe807->Rx,"L") == 0) {
		low++;
	}
	printf("\e[9CLine number in the code: %d\e[25m\n", cwe807->Dx);
	printf("\n\e[9C\e[93mCheck for the reliance on Untrusted Inputs in a Security Decision \n\n\e[31m\e[32m");
	locator(cwe807->Bx);
	reader(cwe807->Bx ,cwe807->Dx);
	footer();
	if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {

	printf("\e[32m\e[32m\e[9C Parameter Search (Y)\e[25m\n");
	fgets(sc, sizeof(sc), stdin);
	if(strstr(sc,"Y")) {
		
		fseek(stdin,0,SEEK_END);
		
		thread_func();
		memset(&bufy, 0, sizeof(bufy));}
	else {
		
	printf("\e[32m\e[32m\e[9C Open Source File (Y)\e[25m");
	
	fgets(sc, sizeof(sc), stdin);
	if(strstr(sc,"Y")) {
		
		forko(cwe807->Bx);
	} } }
	sleep(0.5);
}

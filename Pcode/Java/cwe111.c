//
//  cwe111.c
//  P-Code
//
//  Created by A Pazvant on 12/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//


#include "header2.h"
#include "rep.h"
void inslibrary (paz *cwe111)
{
	header();
	printf("\e[9C🎯  CWE ID %s\n", cwe111->Cx);
	printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe111->Bx);
	if (strcmp(cwe111->Rx,"H") == 0) {
		
		high++;
		
	}
	else if (strcmp(cwe111->Rx,"M") == 0){
		medium++;
	}
	else if (strcmp(cwe111->Rx,"L") == 0) {
		low++;
	}
	printf("\e[9CLine number in the code: %d\e[25m\n", cwe111->Dx);
	printf("\n\e[9C\e[93mCheck for the  dll injection issues \n\n\e[31m\e[32m");
	locator(cwe111->Bx);
	reader(cwe111->Bx ,cwe111->Dx);
	footer();
	nomansland((cwe111->Bx));
	
}

//
//  cwe319.c
//  P-Code
//
//  Created by A Pazvant on 15/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"
void ssocket (paz *cwe319)
{
	header();
	printf("\e[9C🎯  CWE ID %s\n", cwe319->Cx);
	printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe319->Bx);
	if (strcmp(cwe319->Rx,"H") == 0) {
		
		high++;
		
	}
	else if (strcmp(cwe319->Rx,"M") == 0){
		medium++;
	}
	else if (strcmp(cwe319->Rx,"L") == 0) {
		low++;
	}
	printf("\e[9CLine number in the code: %d\e[25m\n\n", cwe319->Dx);
	printf("\e[9C\e[93m Cleartext Transmission of Information is identified , check if the sensitive data is used ot not..\n\n\e[31m\e[32m");
	locator(cwe319->Bx);
	reader(cwe319->Bx ,cwe319->Dx);
	footer();
	
	if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {
	
		printf("\e[32m\e[32m\e[9C Parameter Search (Y)\e[25m\n");
	
		fgets(sc, sizeof(sc), stdin);
	
		if(strstr(sc,"Y"))
			{
		
				fseek(stdin,0,SEEK_END);
				
				thread_func();
				
				memset(&bufy, 0, sizeof(bufy)); }
	else {
		
	printf("\e[32m\e[32m\e[9C Open Source File (Y)\e[25m");
	
	fgets(sc, sizeof(sc), stdin);
	if(strstr(sc,"Y")) {
		
		forko(cwe319->Bx);
	}} }sleep(0.5);
}

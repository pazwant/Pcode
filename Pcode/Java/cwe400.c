//
//  cwe400.c
//  P-Code
//
//  Created by A Pazvant on 10/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"

void dos(paz *cwe400)
{
	int line = 0;
	FILE *dosf = fopen(cwe400->Bx, "r");
	if (dosf == NULL) {
		printf("Error Occured.\n");
	}
	
	while ( (fgets(bufy,sizeof(bufy),dosf) != NULL))
	{
		if( (strstr(bufy,cwe400->Ax) != NULL) && (liney != (cwe400->Dx))  &&  (strstr(bufy, "++)") != NULL) ) {
			
			if (strcmp(cwe400->Rx,"H") == 0) {
				
				 high++;
				
			}
			else if (strcmp(cwe400->Rx,"M") == 0){
				 medium++;
			}
			else if (strcmp(cwe400->Rx,"L") == 0) {
				 low++;
			}
			liney = cwe400->Dx;
			header();
			printf("\e[9C🎯  CWE ID %s\n", cwe400->Cx);
			printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe400->Bx);
			printf("\e[9CLine number in the code: %d\e[25m\n", cwe400->Dx);
			printf("\n\e[9C\e[93mCheck for the \"for loop\" parameter for DoS \n\n\e[31m\e[32m");

			locator(cwe400->Bx);
			reader(cwe400->Bx ,cwe400->Dx);
			footer();
			if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {

			fseek(dosf,start,line-1);
			printf("\e[32m\e[32m\e[9C Parameter Search (Y)\e[25m\n");
			fgets(sc, sizeof(sc), stdin);
			if(strstr(sc,"Y")) {
				
				fseek(stdin,0,SEEK_END);
				
				//thread_func();
				memset(&bufy, 0, sizeof(bufy)); }
			else {
				
			printf("\e[32m\e[32m\e[9C Open Source File (Y)\e[25m");
			
			fgets(sc, sizeof(sc), stdin);
			if(strstr(sc,"Y")) {
				
				forko(cwe400->Bx);
			}
			
			sleep(0.5);
			
			line++;
			}} line++; }}
	fclose(dosf);
	  memset(&bufy, 0, sizeof(bufy));
}

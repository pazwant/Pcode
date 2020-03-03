//
//  cwe190.c
//  PiCode
//
//  Created by A Pazvant on 12/10/2016.
//  Copyright © 2016 Paz. All rights reserved.
//


#include "header2.h"
#include "rep.h"

void integer(paz *cwe190)
{
	int line = 0;
	FILE *dosf = fopen(cwe190->Bx, "r");
	if (dosf == NULL) {
		printf("Error Occured.\n");
	}
	
	while ( (fgets(bufy,sizeof(bufy),dosf) != NULL))
	{
		if( (strstr(bufy,cwe190->Ax) != NULL) && (liney != (cwe190->Dx))  &&  (strstr(bufy, "++)") != NULL) ) {
			
			if (strcmp(cwe190->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe190->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe190->Rx,"L") == 0) {
				low++;
			}
			liney = cwe190->Dx;
			header();
			printf("\e[9C🎯  CWE ID %s\n", cwe190->Cx);
			printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe190->Bx);
			printf("\e[9CLine number in the code: %d\e[25m\n\n", cwe190->Dx);
			printf("\e[9C\e[93mCheck for the \"casted type takes any user controlled input param\" which can lead potential integer overflow \n\n\e[31m\e[32m");
			
			locator(cwe190->Bx);
			reader(cwe190->Bx ,cwe190->Dx);
			footer();
			if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {
				
				fseek(dosf,start,line-1);
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
						
						forko(cwe190->Bx);
					}
					
					sleep(0.5);
					
					line++;
				}} line++; }}
	fclose(dosf);
	  memset(&bufy, 0, sizeof(bufy));
}

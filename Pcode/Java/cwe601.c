//
//  cwe601.c
//  P-Code
//
//  Created by A Pazvant on 28/07/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"
void openred (paz *cwe601) {
	int line = 0;
	int ref = 0;
	int spoint = 0;
	char substring[100];
	char *keys;
	FILE *openredf = fopen(cwe601->Bx, "r");
	if (openredf== NULL) {
		printf("Error Occured.\n");
	}

	int len = strlen(cwe601->Ax);
	if (len > 0) {
		keys = strstr(cwe601->Ax , cwe601->Px);}
	
	tokenizer_par(keys);
	removeSpaces(cwe601->Ax);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");
	
	if ((pSs[1] != NULL) && (strstr(pSs[1], "=") == NULL ) && (strstr(pSs[1], ".") == NULL ) && (strstr(pSs[1], "\n") == NULL )&& (strstr(pSs[1], "private") == NULL )&&(strstr(pSs[1], ",") == NULL )&&(strstr(pSs[1], "public") == NULL )&& (strcmp(pSs[1],dezelft)!=0)) {
		if (strcmp(cwe601->Rx,"H") == 0) {
			
			high++;
			
		}
		else if (strcmp(cwe601->Rx,"M") == 0){
			medium++;
		}
		else if (strcmp(cwe601->Rx,"L") == 0) {
			low++;
		}
		
		header();
		printf("\e[9C🎯  CWE ID %s\n", cwe601->Cx);
		printf ("\e[9CSource File:%s\n", cwe601->Bx);
		printf("\e[9C\e[32mLine number in the code: %d\n\e[32m\n\n" , cwe601->Dx);
		printf ("\e[9C\e[93mThe HTTP response redirect \e[31m\"%s\"\e[40m \e[93mis detected\e[93m\n\e[25m\e[32m" , cwe601->Ax);
		locator(cwe601->Bx);
		reader(cwe601->Bx ,cwe601->Dx);
		
		while (fgets(bufy,sizeof(bufy),openredf) != NULL)
			
		{
			if ((strstr(bufy, pSs[1]) != NULL) && (strstr(bufy, " = ") != NULL))
			{
				
				removeSpaces(bufy);
				fseek(openredf,start,line-1);
				printf("\e[9C\e[32mThe redirect definition in the code: %d\n" , line+1);
				printf ("\n\e[9C\e[32mThe definition details are\n  \e[9C\e[31m%s", bufy);
				
				footer();
				if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {

				printf("\e[32m\e[32m\e[9C Parameter Search (Y)\n\e[25m\n");
				fgets(sc, sizeof(sc), stdin);
				if(strstr(sc,"Y")) {
					
					fseek(stdin,0,SEEK_END);
					thread_func();
					memset(&bufy, 0, sizeof(bufy)); }
			  ref = 1;
					

			
		memcpy(dezelft,pSs[1],strlen(pSs[1]));
	
				
					if (ref == 1)
					{
						printf("\e[32m\e[32m\e[9C Open Source File (Y)\e[25m");
						fgets(sc, sizeof(sc), stdin);
						if(strstr(sc,"Y")) {
							forko(cwe601->Bx);
							}}
					 } sleep(0.5);
								}++line; }
						fclose(openredf);
								tokendelete();
		  memset(&bufy, 0, sizeof(bufy));
	}}




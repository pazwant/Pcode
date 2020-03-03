//
//  cwe643.c
//  P-Code
//
//  Created by A Pazvant on 28/07/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"
void xpathi (paz *cwe643) {
	int line = 0;
	int indx = 0;
	int indx_2 = 0;
	int logic = 0;
	int logic_2 = 0;
	FILE *xpathf = fopen(cwe643->Bx, "r");
	if (xpathf== NULL) {
		printf("Error Occured.\n");
	}
	
	char *assg = NULL;
	char *assg_1 = NULL;
	tokenizer_space(cwe643->Ax);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");
	
	if ((pSs[1] != NULL) && (strstr(pSs[1], "=") == NULL ) && (strstr(pSs[1], ".") == NULL ) && (strstr(pSs[1], "private") == NULL )&&(strstr(pSs[1], ",") == NULL )&&(strstr(pSs[1], "public") == NULL )) {
		char xpathi_p [] = ".compile";
		char xpathi_r [] = ".evaluate";
		assg = (char *)malloc( 500 );
		assg_1 = (char *)malloc( 500 );
		sprintf(assg, "%s" , pSs[1]);
		sprintf(assg_1, "%s" , pSs[1]);
		concatenate_string(assg,xpathi_p);
		concatenate_string(assg_1,xpathi_r);
		while (fgets(bufy,sizeof(bufy),xpathf) != NULL)
			
		{
			if (strstr(bufy, assg) != NULL)
			{
				logic = 1;
				indx = line+1;
			}
			
			else if (strstr(bufy, assg_1) != NULL)
			{
				logic_2 = 1;
				indx_2 = line+1;
			}
			
			++line;
		}
		
		if ((logic == 1) && (strcmp(pSs[1],dezelft)!=0)) {
			if (strcmp(cwe643->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe643->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe643->Rx,"L") == 0) {
				low++;
			}
			
			header();
			printf("\e[9C🎯  CWE ID %s\n", cwe643->Cx);
			printf("\e[9CThe source file name: %s\n", cwe643->Bx);
			printf("\n\n\e[9C\e[93mCheck the input validation in Xpath Object :\e[31m\"%s\"\e[32m, \e[93mit might be vulnerable to Xpath injection \e[32m\n" , pSs[1] );
			printf("\n\e[9C\e[32mThe object definition is on line  %d\e[32m\n\n\n" , cwe643->Dx);
			
			
			locator(cwe643->Bx);
			reader_liner(cwe643->Bx ,cwe643->Dx);
			
			printf ("\e[9C\e[32m------------------------------------------------------------------------------------------------------------------------------------------------------------------\e[32m\n");
			
			printf("\n\n\e[9C\e[93mThe XPath method \e[31m\"%s.\"\e[32m  \e[93mis used on line %d\e[32m\n\n\n" , assg,indx);
			locator(cwe643->Bx);
			reader_liner(cwe643->Bx ,indx);
			
			footer();
			
			logic = 0;
		}
		if ((logic_2 == 1) && (strcmp(pSs[1],dezelft)!=0)) {
			
			if (strcmp(cwe643->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe643->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe643->Rx,"L") == 0) {
				low++;
			}
			header();
			printf("\e[9C🎯  CWE ID %s\n", cwe643->Cx);
			printf("\e[9CThe source file name: %s\n", cwe643->Bx);
			printf("\n\n\e[9C\e[93mCheck the input validation in Xpath Object :\e[31m\"%s\"\e[32m, \e[93mit might be vulnerable to Xpath injection\e[32m\n" , pSs[1] );
			printf("\n\e[9C\e[32mThe object definition is on line  %d:\e[32m\n\n" , cwe643->Dx);
			
			
			locator(cwe643->Bx);
			reader_liner(cwe643->Bx ,cwe643->Dx);
			printf ("\e[9C\e[32m------------------------------------------------------------------------------------------------------------------------------------------------------------------\e[32m\n");
			
			printf("\n\n\e[9C\e[93mThe XPath method \e[31m\"%s.\"\e[32m  \e[93mis used on line %d:\e[32m\n\n" , assg_1,indx_2);
			locator(cwe643->Bx);
			reader_liner(cwe643->Bx ,indx_2);
			
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
				
				forko(cwe643->Bx);
			}
			logic_2 = 0;
			}
		
			}
			sleep(0.4);
		memcpy(dezelft,pSs[1],strlen(pSs[1])); }
	}
		fclose(xpathf);
		free(assg);
		free(assg_1);
		tokendelete();
		memset(&bufy, 0, sizeof(bufy));}

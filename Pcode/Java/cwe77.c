//
//  cwe77.c
//  P-Code
//
//  Created by A Pazvant on 28/07/16.
//  Copyright © 2016 Paz. All rights reserved.
//


#include "header2.h"
#include "rep.h"
void commandi (paz *cwe77) {
	int line = 0;
	int indx = 0;
	int logic = 0;
	
	FILE *commandf = fopen(cwe77->Bx, "r");
	if (commandf== NULL) {
		printf("Error Occured.\n");
	}

	char *assg = NULL;
	char *assg_ = NULL;
	tokenizer_space(cwe77->Ax);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");
	
	if ( (*pSs[1])  && (strcmp(pSs[1],dezelft)!=0)) {
		char commandi_p [] = ".exec";
		
		assg = (char *)malloc(500);
		assg_ = (char *)malloc(500);
		
		sprintf(assg, "%s" , pSs[1]);
		
		concatenate_string(assg,commandi_p);
		sprintf(assg_, "%c%s", ' ' ,assg);
		
		while (fgets(bufy,sizeof(bufy),commandf) != NULL)
			
		{
			if (strstr(bufy, assg_) != NULL)
			{
				logic = 1;
				indx = line+1;
			}
			++line;
		}
		
		if (logic == 1) {
			if (strcmp(cwe77->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe77->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe77->Rx,"L") == 0) {
				low++;
			}
			
			header();
			printf("\e[9C🎯  CWE ID %s\n", cwe77->Cx);
			printf("\e[9CThe source file name:  %s\n", cwe77->Bx);
			printf("\n\n\e[9C\e[93mCheck the input validation in Runtime.exec Object :\e[31m\"%s\"\e[32m, \e[93mit might be vulnerable to Command Injection\e[32m\n" , pSs[1] );
			printf("\e[9C\e[93mThe object definition is on line:  %d\e[32m\n\n\n" , cwe77->Dx);
			
			
			locator(cwe77->Bx);
			reader(cwe77->Bx ,cwe77->Dx);
			 printf ("\e[9C\e[32m------------------------------------------------------------------------------------------------------------------------------------------------------------------\e[32m\n");
			
			printf("\n\n\e[9C\e[93mThe exec method \e[31m\"%s.exec\"\e[93m is used on line: %d\e[32m\n\n\n" , pSs[1],indx);
			locator(cwe77->Bx);
			reader(cwe77->Bx ,indx);
			
			footer();
			nomansland((cwe77->Bx));
			fseek(stdin,0,SEEK_END);
			logic = 0;
			memcpy(dezelft,pSs[1],strlen(pSs[1]));
		
		}}
	
	fclose(commandf);
	free(assg);
	free(assg_);
	memset(&bufy, 0, sizeof(bufy));
	tokendelete(); }

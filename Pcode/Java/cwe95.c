//
//  cwe95.c
//  P-Code
//
//  Created by A Pazvant on 06/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"
void commandix (paz *cwe95) {
	int line = 0;
	int indx = 0;
	int logic = 0;
	FILE *commandixf = fopen(cwe95->Bx, "r");
	if (commandixf== NULL) {
		printf("Error Occured.\n");
	}
	
	char *assg = NULL;
	tokenizer_space(cwe95->Ax);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");
	
	if ((pSs[1] != NULL) && (strstr(pSs[1], "=") == NULL ) && (strstr(pSs[1], ".") == NULL ) && (strstr(pSs[1], "private") == NULL )&&(strstr(pSs[1], ",") == NULL )&&(strstr(pSs[1], "public") == NULL ) && (strcmp(pSs[1],dezelft)!=0)) {
		char commandi_p [] = ".eval";
		assg = (char *)malloc( 500 );
		sprintf(assg, "%s" , pSs[1]);
		concatenate_string(assg,commandi_p);
		while (fgets(bufy,sizeof(bufy),commandixf) != NULL)
			
		{
			if (strstr(bufy, assg) != NULL)
			{
				logic = 1;
				indx = line+1;
			}
			++line;
		}
		
		if (logic == 1) {
			if (strcmp(cwe95->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe95->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe95->Rx,"L") == 0) {
				low++;
			}
			
			header();
			printf("\e[9C🎯  CWE ID %s\n", cwe95->Cx);
			printf("\e[9CThe source file name:  %s\n", cwe95->Bx);
			printf("\n\n\e[9C\e[93mCheck the input validation in ScriptEngine Object \e[31m\"%s\"\e[32m, \e[93mit might be vulnerable to  Injection\e[32m\n\n" , pSs[1] );
			printf("\e[9C\e[93mThe object definition is on line  %d\e[32m\n\n\n" , cwe95->Dx);
			logic = 0;
			
			locator(cwe95->Bx);
			reader(cwe95->Bx ,cwe95->Dx);
			printf ("\e[9C\e[32m------------------------------------------------------------------------------------------------------------------------------------------------------------------\e[32m\n");
			
			printf("\n\n\e[9C\e[93mThe eval method \e[31m\"%s.exec\"\e[93m is used on line %d\e[32m\n\n\n" , pSs[1],indx);
			locator(cwe95->Bx);
			reader(cwe95->Bx ,indx);
			
		     nomansland((cwe95->Bx));
		     memcpy(dezelft,pSs[1],strlen(pSs[1]));
		
		} }
	
	fclose(commandixf);
	free(assg);
	memset(&bufy, 0, sizeof(bufy));
	tokendelete(); }

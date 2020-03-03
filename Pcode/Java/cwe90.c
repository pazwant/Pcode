//
//  cwe90.c
//  P-Code
//
//  Created by A Pazvant on 27/07/16.
//  Copyright © 2016 Paz. All rights reserved.
//


#include "header2.h"
#include "rep.h"
void ldapi (paz *cwe90) {
	int logic = 0;
	int indx=0;
	int line =0;
	struct global ldapi;

	FILE *ldapf = fopen(cwe90->Bx, "r");
	if (ldapf== NULL) {
		printf("Error Occured.\n");
	}
	char *assg = (char *)malloc( 500 );
	char *assg_ = (char *)malloc( 500 );
	char ldapi_p [] = ".search";
	
	tokenizer_space(cwe90->Ax);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");
	
	sprintf(assg, "%s" , pSs[1]);
	concatenate_string(assg,ldapi_p);
	sprintf(assg_, "%c%s", ' ' ,assg);
	
	
	if (*(pSs[1])) {
		
		

		while (fgets(bufy,sizeof(bufy),ldapf) != NULL)
			
		{
			
			if (strstr(bufy, assg) != NULL)
			{
				logic = 1;
				indx = line+1;
			}
			++line;
		}
		
		if ((logic == 1) && (cwe90->Dx != ldapi.globalz ) ){
			if (strcmp(cwe90->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe90->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe90->Rx,"L") == 0) {
				low++;
			}

			header();
			printf("\e[6C🎯  CWE ID %s\n", cwe90->Cx);
			printf("\e[9CSource file: %s\n", cwe90->Bx);
			printf("\n\n\e[9C\e[93mCheck the input validation in Ldap Query Object :\e[31m\"%s\"\e[32m, \e[93mit might be vulnerable to ldap injection \n\e[25m" , pSs[1] );
			printf("\e[9C\e[93mThe object definition is on line  %d\e[32m\n\n\n" , cwe90->Dx);
		    ldapi.globalz = cwe90->Dx;
			
			locator(cwe90->Bx);
			reader(cwe90->Bx ,cwe90->Dx);
			printf ("\e[9C\e[32m------------------------------------------------------------------------------------------------------------------------------------------------------------------\e[32m\n");
			
			printf("\n\n\e[9C\e[93mThe Ldap search string \e[31m\"%s.search\"\e[32m \e[93mis defined on line %d\e[32m\n\n\n" , pSs[1],indx);
			
			locator(cwe90->Bx);
			reader(cwe90->Bx ,indx);
		
		footer();
			nomansland((cwe90->Bx));
	}
		 }
	fclose(ldapf);
	free(assg);
	free(assg_);
	memset(&bufy, 0, sizeof(bufy));
	tokendelete(); }

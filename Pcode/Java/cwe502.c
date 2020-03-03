//
//  cwe502.c
//  P-Code
//
//  Created by A Pazvant on 05/01/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"
void serilization(paz *cwe502)
{
	char  static flag[]= ".readObject()";
	
	struct global ser;

	
	int liner = 0;
	int logic = 0;
	char *r;
	
	
	char *assg = (char *)malloc(500);
	char *assg_ = (char *)malloc(500);
	
	FILE *serilization = fopen(cwe502->Bx, "r");
	if (serilization == NULL) {
		printf("Error Occured.\n");
			}
	
	r = *&cwe502->Ax;
	tokenizer_space(r);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");

	
	memcpy(assg, pSs[1], strlen(pSs[1]));
	concatenate_string(assg,flag);
	sprintf(assg_, "%c%s", ' ' ,assg);
	
	if ( (*pSs[1])&& (strcmp(pSs[1],ser.globalx)!=0) )  {
		
		
		while (fgets(bufy,sizeof(bufy),serilization) != NULL) {
			++liner;
	
			if ( (strstr(bufy,assg_) != NULL)  ) {
				
	
			if (strcmp(cwe502->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe502->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe502->Rx,"L") == 0) {
				low++;
			}
			
			header();

				printf("\e[9C🎯  CWE ID %s\n", cwe502->Cx);
				printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe502->Bx);
				printf("\e[9CLine number in the code: %d\e[25m\n\n", liner);
				printf ("\e[9C\e[93mPotential Serilization vulnerability in \e[31m\"%s\"\e[32m \e[93mobject \e[31m\"%s\"\n\n\e[31m\e[32m", cwe502->Px, pSs[1]);
				strcpy(ser.globalx,pSs[1]);
				locator(cwe502->Bx);
				reader(cwe502->Bx ,liner);
				footer();
				nomansland((cwe502->Bx));
				fseek(stdin,0,SEEK_END);
			
					}
			
		}
				fclose(serilization);
				free(assg);
				free(assg_);
	
 
				tokendelete();
 
				memset(&bufy, 0, sizeof(bufy));
	}}

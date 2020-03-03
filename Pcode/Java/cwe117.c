//
//  log.c
//  P-Code
//
//  Created by Paz on 21/03/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//

#include "rep.h"
#include "header2.h"
#include "header.h"
void* thread_func();
void logi(paz *cwe117)

{
	int line = 0;
	FILE *logi = fopen(cwe117->Bx, "r");
	if (logi == NULL) {
		printf("Error Occured.\n");
	}

	
	if (liney != (cwe117->Dx)) {
		header();
		printf("\e[9C🎯  CWE ID %s\n", cwe117->Cx);
		printf("\e[9CCWE ID http://cwe.mitre.org/data/definitions/533.html\n");
		
		printf ("\e[1W\e[9C\e[7hThe source file name: %s\e[7h\n\n", cwe117->Bx);
		
	
	

	while ( (fgets(bufy,sizeof(bufy),logi) != NULL))
	{
		if( (strstr(bufy,cwe117->Ax) != NULL) && (liney != (cwe117->Dx))) {
			if (strcmp(cwe117->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe117->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe117->Rx,"L") == 0) {
				low++;
			}
			
			liney = cwe117->Dx;
			fixx = *&cwe117->Ax;
			fseek(logi,start,line-1);
			printf("\e[9CLine number in the code:\e[93m %d\e[25m\n\n", cwe117->Dx);
			printf("\e[9C\e[93mCheck for the sensitive parameter storage and log forging issues \n\n\e[31m\e[32m");
			locator(cwe117->Bx);
			reader(cwe117->Bx ,cwe117->Dx);
			footer();
			
			nomansland((cwe117->Bx));
						
			
			
			line++;
		
	}}
	fclose(logi);
	
	}
	  memset(&bufy, 0, sizeof(bufy));
}

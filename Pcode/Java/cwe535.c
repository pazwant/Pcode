//
//  cwe200.c
//  P-Code
//
//  Created by A Pazvant on 05/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "rep.h"
#include "header2.h"
void logi2(paz *cwe535)
{
	if (dezelft[0] != '\0') {
		
		memset(dezelft, 0, 100 * (sizeof dezelft[0]));}
	
	struct global log2;


	FILE *logi2 = fopen(cwe535->Bx, "r");
	if (logi2 == NULL) {
		printf("Error Occured.\n");
	}
    char blacklist[][200] = {"System.out.println() "};
	
	if  (strstr(cwe535->Ax,blacklist[0]) == NULL) {
	
	while ( (fgets(bufy,sizeof(bufy),logi2) != NULL))
	{
		
		if ((strstr(bufy,cwe535->Ax) != NULL) && (strstr(bufy,"+") != NULL) && (strcmp(bufy,dezelft)!=0) && (cwe535->Dx != log2.globalz) ) {

			header();
			if (strcmp(cwe535->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe535->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe535->Rx,"L") == 0) {
				low++;
			}
			

		printf("\e[9C🎯  CWE ID %s\n", cwe535->Cx);
		printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe535->Bx);
	    memcpy(dezelft,bufy,strlen(bufy));
		printf("\e[9CLine number in the code: %d\e[25m\n\n", cwe535->Dx);
		log2.globalz = cwe535->Dx;
		printf("\e[9C\e[93mCheck for the sensitive information exposure in System.err\n\n\e[31m\e[32m");
		locator(cwe535->Bx);
		reader(cwe535->Bx ,cwe535->Dx);
		footer();
		
			
			nomansland((cwe535->Bx));
			fseek(stdin,0,SEEK_END);
		
		}
	} fclose(logi2);
	  memset(&bufy, 0, sizeof(bufy));

	}}

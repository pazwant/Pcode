	//
	//  xxe.c
	//  P-Code
	//
	//  Created by Paz on 06/03/15.
	//  Copyright (c) 2015 Paz. All rights reserved.
	//
	#include "header2.h"
	#include "rep.h"
	void xxe(paz *cwe611)
	{
		int logic = 0;
		struct global xxee;
		FILE *xxe = fopen(cwe611->Bx, "r");
		if (xxe == NULL) {
			printf("Error Occured.\n");
		}
		char *assg = NULL;
		removeSpaces(cwe611->Ax);
		tokenizer_space(cwe611->Ax);
		strtok(pSs[1], "\n");
		strtok(pSs[1], ";");
		
		if ((pSs[1] != NULL) && (strstr(pSs[1], "=") == NULL ) && (strstr(pSs[1], ".") == NULL ) && (strstr(pSs[1], "private") == NULL )&&(strstr(pSs[1], ",") == NULL )&&(strstr(pSs[1], "public") == NULL )&& (strcmp(pSs[1],dezelft)!=0) && (strstr(pSs[1], "log") == NULL )) {
			char xxe_p [] = ".setFeature(\"http://apache.org/xml/features/disallow-doctype-decl\", true)";
			assg = (char *)malloc( 500 );
			sprintf(assg, "%s" , pSs[1]);
			concatenate_string(assg,xxe_p);
			
			while (fgets(bufy,sizeof(bufy),xxe) != NULL)
			{
				if (strstr(bufy, assg) != NULL)
				{
					logic = 1;
				}
				
			
			if ((logic != 1) && (strcmp(bufy,dezelft)!=0) && (cwe611->Dx != xxee.globalz))  {
				if (strcmp(cwe611->Rx,"H") == 0) {
					
					high++;
					
				}
				else if (strcmp(cwe611->Rx,"M") == 0){
					medium++;
				}
				else if (strcmp(cwe611->Rx,"L") == 0) {
					low++;
				}
				
				header();
				printf("\e[9C🎯  CWE ID %s\n", cwe611->Cx);
				printf("\e[9CThe source file name: %s\n", cwe611->Bx);
				
				printf("\n\e[9CLine number in the code: %d\n" , cwe611->Dx);
				xxee.globalz = cwe611->Dx;
			    printf("\n\e[9C\e[93mThe \"%s\" method  \e[31m\"%s\"\e[32m \e[93mobject is vulnerable to XXE\e[25m\e[32m\n" ,pSs[0], pSs[1] );
			locator(cwe611->Bx);
			reader(cwe611->Bx ,cwe611->Dx);
			
			footer();
				nomansland((cwe611->Bx));
				fseek(stdin,0,SEEK_END);
			}} sleep(0.6);
		
		memcpy(dezelft,bufy,strlen(bufy));
		             }

			fclose(xxe);
		    tokendelete();
		  memset(&bufy, 0, sizeof(bufy));
		}
		







//
//  cwe329.c
//  P-Code
//
//  Created by A Pazvant on 08/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"

void iv (paz *cwe329) {
	

	int line=0;
	char *assg = NULL;

	

FILE *iv = fopen(cwe329->Bx, "r");
if (iv == NULL)
{
	printf("\e[9CError Occured.\n");
}

	tokenizer_par(cwe329->Ax);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");
		if ((pSs[1] != NULL) && (strstr(pSs[1], "=") == NULL ) && (strstr(pSs[1], ".") == NULL ) && (strstr(pSs[1], "private") == NULL )&&(strstr(pSs[1], ",") == NULL )&&(strstr(pSs[1], "public") == NULL ) && (strcmp(pSs[1],dezelft)!=0)) {
			
	
	
			while (fgets(bufy,sizeof(bufy),iv) != NULL)
				{
					char commandi_p [] = "byte[] ";
					assg = (char *)malloc( 500 );
					sprintf(assg, "%s" , pSs[1]);
					concatenate_string(commandi_p,assg);
					if (strstr(bufy,commandi_p) != NULL)
					{
							header();
							printf("\e[9C🎯  CWE ID %s\n", cwe329->Cx);
							printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe329->Bx);
							if (strcmp(cwe329->Rx,"H") == 0) {
								
								high++;
								}
							else if (strcmp(cwe329->Rx,"M") == 0){
								medium++;}
							else if (strcmp(cwe329->Rx,"L") == 0) {
								low++;}
				printf("\e[9CLine number in the code: %d\n\n" , line+1);
				printf ("\e[9C\e[93mCheck the initilization vector is random enough \n\e[40m\e[25m");
				locator(cwe329->Bx);
				reader(cwe329->Bx ,line+1);
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
					
					forko(cwe329->Bx);
				}
				
						}
							
						   ++line;
						} }
					++line;}
			memcpy(dezelft,pSs[1],strlen(pSs[1]));
			  fclose(iv);
			free(assg);
			memset(&bufy, 0, sizeof(bufy));
			tokendelete();
				}}

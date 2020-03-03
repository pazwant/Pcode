//
//  cwe378.c
//  P-Code
//
//  Created by A Pazvant on 27/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "rep.h"
#include "header2.h"
void fileper(paz *cwe378)
{
	int line = 0;
	int logic = 0;
	int indx = 0;
	int logic_1 = 0;
	int indx_1 = 0;
	int logic_2 = 0;
	int indx_2 = 0;
	FILE *fileper = fopen(cwe378->Bx, "r");
	if (fileper == NULL) {
		printf("Error Occured.\n");
	}
	char *assg = NULL;
	char *assg_1 = NULL;
	char *assg_2= NULL;
	
	tokenizer_space(cwe378->Ax);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");
	if ((pSs[1] != NULL) && (strstr(pSs[1], "=") == NULL ) && (strstr(pSs[1], ".") == NULL ) && (strstr(pSs[1], "private") == NULL )&&(strstr(pSs[1], ",") == NULL )&&(strstr(pSs[1], "public") == NULL )) {
		char temp_1 [] = ".setWritable";
		char temp_2[] = ".setReadable";
		char temp_3[] = ".setExecutable";
		assg = (char *)malloc( 500 );
		assg_1 = (char *)malloc( 500 );
		assg_2 = (char *)malloc( 500 );
		
		sprintf(assg, "%s" , pSs[1]);
		concatenate_string(assg,temp_1);
		concatenate_string(assg_1,temp_2);
		concatenate_string(assg_2,temp_3);
		
		
	while ( (fgets(bufy,sizeof(bufy),fileper) != NULL))
		{
		
		if (strstr(bufy, assg) != NULL)
			{
				logic = 1;
				indx = line+1;
			}
		
		else if (strstr(bufy, assg_1) != NULL)
			{
					logic_1 = 1;
				indx_1 = line+1;
			}
			
		else if (strstr(bufy, assg_2) != NULL)
			{
					logic_2 = 1;
					indx_2 = line+1;
			}
			

			++line;
			}
		
	  if (  (logic != 1) || (logic_1 != 1) || (logic_2 != 1) )
		  if (strcmp(pSs[1],dezelft)!=0)   {
			if (strcmp(cwe378->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe378->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe378->Rx,"L") == 0) {
				low++;
			}
			
		    header();
		    printf("\e[9C🎯  CWE ID %s\n", cwe378->Cx);
		    printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe378->Bx);
			printf("\e[9CLine number in the code: %d\e[25m\n\n", cwe378->Dx);
			printf("\e[9C\e[93mFile Permissions was not properly set on the  temp file. Opening temporary files without appropriate measures or controls can leave the file,\n\e[9Cits contents and any function that it impacts vulnerable to attack.\n\n\e[31m\e[32m");
			locator(cwe378->Bx);
			reader(cwe378->Bx ,cwe378->Dx);
			footer();
			if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {
			
			fseek(fileper,start,line-1);
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
					
					forko(cwe378->Bx);
				}
				
				sleep(0.5);
				
				line++;
			} } ++line; }}
	       fclose(fileper);
	free(assg);
	free(assg_1);
	free(assg_2);
	memset(&bufy, 0, sizeof(bufy));
	tokendelete();
	
}

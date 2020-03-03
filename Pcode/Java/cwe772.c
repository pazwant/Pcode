//
//  cwe772.c
//  P-Code
//
//  Created by Paz on 05/04/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//
#include "header2.h"
#include "rep.h"

void pp( paz *cwe772) {
	int line = 0;
	char *assg = NULL;
	int logic = 0;
	int indx = 0;
	int i = 0;
	char blacklist[][200] = {"protected void","implements" ,"\"", "void", "throws IOException","try","("};
	
	if ( (strstr(cwe772->Ax,blacklist[0]) == NULL) && (strstr(cwe772->Ax,blacklist[1]) == NULL) && (strstr(cwe772->Ax,blacklist[2]) == NULL)&& (strstr(cwe772->Ax,blacklist[3]) == NULL)&& (strstr(cwe772->Ax,blacklist[4]) == NULL) && (strstr(cwe772->Ax,blacklist[5]) == NULL) && (strstr(cwe772->Ax,blacklist[6]) == NULL)     ) {
	
	
	FILE *ff= fopen(cwe772->Bx, "r");
	if (ff == NULL)
	{
		printf("\e[9CError Occured.\n");
	}

	tokenizer_space(cwe772->Ax);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");
	char commandi_p [] = ".close()";
	assg = (char *)malloc( 500 );
	sprintf(assg, "%s" , pSs[1]);
	concatenate_string(assg,commandi_p);
	if ((pSs[1] != NULL) && (strstr(pSs[1], "=") == NULL ) && (strstr(pSs[1], ".") == NULL ) && (strstr(pSs[1], "prlogiate") == NULL )&&(strstr(pSs[1], ",") == NULL )&&(strstr(pSs[1], "public") == NULL ) && (strcmp(pSs[1],dezelft)!=0)) {
		
	
		while (fgets(bufy,sizeof(bufy),ff) != NULL)
		{
			
			if ((strstr(bufy, assg) != NULL))
			{
				logic = 1;
				indx = line+1;
			
			}
			++line;
			
			

		}
		if ((logic != 1)) {


				if (strcmp(cwe772->Rx,"H") == 0) {
					
					high++;
					
				}
				else if (strcmp(cwe772->Rx,"M") == 0){
					medium++;
				}
				else if (strcmp(cwe772->Rx,"L") == 0) {
					low++;
				}
				header();
				printf("\e[9C🎯  CWE ID %s\n", cwe772->Cx);
				printf ("\e[9CVulnerable file name %s\e[7h\n", cwe772->Bx);
				printf("\n\e[9CLine number in the code:%d\n\n" , cwe772->Dx);

				printf ("\e[9C\e[93mThe %s method object \e[31m\"%s\"\e[32m \e[93mis not closed\n\e[25m\e[32m\n", cwe772->Px , pSs[1]);
				locator(cwe772->Bx);
				reader(cwe772->Bx ,cwe772->Dx);
				footer();
								

									if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {		

				printf("\e[32m\e[32m\e[9C Parameter Search (Y)\e[25m");
				fgets(sc, sizeof(sc), stdin);
				if(strstr(sc,"Y")) {
				
				fseek(stdin,0,SEEK_END);
				
				thread_func();
					memset(&bufy, 0, sizeof(bufy)); }
			else {
				
				printf("\e[32m\e[9m\e[9C Open Source File (Y)\e[25m\n");
				
				fgets(sc, sizeof(sc), stdin);
				if(strstr(sc,"Y")) {
					
					forko(cwe772->Bx);
				}
				
			}
					sleep(0.5); }
		
		}
		memcpy(dezelft,pSs[1],strlen(pSs[1])); }
		fclose(ff);
		tokendelete();
		memset(&bufy, 0, sizeof(bufy));
	}}

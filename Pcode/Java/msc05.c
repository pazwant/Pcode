//
//  msc05.c
//  PiCode
//
//  Created by A Pazvant on 20/02/2017.
//  Copyright © 2017 Paz. All rights reserved.
//

#include "rep.h"
#include "header2.h"
void bufdos(paz *MSC05) {
	int line = 0;
	int indx = 0;
	int logic = 0;
	
		
	FILE *commandf = fopen(MSC05->Bx, "r");
	if (commandf== NULL) {
		printf("Error Occured.\n");
	}
	
	char *assg = NULL;
	char *assg_ = NULL;
	tokenizer_space(MSC05->Ax);
	
	int i = 0;
	int y = 19;
	int z;
	
	for(i = 0; i < 19; i++) {
	
		if (pSs[i] != NULL ) {
	  z =  strcmp(pSs[i], MSC05->Px);
		if (z == 0) {
			pSs[y] = pSs[i+1]; }
		}
	}
		
	
	
	strtok(pSs[y], "\n");
	strtok(pSs[y], ";");
	
	
	
	if ( (pSs[y] != NULL )  && (strcmp(pSs[y],dezelft)!=0)) {
		char commandi_p [] = ".readLine()";
		
		assg = (char *)malloc(500);
		assg_ = (char *)malloc(500);
		
		sprintf(assg, "%s" , pSs[y]);
		
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
			if (strcmp(MSC05->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(MSC05->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(MSC05->Rx,"L") == 0) {
				low++;
			}
			
			header();
			printf("\e[9C🎯  CWE ID %s\n", MSC05->Cx);
			printf("\e[9CThe source file name:  %s\n", MSC05->Bx);
			printf("\n\n\e[9C\e[93mAn attacker can simply supply an arbitrarily long line, causing the readLine() method to exhaust memory. Please check if the FileReader is used in  \e[31m\"%s\"\e[32m, \e[93\e[32m\n" , pSs[y] );
			printf("\e[9C\e[93mThe object definition is on line:  %d\e[32m\n\n\n" , indx);
			
			
			locator(MSC05->Bx);
			reader(MSC05->Bx ,indx);
			footer();
			nomansland((MSC05->Bx));
			fseek(stdin,0,SEEK_END);
			logic = 0;
			memcpy(dezelft,pSs[y],strlen(pSs[y]));
			
		}}
	
	fclose(commandf);
	free(assg);
	free(assg_);
	memset(&bufy, 0, sizeof(bufy));
	tokendelete(); }


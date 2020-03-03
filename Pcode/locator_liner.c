//
//  locator_liner.c
//  P-Code
//
//  Created by A Pazvant on 29/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"

void locator_liner (char* namer, int pointer) {
	char  r1[] = "private ";
	char  r2[] = "public ";
	char  r3[] = "protected ";
	int line_num__;
	int line;
	memset(datap, 0, sizeof(int)*10000);
	memset(datapc, 0, sizeof(int)*10000);
	memset(datapr, 0, sizeof(int)*10000);
	memset(stek_n2, 0, sizeof(int)*10000);
	int z= 0;
	int j = 0;
	int k = 0;
	FILE *fpc = fopen(namer, "r");
	if (fpc == NULL) {
		printf("\n\e[32m\e[40m\e[9C\e[5m2Error Occured.\n");
	}
    //fseek( fpc, pos, SEEK_CUR );
	while (fgets(bufy,sizeof(bufy),fpc) != NULL) {
		
		line++;
		if (line == pointer) {
		
		if (strstr(bufy, r1) != NULL) {
			datap[z+1] = z+1 ; //private block
		}
		
		if (strstr(bufy, r2) != NULL) {
			datapc[j+1] = j+1; //publicblock
		}
		
		if (strstr(bufy, r3) != NULL) {
			datapr[k+1] = k+1; //protected block
		}
		line_num__++;
		z++;
		j++;
		k++;
		}
	}
	
	fclose(fpc);
		memset(&bufy, 0, sizeof(bufy)); 
	
}

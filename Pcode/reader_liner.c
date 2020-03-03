//
//  reader_liner.c
//  P-Code
//
//  Created by A Pazvant on 30/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

//
//  Reader.c
//  P-Code
//
//  Created by A Pazvant on 01/07/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//

#include "header2.h"
#include <math.h>
void reader_liner (char* fname, int stek) {
	int line_num_ = 0;
	int z = 0;
	int v = 0;
	int stek_n3 = 0;
	
	//locator(fname);
	FILE *reader = fopen(fname, "r");
	if (reader == NULL) {
		printf("\n\e[32m\e[40m\e[9C\e[5m2Error Occured.\n");
	}
	
	
	for(z=0; z < (sizeof(datap)/sizeof(datap[0]))-1 ; z++)
	{
		if (datap[z] != 0)  {
			int stek_n1 = stek;
			if ((stek_n1 - datap[z]) > 0)
				stek_n2[z] = datap[z];
			
		}
	}
	
	for(z=0; z < (sizeof(datapc)/sizeof(datapc[0]))-1 ; z++)
	{
		if (datapc[z] != 0)  {
			int stek_n1w = stek;
			if ((stek_n1w - datapc[z]) > 0)
				stek_n2[z] = datapc[z];
			
		}
	}
	
	for(z=0; z < (sizeof(datapr)/sizeof(datapr[0]))-1 ; z++)
	{
		if (datapr[z] != 0)  {
			int stek_n1z = stek;
			if ((stek_n1z - datapr[z]) > 0)
				stek_n2[z] = datapr[z];
			
		}
	}
	for(v=0;  v < (sizeof(stek_n2)/sizeof(stek_n2[0]))-1; v++) {
		if(stek_n2[v] > stek_n2[0])
			stek_n2[0] = stek_n2[v];
	}
	
	
	stek_n3 = stek_n2[0];
	
	
	
	while (fgets(bufy,sizeof(bufy),reader) != NULL) {
		

		if(line_num_+1 == stek) {
			
			printf ("\e[6C\e[31mLine number %d ===>%s\e[32m", stek, bufy);
			fseek(reader,start,stek);
			if (strstr(bufy,";") == NULL) {
				int c;
				do {
					c = fgetc(reader); printf("\e[96m%c", c);
				}
				while(c != ';');
				printf("\e[7h\e[9C\n");}

		}
				//}
		
		++line_num_;
	}
	
	
	sleep(0.4);
	fclose(reader);
	//memset(&bufy, 0, sizeof(bufy));
	
}


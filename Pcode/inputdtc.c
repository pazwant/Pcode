//
//  inputdetector.c
//  PiCode
//
//  Created by A Pazvant on 11/09/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"
void tokendelete_f();

void inputdtc(char *input)
{
	
	FILE *ip = fopen(global_desc, "r");
	
	if (ip == NULL) {
		
			printf("Error Occured.\n");
	
	}
	
	counter = 0;
	counter2 = 0;
	counter3 = 0;
	int i = 0;
	int k = 0;
	int j = 0;
		
	
	if (dezelft[0] != '\0') {
		
		memset(dezelft, 0, 100 * (sizeof dezelft[0]));}
	
		char *assg_0 = NULL;
		char *assg_1 = NULL;
		char *assg_2 = NULL;
		char *assg_3 = NULL;
		char *assg_4 = NULL;
		char *assg_5 = NULL;

	
	   char can [][100] =  {".getParameter",".getParameterValues",".getParamaterMap",".getParameterNames","getParameterMap","getReader"};

	
		assg_0 = (char *)malloc( 1000 );
		assg_1 = (char *)malloc( 1000 );
		assg_2 = (char *)malloc( 1000 );
		assg_3 = (char *)malloc( 1000 );
		assg_4 = (char *)malloc( 1000 );
		assg_5 = (char *)malloc( 1000 );
	
		strncpy(assg_0,input,strlen(input)-1);
		strncpy(assg_1,input,strlen(input)-1);
		strncpy(assg_2,input,strlen(input)-1);
		strncpy(assg_3,input,strlen(input)-1);
		strncpy(assg_4,input,strlen(input)-1);
		strncpy(assg_5,input,strlen(input)-1);

	

		concatenate_string(assg_0,can[0]);
		concatenate_string(assg_1,can[1]);
		concatenate_string(assg_2,can[2]);
		concatenate_string(assg_3,can[3]);
		concatenate_string(assg_4,can[4]);
		concatenate_string(assg_5,can[5]);

	
		while ( (fgets(bufy_r,sizeof(bufy_r),ip) != NULL) )
				{
						if  ( (strstr(bufy_r, assg_0) != NULL) || (strstr(bufy_r, assg_1) != NULL) || (strstr(bufy_r, assg_2) != NULL) || (strstr(bufy_r, assg_3) != NULL) || (strstr(bufy_r, assg_4) != NULL) || (strstr(bufy_r, assg_5) != NULL) )
						
							{
				
									memcpy(dezelft,bufy_r,strlen(bufy_r));

							
							for(i; i<1000; ++i) {
								if ( dezelft[i] != NULL) {
									++counter2;
								}
							}
							
							for(k; k<1000; ++k) {
								if (parray.inputarray[k] != NULL) {
									counter3++;
								}
							}

							if  (parray.inputarray[0] == NULL )  {
								
							
								for (counter; counter < counter2 ; counter++)   {
					
									if (parray.inputarray[counter] == NULL ) {
										
												parray.inputarray[counter] = dezelft[counter];
										counter3 = counter;
												}
											}
										}
							else
							{
								
								
								
								for (counter; counter < counter2 ; counter++)   {
									
								
									
									parray.inputarray[counter3+counter] = dezelft[counter];
																						
										}

							}
								
							   }
						   }
					
				       }
						
					

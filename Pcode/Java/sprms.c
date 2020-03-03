//
//  sprms.c
//  PiCode
//
//  Created by A Pazvant on 09/09/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"
void inputdtc(char *);
void servprms (paz *params)
{
	char *magic = NULL;
	global_desc = params->Bx;
	magic = (char *)malloc( 500 );
	FILE *serv = fopen(params->Bx, "r");
	if (serv == NULL) {
		printf("Error Occured.\n");
	}

	while (fgets(bufy,sizeof(bufy),serv) != NULL) {
		
		if (strstr(bufy, "HttpServletRequest ") != NULL)
		{
			tokenizer_space(bufy);
						
			for(int n = 0; n<18; n++)
			{
				if (pSs[n] != NULL) {
					if (strstr(pSs[n],"HttpServletRequest"))
					{
				
					sprintf(magic, "%s" , pSs[n+1]);
						inputdtc(magic);
						
						FILE *abc = fopen("/tmp/p", "a");
						if (abc == NULL)	{
								printf("Error Occured.\n");
							}
						
						fputs(parray.inputarray, abc);
				

						fclose(abc);
					
						
					}
				
				}
			}
			
		}
	}
}



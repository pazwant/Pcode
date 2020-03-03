//
//  cwe393.c
//  P-Code
//
//  Created by A Pazvant on 12/07/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//

#include <stdio.h>
#include "header2.h"
#include "rep.h"
void offbyone (paz *cwe393)
{
    
    char key[][20]={"for (", "while(", "for(", "while ("};
    int line=0;
    char buff_o[10000];
    FILE *offbyone = fopen(cwe393->Bx, "r");
            if (offbyone == NULL)
            {
                printf("\e[9CError Occured.\n");
            }
    
     while (fgets(buff_o,sizeof(buff_o),offbyone) != NULL)
        {
        
			
                        if( (strstr(buff_o, "<=")!= NULL) && ( ( strstr(buff_o, key[0])!= NULL) || strstr(buff_o, key[1])!= NULL || strstr(buff_o, key[2])!= NULL || strstr(buff_o, key[3])!= NULL) ){
                        header();
                        removeSpaces(buff_o);
                        printf("\e[9C🎯  CWE ID %s\n", cwe393->Cx);
                        printf ("\e[9CThe source file name: %s\e[7h\n", cwe393->Bx);
                        printf("\e[9CLine number in the code: %d\n\n" , line+1);
                        printf ("\e[9C\e[93mThe expression in the loop can cause off by one issue. Please check the array size to confirm is less than loop size.\n\n\e[31m\e[32m");
                        locator(cwe393->Bx);
                        reader(cwe393->Bx ,line+1);
                        footer();
								
								
								if (strcmp(cwe393->Rx,"H") == 0) {
									
									high++;
									
								}
								else if (strcmp(cwe393->Rx,"M") == 0){
									medium++;
								}
								else if (strcmp(cwe393->Rx,"L") == 0) {
									low++;
								}

						nomansland((cwe393->Bx));
						}
            ++line;
					} 
    fclose(offbyone);
        }

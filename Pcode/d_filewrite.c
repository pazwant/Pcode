//
//  d_filewrite.c
//  P-Code
//
//  Created by A Pazvant on 20/06/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//


#include "header2.h"
void droid_scr_2(paz *filewrite) {
    char *buff_z;
    buff_z =  (char *)malloc(10000);
    char flag[]= "MODE_PRIVATE";
    FILE *droid_scr_2 = fopen(filewrite->Bx, "r");
    if (droid_scr_2 == NULL) {
        printf("\e[9CError Occured.\n");
    }
    
    while (fgets(buff_z,sizeof(buff_z),droid_scr_2) != NULL)
    {
        
        if (strstr(buff_z, flag) != NULL )
        {
            header();
            printf("\e[9C🎯  CWE ID %s\n", filewrite->Cx);
			printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", filewrite->Bx);
			printf("\e[9CLine number in the code: %d\e[25m\n" , filewrite->Dx);
            printf ("\e[9C\e[93mThe %s method does not have MODE_PRIVATE attribute\n\n\e[31m\e[32m", filewrite->Ax);
			locator(filewrite->Bx);
			reader(filewrite->Bx ,filewrite->Dx);
            footer();
			printf("\e[5m\e[22m\e[9C Open Source File (Y)\e[25m");
			
			fgets(sc, sizeof(sc), stdin);
			if(strstr(sc,"Y")) {
				
				forko(filewrite->Bx);
			}
            
        }
        
       
        
    }
    free(buff_z);
    fclose(droid_scr_2);
    
                    }


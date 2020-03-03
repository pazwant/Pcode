//
//  locator.c
//  P-Code
//
//  Created by A Pazvant on 04/07/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//

#include "header2.h"

void locator (char* namer ) {
    char  r1[] = "private ";
    char  r2[] = "public ";
    char  r3[] = "protected ";
    int line_num__;
    memset(datap, 0, sizeof(int)*10000);
    memset(datapc, 0, sizeof(int)*10000);
    memset(datapr, 0, sizeof(int)*10000);
    memset(stek_n2, 0, sizeof(int)*10000);
    int z= 0;
    int j = 0;
    int k = 0;
        FILE *locator_f = fopen(namer, "r");
            if (locator_f == NULL) {
                printf("\n\e[32m\e[40m\e[9C\e[5m2Error Occured.\n");
                    }
    while (fgets(bufy,sizeof(bufy),locator_f) != NULL) {
        
      
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

    fclose(locator_f);
    memset(&bufy, 0, sizeof(bufy));

}

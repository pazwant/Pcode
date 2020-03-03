//
//  req_p.c
//  P-Code
//
//  Created by Paz on 06/04/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"
char *assg1 = NULL;
char newline[2] = "\n";
void req_p( paz *params) {
    FILE *req_p = fopen("/tmp/req", "a+");
    if (params == NULL) {
        printf("Error Occured.\n");
    }
    
    if ((strstr(params->Ax,"String") != NULL) || (strstr(params->Ax,"Map") != NULL) ||  (strstr(params->Ax,"Enumeration") != NULL)| (strstr(params->Ax,"int") != NULL)) {
    
		
		tokenizer_par_z(params->Ax);
		fputs(pSs[0], req_p);fputs("\n", req_p);
		
		       
        fclose(req_p);
    }
    for (uint32_t ii=0; token_a!=NULL; token_a = strtok_r(NULL, " ",&rest_b))
    {
        
        free(pSs[ii]);
    }
}



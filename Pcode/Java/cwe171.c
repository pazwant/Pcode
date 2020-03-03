//
//  cwe409.c
//  P-Code
//
//  Created by A Pazvant on 25/07/16.
//  Copyright © 2016 Paz. All rights reserved.
//
//
#include "../header2.h"
#include "../rep.h"

void can (paz *cwe171)
{
    struct global cann;
    
    fix = *&cwe171->Ax;
    tokenizer_space(fix);
    strtok(pSs[1], "\n");
    strtok(pSs[1], ";");
    int logic = 0;
    char *assg = NULL;
    char *assg_ = NULL;
    
    
    FILE *cana = fopen(cwe171->Bx, "r");
    if (cana == NULL) {
        printf("Error Occured.\n");
    }
    
    
    char blacklist[][200] = {"System.out.println","return","null","\""};
    
    
    
    
    if ( (*pSs[1]) && (strcmp(pSs[1],cann.globalx)!=0) && (strstr(cwe171->Ax,blacklist[0]) == NULL) && (strstr(cwe171->Ax,blacklist[1]) == NULL) && (strstr(cwe171->Ax,blacklist[2]) == NULL)&& (strstr(cwe171->Ax,blacklist[3]) == NULL) )
        
    {
        
        char can [] = ".getCanonicalPath()";
        assg = (char *)malloc(500);
        assg_ = (char *)malloc(500);
        sprintf(assg, "%s" , pSs[1]);
        concatenate_string(assg,can);
        sprintf(assg_, "%c%s", ' ' ,assg);
        
        while (fgets(bufy,sizeof(bufy),cana) != NULL)
            
        {
            
            if ((strstr(bufy, assg_) != NULL)  && (strstr(bufy, "getCanonicalFile()") == NULL))
            {
                logic = 1;
            }
            
        }
        if ((logic != 1)) {
            if (strcmp(cwe171->Rx,"H") == 0) {
                
                high++;
                
            }
            else if (strcmp(cwe171->Rx,"M") == 0){
                medium++;
            }
            else if (strcmp(cwe171->Rx,"L") == 0) {
                low++;
            }
            
        }
        header();
        printf("\e[6C🎯  CWE ID %s\n", cwe171->Cx);
        printf("\e[9CSource file: %s\n\n", cwe171->Bx);
        printf("\e[9C\e[32mLine number in the code: %d\n\e[32m" , cwe171->Dx);
        printf("\n\e[9C\e[93mPotential missing canonicalization in file name object  \e[40m\"%s\"\e[40m\e[93m, it might be vulnerable to path traversal attacks.\n\e[40m\e[25m" , pSs[1] );
        strcpy(cann.globalx, pSs[1]);
        locator(cwe171->Bx);
        reader(cwe171->Bx ,cwe171->Dx);
        
        footer();
        nomansland((cwe171->Bx));
        
        memcpy(dezelft,pSs[1],strlen(pSs[1]));
        fclose(cana);
        free(assg);
        free(assg_);
        
        tokendelete();
        memset(&bufy, 0, sizeof(bufy));
    }}



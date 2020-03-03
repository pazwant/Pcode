//
//
//  sqli.c
//  P-Code
//
//  Created by Paz on 13/02/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"

void sqli (paz *cwe89)

{
	char *assg = NULL;
	char *assg_ = NULL;
	char *assg__ = NULL;
	char exec[14]= ".executeQuery" ;
	char out2[] =  "/**";
	char out4[] = "* @see";
	char out1[] = "* ";
	char out5[] = "//";
	char out6[] = "private";
	char out7[] = "public";
	char out8[] = "final";
	char out9[] = "protected";

	assg = (char *)malloc( 500 );
	assg_ = (char *)malloc( 500 );
	assg__ = (char *)malloc( 500 );

	int lineos = 0;

	
        FILE *rep = fopen(cwe89->Bx, "r");
            if (rep == NULL) {
                    printf("xError opening file.\n");
            }
    tokenizer_space(cwe89->Ax);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");

	if (*pSs[1])   {
	
		sprintf(assg, "%s" , pSs[1]);
		concatenate_string(assg,exec);
		sprintf(assg__, "%c%s", ' ' ,assg);

	}
		while (fgets(bufy,sizeof(bufy),rep) != NULL)
					{
						
								if  ( (strstr(bufy, assg__) != NULL) && (*assg__) )
                                {
									
									tokenizer_par(bufy);
									strtok(pSs[1], "\n");
									strtok(pSs[1], ";");
									sprintf(assg_, "%s" , pSs[1]);
								
									rewind(rep);
									lineos = 0;
									
								
						 while (fgets(bufy,sizeof(bufy),rep) != NULL) {
									lineos++;
									if ( (*pSs[1]) && isalpha(assg_) && (strstr(bufy, pSs[1]) != NULL) && (strstr(bufy , "String") != NULL)&& (strstr(bufy , assg_) != NULL) && ( liney != lineos ) &&  (strstr(bufy, out1) == NULL) &&  (strstr(bufy, out2) == NULL) &&  (strstr(bufy, out4) == NULL) &&  (strstr(bufy, out5) == NULL) &&  (strstr(bufy, out6) == NULL) &&  (strstr(bufy, out7) == NULL) &&  (strstr(bufy, out8) == NULL)&&  (strstr(bufy, out9) == NULL))
									
									{

									if (strcmp(cwe89->Rx,"H") == 0) {
										
										high++;
									}
									else if (strcmp(cwe89->Rx,"M") == 0){
										medium++;
									}
									else if (strcmp(cwe89->Rx,"L") == 0) {
										low++;
									}
									header();
									printf("\e[6C🎯  CWE ID %s\n", cwe89->Cx);
									printf ("\e[9CThe source file name:%s\n\n", cwe89->Bx);
									printf("\e[9C\e[32mLine number in the code: : %d\n\e[31m\e[32m\n" , lineos);
									liney = lineos;
									printf ("\n\e[9C\e[93mThe query data \e[31m\"%s\"\e[32m \e[93m is not defined as a Prepared Statement in \e[31m\"%s()\"\e[32m \e[93m method \n\e[32m\e[32m\n" , assg_, cwe89->Px);

									locator(cwe89->Bx);
									reader_sqli(cwe89->Bx ,lineos);
								
									footer();
										
							
									*assg_ = NULL;
									

									if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {

										
									 printf("\e[32m\e[32m\e[9C Parameter Search (Y)\e[25m\n");
									 fgets(sc, sizeof(sc), stdin);
									 if(strstr(sc,"Y")) {
										
									  fseek(stdin,0,SEEK_END);
										
									thread_func();
									memset(&bufy, 0, sizeof(bufy)); }
									else {
										
									printf("\n\e[32m\e[32m\e[9C Open Source File (Y)\e[25m\n");
										
									fgets(sc, sizeof(sc), stdin);
									if(strstr(sc,"Y")) {
									
										forko(cwe89->Bx);
										}
					
									} } }
										
						 } } lineos++; }sleep(0.5);

									
					fclose(rep);
					free(assg);
					free(assg_);
					free(assg__);
					tokendelete();
 
					memset(&bufy, 0, sizeof(bufy));
}

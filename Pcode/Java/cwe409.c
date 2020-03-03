//
//  cwe409.c
//  PiCode
//
//  Created by A Pazvant on 04/01/2017.
//  Copyright © 2017 Paz. All rights reserved.
//

#include "rep.h"
#include "header2.h"
void zipdos(paz *cwe409)
{
	
		char  static flag[]= ".getSize()";
		char *assg = (char *)malloc(500);
		char *assg_ = (char *)malloc(500);
		short logic = 0;

	
	if (dezelft[0] != '\0') {
		
		memset(dezelft, 0, 100 * (sizeof dezelft[0]));}
	
	struct global zipdos_;
	tokenizer_space(cwe409->Ax);
	strtok(pSs[1], "\n");
	strtok(pSs[1], ";");
	
	sprintf(assg, "%s" , pSs[1]);
	concatenate_string(assg,flag);
	sprintf(assg_, "%c%s", ' ' ,assg);
	
	
	FILE *zipzip = fopen(cwe409->Bx, "r");
	if (zipzip == NULL) {
		printf("Error Occured.\n");
	}
	
	char blacklist[][200] = {"System.out.println() "};

		if ( (*pSs[1]) && (strcmp(pSs[1],dezelft)!=0) && (strstr(cwe409->Ax,blacklist[0]) == NULL) ) {
			
		while ( (fgets(bufy,sizeof(bufy),zipzip) != NULL))
		{
			if (strstr(bufy, assg_) != NULL)
				{
			logic = 1;
				} }
			
			if ((logic != 1)) {
				if (strcmp(cwe409->Rx,"H") == 0) {
					
					high++;
					
				}
				else if (strcmp(cwe409->Rx,"M") == 0){
					medium++;
				}
				else if (strcmp(cwe409->Rx,"L") == 0) {
					low++;
				}
				
			}
			header();
			printf("\e[6C🎯  CWE ID %s\n", cwe409->Cx);
			printf("\e[9CSource file: %s\n\n", cwe409->Bx);
			printf("\e[9C\e[32mLine number in the code: %d\n\e[32m" , cwe409->Dx);
			printf("\n\e[9C\e[93mPotential resource consumption of the file being unzipped in the zip file object  \e[40m\"%s\"\e[40m\e[93m. No size check was identified on Zip Extraction.\n\e[40m\e[25m" , pSs[1] );

			locator(cwe409->Bx);
			reader(cwe409->Bx ,cwe409->Dx);
			
			footer();
			nomansland((cwe409->Bx));
			
			memcpy(dezelft,pSs[1],strlen(pSs[1])); }
	
	fclose(zipzip);
	free(assg);
	free(assg_);
	
 tokendelete();
	memset(&bufy, 0, sizeof(bufy));
		
}

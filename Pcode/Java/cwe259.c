//
//  cwe259.c
//  PiCode
//
//  Created by A Pazvant on 25/09/2016.
//  Copyright © 2016 Paz. All rights reserved.
//

//
//  cwe259.c
//  PiCode
//
//  Created by A Pazvant on 25/09/2016.
//  Copyright © 2016 Paz. All rights reserved.
//

//
//  cwe259.c
//  P-Code
//
//  Created by A Pazvant on 12/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//


#include "header2.h"
#include "rep.h"
void hardcoded (paz *cwe259)
{
	
	char blacklist[][200] = {"String password = null", "SELECT",".PASSWORD)","this.password = password"};
	
	if   ( (strstr(cwe259->Ax,blacklist[0]) == NULL) && (strstr(cwe259->Ax,blacklist[1]) == NULL) && (strstr(cwe259->Ax,blacklist[2]) == NULL)&& (strstr(cwe259->Ax,blacklist[3]) == NULL) && strstr(cwe259->Ax, "\"")!=NULL )  {
	header();
	printf("\e[9C🎯  CWE ID %s\n", cwe259->Cx);
	printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe259->Bx);
	if (strcmp(cwe259->Rx,"H") == 0) {
		
		high++;
		
	}
	else if (strcmp(cwe259->Rx,"M") == 0){
		medium++;
	}
	else if (strcmp(cwe259->Rx,"L") == 0) {
		low++;
	}
	printf("\e[9CLine number in the code: %d\e[25m\n\n", cwe259->Dx);
	printf("\e[9C\e[93mThe software might contain a hardcoded password. \n\n\e[31m\e[32m");
	locator(cwe259->Bx);
	reader_liner(cwe259->Bx ,cwe259->Dx);
	footer();
	if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {
		printf("\e[32m\e[32m\e[9C Parameter Search (Y)\e[25m\n");
		fgets(sc, sizeof(sc), stdin);
		if(strstr(sc,"Y")) {
			
			fseek(stdin,0,SEEK_END);
			
			thread_func();
			memset(&bufy, 0, sizeof(bufy)); }
		else {
			
			printf("\e[32m\e[32m\e[9C Open Source File (Y)\e[25m");
			
			fgets(sc, sizeof(sc), stdin);
			if(strstr(sc,"Y")) {
				
				forko(cwe259->Bx);
			}
		}	sleep(0.5);}
	
	}}



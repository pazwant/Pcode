	//
	//  cwe83.c
	//  PiCode
	//
	//  Created by A Pazvant on 07/09/16.
	//  Copyright © 2016 Paz. All rights reserved.
	//

	#include "header2.h"
	#include "rep.h"
	void xss (paz *cwe83)
	{
		
		char *assg = NULL;
		char *assg_ = NULL;
	
		
		
		if (strstr(cwe83->Px,"PrintWriter") != NULL && strstr(cwe83->Ax, "import java.io.PrintWriter") == NULL)  {
			tokenizer_space(cwe83->Ax);
			strtok(pSs[1], "\n");
			strtok(pSs[1], ";");
			
			char ww [] = ".write";
			assg = (char *)malloc( 500 );
			assg_ = (char *)malloc( 500 );
			sprintf(assg, "%s" , pSs[1]);
			sprintf(assg_, "%c%s", ' ' ,assg);
			concatenate_string(assg_,ww);
			
		}
		
		
		char blacklist[][200] = {"response.getWriter().flush()","response.getWriter().close()","response.getWriter();","+"};
		
		if ( (strstr(cwe83->Ax,blacklist[0]) == NULL) && (strstr(cwe83->Ax,blacklist[1]) == NULL) && (strstr(cwe83->Ax,blacklist[2]) == NULL) && (strstr(cwe83->Ax,blacklist[3]) != NULL) &&(strcmp(cwe83->Bx,dezelft)!=0) )
		{ //&& (strstr(cwe113->Ax,blacklist[1]) == NULL) && (strstr(cwe113->Ax,blacklist[2]) == NULL) && (strstr(cwe113->Ax,blacklist[3]) == NULL) && (strstr(cwe113->Ax,blacklist[4]) == NULL,, ) && (strstr(cwe113->Ax,blacklist[5]) == NULL) && (strstr(cwe113->Ax,blacklist[6]) == NULL) && (strstr(cwe113->Ax,blacklist[7]) == NULL) ){
			header();
			printf("\e[9C🎯  CWE ID %s\n", cwe83->Cx);
			printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe83->Bx);

			if (strcmp(cwe83->Rx,"H") == 0) {
				
				high++;
				
			}
			else if (strcmp(cwe83->Rx,"M") == 0){
				medium++;
			}
			else if (strcmp(cwe83->Rx,"L") == 0) {
				low++;
			}
			printf("\e[9CLine number in the code: %d\e[25m\n\n", cwe83->Dx);
			printf("\n\e[9C\e[93mCheck for the potential cross site scripting issues \n\n\e[31m\e[32m");
			memcpy(dezelft,cwe83->Bx,strlen(cwe83->Bx));
			locator(cwe83->Bx);
			reader(cwe83->Bx ,cwe83->Dx);
			footer();
			nomansland(cwe83->Bx);
			free(assg);
			free(assg_);
			memset(&bufy, 0, sizeof(bufy));
		}
	}

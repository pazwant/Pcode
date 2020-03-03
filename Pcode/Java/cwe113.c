//
//  cwe113.c
//  P-Code
//
//  Created by A Pazvant on 06/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "rep.h"
#include "header2.h"
void relz (paz *cwe113)
{
	
	char blacklist[][200] = {"response.setHeader(\"Content-Encoding\", \"gzip\")" , "response.setHeader(\"ETag\", eTag)" , "response.setHeader(\"Accept-Ranges\", \"bytes\")","response.setDateHeader(\"Last-Modified\", lastModified)","response.setDateHeader(\"Expires\", expires)", "response.setHeader(\"Access-Control-Allow-Origin\", \"*\")","response.setHeader(\"Access-Control-Allow-Methods\", \"POST, GET, PUT, DELETE\")","response.setHeader(\"Cache-Control\", \"no-cache\")", "response.addHeader(\"Content-Type\",\"application/json\")","response.addHeader(\"Connection\",\"Upgrade\")","response.addHeader(\"Vary\", ORIGIN_HEADER)","response.addHeader(\"Connection\",\"Close\")","response.addHeader(\"Content-Type\",\"message/http\")","response.setHeader(\"Upgrade\",\"WebSocket\")","response.setHeader(\"Access-Control-Allow-Headers\", \"Authorization, Content-Type\")" ,"response.setHeader(\"Pragma\", \"no-cache\")","response.setHeader(\"Content-Length\", \"\" + full_path.length()","response.addHeader(\"Accepts-Encoding\", \"gzip\")", "Expires" };
	
			if ( (strstr(cwe113->Ax,blacklist[0]) == NULL) && (strstr(cwe113->Ax,blacklist[1]) == NULL) && (strstr(cwe113->Ax,blacklist[2]) == NULL) && (strstr(cwe113->Ax,blacklist[3]) == NULL) && (strstr(cwe113->Ax,blacklist[4]) == NULL) && (strstr(cwe113->Ax,blacklist[5]) == NULL) && (strstr(cwe113->Ax,blacklist[6]) == NULL) && (strstr(cwe113->Ax,blacklist[7]) == NULL) && (strstr(cwe113->Ax,blacklist[8]) == NULL) && (strstr(cwe113->Ax,blacklist[9]) == NULL)&& (strstr(cwe113->Ax,blacklist[10]) == NULL) && (strstr(cwe113->Ax,blacklist[11]) == NULL) && (strstr(cwe113->Ax,blacklist[12]) == NULL) && (strstr(cwe113->Ax,blacklist[13]) == NULL) && (strstr(cwe113->Ax,blacklist[14]) == NULL) && (strstr(cwe113->Ax,blacklist[15]) == NULL) && (strstr(cwe113->Ax,blacklist[16]) == NULL) && (strstr(cwe113->Ax,blacklist[17]) == NULL) && (strstr(cwe113->Ax,blacklist[18]) == NULL) ){
	header();
	printf("\e[9C🎯  CWE ID %s\n", cwe113->Cx);
	printf ("\e[1W\e[9C\e[7hSource file: %s\e[7h\n\n", cwe113->Bx);
	if (strcmp(cwe113->Rx,"H") == 0) {
		
		high++;
		
	}
	else if (strcmp(cwe113->Rx,"M") == 0){
		medium++;
	}
	else if (strcmp(cwe113->Rx,"L") == 0) {
		low++;
	}


	printf("\e[9CLine number in the code: %d\e[25m\n\n", cwe113->Dx);
	printf("\e[9C\e[93mCheck for potential HTTP Response Splitting issues \n\n\e[31m\e[32m");
	locator(cwe113->Bx);
	reader(cwe113->Bx ,cwe113->Dx);
	footer();
    nomansland((cwe113->Bx));
		}}

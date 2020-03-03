//
//  term.c
//  P-Code
//
//  Created by A Pazvant on 04/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//
#include "header.h"
#include "rep.h"


void *term(void) {
	
	th  = 0;
	remove("/tmp/x");
	remove("/tmp/req");
	high = NULL;
	medium = NULL;
	low = NULL;
	DIR *dr = NULL;
	
	memset(&p1[0], 0, sizeof(p1));
	memset(&p2[0], 0, sizeof(p2));
	memset(&p3[0], 0, sizeof(p3));
	memset(&p4[0], 0, sizeof(p4));
	memset(&p10[0], 0, sizeof(p10));
	memset(&r[0], 0, sizeof(r));
	
	signal(SIGINT,sig_handler);
   
    printf("\33[2J");
begin0:
	
	if (dezelft[0] != '\0') {
		memset(dezelft, 0, 1000 * (sizeof dezelft[0])); }
	
	
	if (sqli_glo[0] != '\0') {
		memset(sqli_glo, 0, 100 * (sizeof sqli_glo[0])); }
    

     printf("\033[?1049h\033[H");
	//printf("\e[3;0;0t\e[8;195;310t\e[40m\e[3J");
	printf("\v\v\e[0m\e[32m\e[39C+++++++++++++++++++++++++++++++++++++++++--Please Select The Target--+++++++++++++++++++++++++++++++++++++++++++++\e[2m\n\e[32m\e[40m\e[1C");
	printf("\v\v\e[32m\e[22m\e[39C\e[1m1.Java Web Application\e[1m\n\e[31m\e[20m\e[1C\e[25m");
	//printf("\n\e[32m\e[22m\e[39C\e[1m2.Android Application\e[2m\n");
	//printf("\n\e[32m\e[22m\e[39C\e[1m3.NodeJS\e[2m\n");
	printf("\e[39C\e[40m\e[30m");
	

	high = NULL;
	low = NULL;
	medium = NULL;
	char stest[2];
	s = 0;
	
	fgets(r, sizeof(r), stdin);
	r[strlen ( r ) - 1] = '\0';

	if   ((strncmp(r, "1" , 1) != 0 ) && (strncmp(r, "2" , 1) != 0 ) && (strncmp(r, "3" , 1) != 0 ) ){
		goto begin0;
	}
	
	begin1:
	if( strcmp(r, "1") == 0 ) {
		printf("\033[?1049h\033[H");
		high = NULL;
		low = NULL;
		medium = NULL;
		
	printf("\v\v\e[0m\e[32m\e[39C++++++++++++++++++++++++++++++++++++++++++--Select The Plugins--++++++++++++++++++++++++++++++++++++++++++++++++++\e[2m\n\e[32m\e[40m\e[1C");

		printf("\v\v\e[32m\e[22m\e[39C\e[1m1 -   Sensitive Data Exposure on Log Files & Log Forging Issues\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m2 -   Sqli,Xpath,Xml,Ldap Injection,XXE,XSS Issues\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m3 -   Open Redirect/Response Splitting Issues\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m4 -   Java Serilization/File Resource Issues\e[1m\n\e[31m\e[10m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m5 -   DoS and Overflow Issues\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m6 -   Weak Encryption Issues\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m7 -   Others\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m8 -   Custom String Search\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[5m\e[22m\e[39C\e[1m91  - 🔙  Go back - Press M\e[1m\n\e[31m\e[20m\e[1C\e[25m");
		printf("\e[39C\e[40m\e[30m");
        //printf("\e[39C\e[40m\e[30m");
		fgets(p3, sizeof(p3), stdin);
		if (strcmp(p3, "M\n") == 0)
			
		{
			
			goto begin0; }
	}

	if( strcmp(r, "3") == 0 ) {

		printf("\v\v\e[0m\e[42m\e[39C++++++++++++++++++++++++++++++++++++++++++--Select The Plugins--++++++++++++++++++++++++++++++++++++++++++++++++++\e[2m\n\e[32m\e[40m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m1 -   Regex \e[1m\n\e[31m\e[20m\e[1C");
        printf("\v\v\e[32m\e[22m\e[39C\e[1m8 -   Custom String Search\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[5m\e[22m\e[39C\e[1m  - 🔙  Go back - Press M\e[1m\n\e[31m\e[20m\e[1C\e[25m");
		printf("\e[39C\e[40m\e[30m");

		fgets(p3, sizeof(p3), stdin);
		if (strcmp(p3, "M\n") == 0)

		{

			goto begin0; } }





	if( strcmp(r, "2") == 0 ) {
		
		printf("\v\v\e[0m\e[42m\e[39C++++++++++++++++++++++++++++++++++++++++++--Select The Plugins--++++++++++++++++++++++++++++++++++++++++++++++++++\e[2m\n\e[32m\e[40m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m1 -   Sensitive Data Storage in SharedPreferences\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m2 -   Javascript Related Issues\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m3 -   Insecure File Creation\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m4 -   Weak Encryption Issues\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m5 -   File Resource Issues \e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m6 -   Response Injection Issues\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m7 -   Others\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[32m\e[22m\e[39C\e[1m8 -   Custom String Search\e[1m\n\e[31m\e[20m\e[1C");
		printf("\v\v\e[5m\e[22m\e[39C  - 🔙  Go back - Press M\e[1m\n\e[31m\e[20m\e[1C\e[25m");
		printf("\e[39C\e[40m\e[30m");
	
	fgets(p3, sizeof(p3), stdin);
	if (strcmp(p3, "M\n") == 0)
		
	{
		
		goto begin0; } }
	
	

     if(strncmp(p3, "8" ,1) == 0)
			
		{
			
			printf("\e[3;0;0t\e[8;95;210t\a\ec\e[40m\e[3J\v\v\e[2J\v\v\e[0m\e[42m\e[39C+++++++++++++++++++++++++++++++++++++++--Enter Search String--+++++++++++++++++++++++++++++++++++++++++++\e[23m\n\e[32m\e[40m\e[1C\n");
					printf("\e[39C");
		
					fgets(p4, sizeof(p4), stdin);
					if (strcmp(p4, "M\n") == 0) goto begin0;
			strtok(p4, "\n");
			//printf("\e[1J\e[40A\e[40m\e[39C\e[32m\n\n");
			printf("\v\v\e[4m\e[48m\e[39C++++++++++++++++++++++++++++++++++++++++++++++--Enter the Source Code Directory--+++++++++++++++++++++++++++++++++++++++++++\e[2m\n\e[32m\e[40m\e[1C");
			printf("\e[39C\n\n");
			
			fgets(p1, sizeof(p1), stdin);
			removeSpaces(p1);
			if (strcmp(p1, "M\n") == 0) { goto begin0; }
			else {
				strtok(p1, "\n");
				dr = opendir(p1);
				
				if(dr == NULL) {
					printf("\e[9CDirectory is not accessible\n");
					goto begin2;
				}
			}
			
			
			printf("\e[1J\e[40A\e[40m\e[39C\e[32m\n\n");}
	
        if( (strncmp(p3, "0" ,1) == 0) || (strncmp(p3, "1" ,1) == 0) || (strncmp(p3, "2" ,1) == 0) || (strncmp(p3, "3" ,1) == 0) || (strncmp(p3, "4" ,1) == 0) || (strncmp(p3, "5" ,1) == 0) || (strncmp(p3, "6" ,1) == 0) || (strncmp(p3, "7" ,1) == 0) ) {
		
		begin2: //printf("\e[1J\e[40A\e[40m\e[39C\e[32m\n\n");
			//printf("\e[1J\e[40A\e[40m\e[39C\e[32m\n\n");
            
			    printf("\v\v\e[0m\e[32m\e[39C++++++++++++++++++++++++++++++++++++++++++++++--Enter the Source Code Directory--+++++++++++++++++++++++++++++++++++++++++++\e[2m\n\e[32m\e[40m\e[1C\n\n");

            
		printf("\e[39C\n\n");
		printf("\e[39C ▫️ ");
		
		fgets(p1, sizeof(p1), stdin);
		removeSpaces(p1);
				if (strcmp(p1, "M\n") == 0) { goto begin0; }
					else {
								strtok(p1, "\n");
								dr = opendir(p1);
						
						
								if(dr == NULL) {
								printf("\e[9CDirectory is not accessible\n");
								goto begin2;
			}				printf("\e[39C\n\n");
						
							printf("\n\e[39C ▫️ Skip the \"Test\" files ? (Y)\e[23m\n\e[32m\e[40m\e[1C\n\n");
							printf("\n\e[39C");
							fgets(stest, sizeof(stest), stdin);
							if(strcmp(stest, "Y") == 0) { s = 2; }
					}
			
	
			//printf("\e[1J\e[40A\e[40m\e[39C\e[32m\n\n");
		
			}
	
	begin:

		printf("\e[1J\e[40A\e[40m\e[39C\e[32m\n\n");
		printf("\v\v\e[0m\e[42m\e[39C++++++++++++++++ Interactive Mode(A) or Fast Scan(F) Mode +++++++++++++++++++\e[23m\n\e[32m\e[40m\e[1C\n\n");
		printf("\e[39C\e[32m\e[22m");
		fgets(p10, sizeof(p10), stdin);
		if (strncmp(p10, "M\n",2) == 0) goto begin0;
		printf("\e[40m");
		if ( (strncmp(p10, "A\n",2) == 0) || (strncmp(p10, "F\n",2) == 0) ){ goto cont; }
		else goto begin;
		
	cont:
	
	
	//printf("\e[1J\e[40m\e[39C\e[32m\n\n");
	
	ftw(p1, myfunc, 300) ;
		if(strcmp(r, "1") == 0)  {
			
			db0(p1, p3, p4); }
	
		else if  (strcmp(r, "2") == 0)  {
			
			db1(p1, p3, p4); }
	
		else if  (strcmp(r, "3") == 0)  {
			
			db2(p1, p3, p4); }
	
			closedir(dr);
	
	if (strncmp(p3, "8" , 1 ) == 0)  {
		
		printf ("\v\v\n\e[40m\e[9CTotal number of lines are %i\n",sum);
		printf("\v\v\e[5m\e[31m\e[9C  - 🆘 Return Main Menu - Press M\e[25m\n\e[32m\e[40m\e[9C");
		printf("\e[39C\e[40m\e[30m");
		fgets(p5, sizeof(p5), stdin);
		if (strstr(p5, "M\n")) goto begin1;
		
	}
	else if (strncmp(p3, "0", 1) == 0) {
		
		if (fdi != 79) {
			printf("\e[1J\e[40A\e[40m\e[39C\e[32m\n\n");
			printf ("\v\v\n\e[40m\e[9CNo Rest Services were detected💥 \n");
		}
		//else if (fdi == 79) {
		printf("\v\v\e[5m\e[31m\e[9C  - 🆘 Return Main Menu - Press M\e[25m\n\e[32m\e[40m\e[9C");
		printf("\e[39C\e[40m\e[30m");
			fgets(p5, sizeof(p5), stdin); //}
		if (strcmp(p5, "M\n") == 0) goto begin1;
	
	
	}
	
	else if( (high == 0) && (medium == 0) && (low == 0) && (strncmp(p3, "8" , 1) != 0) )  {
		
		printf("\e[40A\e[40m");
		reporter();
		printf("\e[1J\e[40A\e[40m\e[39C\e[32m\n\n");
		printf ("\v\v\n\e[40m\e[9C ‼️ No issues were detected ‼️ \n" );
		printf ("\v\v\n\e[40m\e[9CTotal number of lines are %i\n",sum);
		printf("\v\v\e[5m\e[31m\e[9C  - 🆘 Return Main Menu - Press M\e[25m\n\e[32m\e[40m\e[9C");
		printf("\e[39C\e[40m\e[30m");
		fgets(p5, sizeof(p5), stdin);
		if (strncmp(p5, "M" , 1) == 0) printf("\033[?1049h\033[H");
		printf("\e[3;0;0t\e[8;95;210t\e[40m"); goto begin1;
		
	}
	else if ( ( (high !=0) || (medium !=0) || (low != 0) ) && (strncmp(p3, "8" ,1 ) != 0) ) {
		reporter();
		printf ("\e[2m\v\n\n\e[9CTotal number of lines are %i\n",sum);
		printf("\v\v\e[5m\e[31m\e[9C  - 🆘 Return Main Menu - Press M\e[5m\n\e[32m\e[40m");
		printf("\e[39C\e[40m\e[30m");
	    fgets(p5, sizeof(p5), stdin);
        removeSpaces(p5);

	if (strcmp(p5, "M\n") == 0) goto begin1;
	}
	
	
	else {
		//sleep(300);
		printf("\ec");
		goto begin0;
		
	}return 0; }



//
//  thread.c
//  P-Code
//
//  Created by A Pazvant on 10/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "stdio.h"
#include "pthread.h"
#include "header.h"
#include "rep.h"
#include <signal.h>
#include "header2.h"

void* thread_func() {
begin:
	printf("\e[1;1H\e[2J");
	printf("\v\v\e[93m\e[38m\e[9C+++++++++++++++++++++++++++++++++++++++--Enter Parameter--+++++++++++++++++++++++++++++++++++++++++++\e[23m\n\e[32m\e[40m\e[9C");
	
	fgets(p4, sizeof(p4), stdin);
	strtok(p4, "\n");
	if (strstr(p4, "\n"))
	{
		goto begin;
	}
	
	if (strcmp(p4, "q") == 0)
	{
		goto end;
	}

	messagex(*(char*)p1,(char*)p4,"Custom Scan"," Press q to return ");
	if (fdw != 79) {
	printf("\v\v\e[99m\e[38m\e[9C+++++++++++++++++++++++++++++++- The parameter was not found --+++++++++++++++++++++++++++++++++++++++\e[23m\n\e[32m\e[40m\e[9C");
	}

	printf("\v\v\e[99m\e[38m\e[9C\e[5m --  Returning the Review -- \e[25m\e[23m\n\e[32m\e[40m\e[9C");
	printf("\e[1;1H\e[2J");
	sleep(5);
	printf("\033[?1049h\033[H");
	printf("\e[39C\e[32m\e[22m");
end:	return 0;
}

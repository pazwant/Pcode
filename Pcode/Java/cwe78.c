//
//  cwe77a.c
//  P-Code
//
//  Created by A Pazvant on 10/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//


#include "header2.h"
#include "rep.h"
void commandia (paz *cwe78)
{
	header();
	printf("\e[9C🎯  CWE ID %s\n", cwe78->Cx);
	printf ("\e[9CThe source file name:  %s\n", cwe78->Bx);
	if (strcmp(cwe78->Rx,"H") == 0)
	{
		
		high++;
		
		}
	else if (strcmp(cwe78->Rx,"M") == 0)
	{
			medium++;
		}
	else if (strcmp(cwe78->Rx,"L") == 0)
	{
		low++;
		}
	printf("\n\e[9CLine number in the code: %d\e[25m\n\n", cwe78->Dx);
	printf("\e[9C\e[93mCheck for the potential command injection issues \n\n\e[31m\e[32m");
	locator(cwe78->Bx);
	reader(cwe78->Bx ,cwe78->Dx);
	footer();
	nomansland((cwe78->Bx));
	}

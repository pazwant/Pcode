//
//  code_flow.c
//  P-Code
//
//  Created by A Pazvant on 25/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

//
//  lister.c
//  NepX
//
//  Created by Paz on 30/01/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//
#include "header2.h"
#include "rep.h"

int code_flow (char  b , char  *c , char *z, char  *poi, char *defi, char *rs)

{
	
	paz paz;
	paz.Ax = z;
	paz.Bx = c;
	paz.Cx = defi;
	paz.Dx = b;
	paz.Px = poi;
	paz.Rx = rs;
	
	{
		
	
		removeSpaces(z);
		header();
		printf("\e[9C🎯  Parameter Found %s\n", defi);
		printf ("\e[1W\e[9C\e[7hSource file%s\e[7h\n\n", c);
		printf("\e[1m\e[22m\e[9CLine number in the code:%d\n" , b);
		locator(c);
		reader_liner(c ,b);
		footer_2();
		if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {
			
		printf("\e[32m\e[32m\e[9C Open Source File (Y)\e[25m");
		
		fgets(sc, sizeof(sc), stdin);

		if(strcmp(sc,"Y") == 0) {
			
			forko(c);
		}
		if (strcmp(sc, "q") == 0)
		{
			goto end;
		}
	}
	}
	end: return 0;
}




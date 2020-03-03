//
//  ident.c
//  P-Code
//
//  Created by A Pazvant on 25/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//

#include "header2.h"
#include "rep.h"

void ident (char  b , char  *c , char *z, char  *poi, char *defi, char *rs)

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
		
		printf("\e[6C🎯  Identified Rest Services %s\n", poi);
		
		printf ("\e[1W\e[9C\e[7hSource file%s\e[7h\n\n", c);
		
		printf("\e[1m\e[22m\e[9CLine number in the code:%d\n" , b);
		
		locator_liner(c, b);
		
		reader_liner(c ,b);
		
		footer();
		nomansland(c);
		
			}
}



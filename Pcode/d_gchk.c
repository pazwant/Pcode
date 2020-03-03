//
//  gchk.c
//  P-Code
//
//  Created by A Pazvant on 19/06/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//

#include "header2.h"
void  gchck_tsk () {
    
    if(gvar == 0)
    {
        header();
        printf("\e[9CScreenShot protection is not set in the application\r\n");
        printf("\e[9CFLAG_SECURE was not set in the onCreate() method of the activity\r\n");
        footer();
        }
    
}

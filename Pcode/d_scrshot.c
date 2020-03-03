//
//  d_scrshot.c
//  P-Code
//
//  Created by A Pazvant on 19/06/15.
//  Copyright (c) 2015 Paz. All rights reserved.
//

#include "header2.h"
char buff[10000];
char static flag[61] = "getWindow().addFlags(WindowManager.LayoutParams.FLAG_SECURE)" ;
void droid_scr_1(paz *screenshot) {
    FILE *droid_scr = fopen(screenshot->Bx, "r");
    if (droid_scr == NULL)
    {
        printf("Error Occured.\n");
    }

    while (fgets(buff,sizeof(buff),droid_scr) != NULL)
    {
        if   ( (strstr(buff, flag) != 0 ) )
            
            {
                gvar = 1;
            }
    }
fclose(droid_scr);

}

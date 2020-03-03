//
//  lister.c
//  NepX
//
//  Created by Paz on 30/01/15.
//  Copyright (c) 2015 Paz. All rights reserved.3
//
#include "header2.h"
#include "rep.h"
void pp (paz *cwe772);
void xss (paz *cwe83);
void sqli (paz *cwe89);
void xxe (paz *cwe611);
void logi (paz *cwe117);
void req_p˜(paz *params);
void sec_random(paz *cwe336);
void droid_scr_1(paz *screenshot);
void droid_scr_2(paz *filewrite);
void offbyone(paz *cwe393);
void resp_s(paz *zxc);
void spref(paz *prefile);
void serilization(paz *cwe502);
void can(paz *cwe379);
void ldapi(paz *cwe90);
void commandi(paz *cwe77);
void xpathi(paz *cwe643);
void openred (paz *cwe601);
void logi2 (paz *cwe535);
void rel (paz *cwe807);
void relz (paz *cwe113);
void iv (paz *cwe329);
void commandix(paz *cwe95);
void dos(paz *cwe400);
void commandia(paz *cwe78);
void inslibrary (paz *cwe111);
void ssl (paz *cwe111);
void ssocket (paz *cwe319);
void fileper (paz *cwe378);
void servprms (paz *params);
void weakrandom (paz *cwe330);
void hardcoded(paz *cwe259);
void integer(paz *cwe190);
void infodisc(paz *cwe200);
void stack_over(paz *cwe120);
void zipdos(paz *cwe409);
void bufdos(paz *MSC05);

char ab[] = "=";

void lister (int b , char  *c , char *z, char  *poi, char *defi, char *rs)

{
    
    paz paz;
    paz.Ax = z;
    paz.Bx = c;
    paz.Cx = defi;
    paz.Dx = b;
    paz.Px = poi;
    paz.Rx = rs;
    
    char cwe772[]= "http://cwe.mitre.org/data/definitions/772.html";
    char cwe89[]= "http://cwe.mitre.org/data/definitions/89.html";
    char cwe611[]= "http://cwe.mitre.org/data/definitions/611.html";
    char cwe117[]= "http://cwe.mitre.org/data/definitions/117.html";
    char cwe393[]= "http://cwe.mitre.org/data/definitions/393.html";
    char cwe248[]="http://cwe.mitre.org/data/definitions/248.html";
    char cwe336[]="http://cwe.mitre.org/data/definitions/336.html";
    char cwe502[]="http://cwe.mitre.org/data/definitions/502.html";
    char cwe171[]="http://cwe.mitre.org/data/definitions/171.html";
    char cwe90[]="http://cwe.mitre.org/data/definitions/90.html";
    char cwe95[]="http://cwe.mitre.org/data/definitions/95.html";
    char cwe77[]="http://cwe.mitre.org/data/definitions/77.html";
    char cwe643[]="http://cwe.mitre.org/data/definitions/643.html";
    char cwe601[]="http://cwe.mitre.org/data/definitions/601.html";
    char cwe535[]="http://cwe.mitre.org/data/definitions/535.html";
    char cwe807[]="http://cwe.mitre.org/data/definitions/807.html";
    char cwe113[]="http://cwe.mitre.org/data/definitions/113.html";
    char cwe329[]="http://cwe.mitre.org/data/definitions/329.html";
    char cwe400[]="http://cwe.mitre.org/data/definitions/400.html";
    char cwe78[]="http://cwe.mitre.org/data/definitions/78.html";
    char cwe111[]="http://cwe.mitre.org/data/definitions/111.html";
    char cwe295[]="http://cwe.mitre.org/data/definitions/295.html";
    char cwe319[]="http://cwe.mitre.org/data/definitions/319.html";
    char cwe378[]="http://cwe.mitre.org/data/definitions/378.html";
    char cwe83[]= "http://cwe.mitre.org/data/definitions/83.html";
    char cwe330[]= "http://cwe.mitre.org/data/definitions/330.html";
    char cwe259[]= "http://cwe.mitre.org/data/definitions/259.html";
    char cwe190[]="http://cwe.mitre.org/data/definitions/190.html";
    char cwe200[]="http://cwe.mitre.org/data/definitions/200.html";
    char cwe120[]="http://cwe.mitre.org/data/definitions/120.html";
    char cwe409[]="http://cwe.mitre.org/data/definitions/409.html";
    char cwe416[]="http://cwe.mitre.org/data/definitions/416.html";
    char cwe415[]="http://cwe.mitre.org/data/definitions/415.html";
    char MSC05[]="https://www.securecoding.cert.org/confluence/display/java/MSC05";
    
    
    char params[]= "ServletParams";
    char droid_txt_1[]= "LS";
    char droid_txt_2[]= "Weak Permission File Write";
    char droid_txt_3[]="http://cwe.mitre.org/data/definitions/922.html";
    
    if(strcmp(defi,cwe772) == 0) pp(&paz);
    else if(strcmp(defi,params) == 0) servprms(&paz);
    else if(strcmp(defi,cwe83) == 0) xss(&paz);
    else if(strcmp(defi,cwe89) == 0)  sqli(&paz);
    else if(strcmp(defi,cwe329) == 0)  iv(&paz);
    else if(strcmp(defi,cwe611) == 0) xxe(&paz);
    else if(strcmp(defi,cwe117) == 0) logi(&paz);
    else if(strcmp(defi,cwe535) == 0) logi2(&paz);
    else if(strcmp(defi,params) == 0) req_p(&paz);
    else if(strcmp(defi,cwe171) == 0) can(&paz);
    else if(strcmp(defi,cwe807) == 0) rel(&paz);
    else if(strcmp(defi,cwe113) == 0) relz(&paz);
    else if(strcmp(defi,cwe111) == 0) inslibrary(&paz);
    else if(strcmp(defi,cwe90) == 0) ldapi(&paz);
    else if(strcmp(defi,cwe77) == 0) commandi(&paz);
    else if(strcmp(defi,cwe78) == 0) commandia(&paz);
    else if(strcmp(defi,cwe95) == 0) commandix(&paz);
    else if(strcmp(defi,cwe643) == 0) xpathi(&paz);
    else if(strcmp(defi,cwe190) == 0) integer(&paz);
    else if(strcmp(defi,cwe400) == 0) dos(&paz);
    else if(strcmp(defi,cwe295) == 0) ssl(&paz);
    else if(strcmp(defi,cwe319) == 0) ssocket(&paz);
    else if(strcmp(defi,cwe330) == 0) weakrandom (&paz);
    else if(strcmp(defi,cwe259) == 0) hardcoded (&paz);
    
    else if(strcmp(defi,cwe393) == 0) offbyone(&paz);
    
    else if(strcmp(defi,cwe502) == 0) serilization(&paz);
    else if(strcmp(defi,cwe378) == 0) fileper(&paz);
    else if(strcmp(defi,cwe190) == 0) integer(&paz);
    else if(strcmp(defi,cwe409) == 0) zipdos(&paz);
    //else if(strcmp(defi,MSC05) == 0)  bufdos(&paz);
    //Driver
    //else if(strcmp(defi,cwe200) == 0) infodisc(&paz);
    //else if(strcmp(defi,cwe120) == 0) stack_over(&paz);
    //else if(strcmp(defi,cwe415) == 0) uaf(&paz);
    //Android
    else if(strcmp(defi,droid_txt_3) == 0) spref(&paz);
    else if(strcmp(defi,droid_txt_1) == 0) droid_scr_1(&paz);
    else if(strcmp(defi,droid_txt_2) == 0) droid_scr_2(&paz);
    
    else
        
    {
        if (strncmp(rs,"H",2) == 0) {
            
            high++;
            
        }
        else if (strncmp(rs,"M",2) == 0){
            medium++;
        }
        else if (strncmp(rs,"L",2) == 0) {
            low++;
        }
        
        removeSpaces(z);
        header();
        printf("\e[6C🎯  CWE ID %s\n", defi);
        printf ("\e[1W\e[9C\e[7hSource file%s\e[7h\n\n", c);
        printf("\e[1m\e[22m\e[9CLine number in the code:%d\n" , b);
        locator(c);
        reader(c ,b);
        footer();
        
        if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {
            
            printf("\e[32m\e[32m\e[9C Parameter Search (Y)\e[25m\n");
            fgets(sc, sizeof(sc), stdin);
            if(strstr(sc,"Y")) {
                
                fseek(stdin,0,SEEK_END);
                
                
                thread_func();
                memset(&bufy, 0, sizeof(bufy)); }
            else {
                
                printf("\e[32m\e[9m\e[9C Open the source file (Y/N)\e[25m");
                
                fgets(sc, sizeof(sc), stdin);
                if(strstr(sc,"Y")) {
                    
                    forko(c);
                }
                
                
                
                
                
            }
        }sleep(0.3);
    }
}


int nomansland(char *type){
    
    if (strncmp(p10, "A\n" ,sizeof(p10) ) == 0 ) {
        
        printf("\e[32m\e[32m\e[9C Parameter Flow (Y)\e[25m\n");
        printf("\e[39C\e[40m\e[30m");
        fgets(sc, sizeof(sc), stdin);
        
        if (strncmp(sc, "Y",1) == 0)
        {
            
            fseek(stdin,0,SEEK_END);
            
            thread_func();
            
            memset(&bufy, 0, sizeof(bufy)); }
        else
        {
            fseek(stdin,0,SEEK_END);
            
            printf("\e[32m\e[32m\e[9C Open Source File (Y)\e[25m");
            printf("\e[39C\e[40m\e[30m");
            fgets(sc, sizeof(sc), stdin);
            if(strncmp(sc, "Y",1) == 0) {
                
                forko(type); }
            else {    fseek(stdin,0,SEEK_END); }
            
        } }    return 0;}


void removenter(char *message) {
    
    int8_t l=strlen(message)-1;
    if((message[l]='\n')) message[l]= NULL;
    else message[l+1]='\0';
}

void tokendelete(void) {
    for (int ii=0; token_a!=NULL; token_a = strtok_r(NULL, " ",&rest_b))
    {
        if (pSs[1] != NULL) {
            free(pSs[ii]);
            
        }
    }
}
void concatenate_string(char *original, char *add)
{
    while(*original)
        original++;
    
    while(*add)
    {
        *original = *add;
        add++;
        original++;
    }
    *original = '\0';
}
   
void removeSpaces(char *str1)
{
    char *str2;
    str2=str1;
    while (isspace(*str2)) str2++;
    if (str2!=str1) memmove(str1,str2,strlen(str2)+1);
    
}
char* closequalcheck (char *input) {
    char *token;
    char *running;
    if (strstr(input,"=") != 0) {
        running = strdup(input);
        token = strsep(&running, "=");
        return token;
    }
    else return input;
    
}
void tokenizer_space ( char *input) {
    rest_b = input;
    long str_a_size = 0;
    token_a = strtok_r(rest_b, " ", &rest_b);
    for (uint32_t ii=0; token_a!=NULL; token_a = strtok_r(NULL, " " ,&rest_b))
    {
        str_a_size = strnlen(token_a, 50) + 1;
        pSs[ii] = malloc(25*str_a_size);
        strcpy(pSs[ii], token_a);
        ++ii;
        
    }
    token_a = "\0";
    rest_b = "\0" ;
}
void tokenizer_space_e ( char *input) {
    rest_b = input;
    long str_a_size = 0;
    token_a = strtok_r(rest_b, " ", &rest_b);
    for (uint32_t ii=0; token_a!=NULL; token_a = strtok_r(NULL, " " ,&rest_b))
    {
        str_a_size = strnlen(token_a, 50) + 1;
        fSs[ii] = malloc(1000*str_a_size);
        strcpy(fSs[ii], token_a);
        ++ii;
        
    }
    token_a = "\0";
    rest_b = "\0" ;
}
void tokenizer_par ( char *input) {
    
    rest_b = input;
    long str_a_size = 0;
    token_a = strtok_r(rest_b, "("")" , &rest_b);
    for (uint32_t ii=0; token_a!=NULL; token_a = strtok_r(NULL, "("")"  ,&rest_b))
    {
        
        
        str_a_size = strnlen(token_a, 100) + 1;
        pSs[ii] = malloc(100*str_a_size);
        strcpy(pSs[ii], token_a);
        ++ii;
        
    }
    token_a = "\0";
    rest_b = "\0" ;
}

void tokenizer_com( char *input) {
    
    rest_b = input;
    long str_a_size = 0;
    token_a = strtok_r(rest_b, "("")" , &rest_b);
    for (uint32_t ii=0; token_a!=NULL; token_a = strtok_r(NULL, "("")"  ,&rest_b))
    {
        str_a_size = strnlen(token_a, 100) + 1;
        pSs[ii] = malloc(100*str_a_size);
        strcpy(pSs[ii], token_a);
        ++ii;
        
    }
    token_a = "\0";
    rest_b = "\0" ;
}

void tokenizer_par_z ( char *input) {
    rest_b = input;
    long str_a_size = 0;
    token_a = strtok_r(rest_b, "("""")" , &rest_b);
    for (uint32_t ii=0; token_a!=NULL; token_a = strtok_r(NULL, "("")"  ,&rest_b))
    {
        str_a_size = strnlen(token_a, 100) + 1;
        fSs[ii] = malloc(1000*str_a_size);
        strcpy(fSs[ii], token_a);
        ++ii;
        
    }
    token_a = "\0";
    rest_b = "\0" ;
}



void tokenizer_smaller ( char *input) {
    rest_b = input;
    long str_a_size = 0;
    token_a = strtok_r(rest_b, "<"" "";" , &rest_b);
    for (uint32_t ii=0; token_a!=NULL; token_a = strtok_r(NULL, "<"" "";"  ,&rest_b))
    {
        str_a_size = strnlen(token_a, 50) + 1;
        pSs[ii] = malloc(250*str_a_size);
        strcpy(pSs[ii], token_a);
        ++ii;
        
    }
    token_a = "\0";
    rest_b = "\0" ;
}

void tokenizer_qot_e ( char *input) {
    rest_b = input;
    long str_a_size = 0;
    token_a = strtok_r(rest_b, "(\"""\")" , &rest_b);
    for (uint32_t ii=0; token_a!=NULL; token_a = strtok_r(NULL, "(\"""\")"  ,&rest_b))
    {
        str_a_size = strnlen(token_a, 50) + 1;
        fSs[ii] = malloc(25*str_a_size);
        strcpy(fSs[ii], token_a);
        ++ii;
        
    }
    token_a = "\0";
    rest_b = "\0" ;
}

void tokendelete_f(void) {
    
    for (int ii=0; token_a!=NULL; token_a = strtok_r(NULL, " ",&rest_b))
        
    {
        
        free(fSs[ii]);
    } }

void header(){
    
    printf("\e[40m\e[9C\e[32m\n\n");
    printf ("\e[9C\e[34m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\e[32m\n");
}
void footer() {
    printf ("\e[9C\e[34m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\e[32m\n");
    printf ("\e[9C\e[34m\e[3m💀\e[25m\e[28m");
    sleep(0.1); printf("\e[34m\e[25m\e[28m");
    
}
void footer_2() {
    printf ("\e[9C\e[34m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\e[32m\n");
    sleep(0.1); printf("\e[34m\e[25m\e[28m");
    
}
void reporter() {
    printf ("\n\e[9C\e[33m+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  Summary  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\e[33m\n");
    printf ("\e[9C\e[33mHigh Risk:  %i \e[33m\n", high);
    printf ("\e[9C\e[33mMedium Risk:  %i \e[32m\n", medium);
    printf ("\e[9C\e[33mLow Risk: %i \e[33m\n", low);
    
}

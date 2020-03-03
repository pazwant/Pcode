#include "header2.h"
#include "rep.h"
int messagei(char *filename, char *str, char *def, char *rsk)
{
    void ident (int , char * , char *, char *, char *, char *);
    char *arr_lines, *line;
    char buf_line[LINESIZE];
    int iz = 0; extern int sum;
    int numlines[900000];
    int num_lines = 0;
    int line_num = 0;
    int fd = 0;
    xxx aaa;
    sum= 0;
    FILE *fpax = fopen("/tmp/x", "r" );
    
    if (fpax == NULL) {
        printf("Error opening file.\n");
        return -1;
        
    }
    while (fgets(aaa.buff, LINESIZE, fpax))
        if (!(strlen(buf_line) == LINESIZE-1 && buf_line[LINESIZE-2] != '\n'))
            num_lines++;
    
    
    arr_lines = (char*)malloc(num_lines * 10240 *sizeof(char)+1);
    
    rewind(fpax);
    
    line=arr_lines;
    while (fgets(line, LINESIZE, fpax))
        if (!(strlen(line) == LINESIZE-1 && line[LINESIZE-2] != '\n'))
            line +=  LINESIZE;
    
    
    for (int i = 0; i <= num_lines-1; i++) {
        
        
        aaa.z = &arr_lines[10240*i];
        aaa.z[strlen(aaa.z)-1] = '\0';
        fclose(fpax);
        
        
        FILE *fpc = fopen(aaa.z, "r");
        
        if (fpc == NULL) {
            printf("xError opening file.\n");
            
        }
        while (fgets(aaa.buff,sizeof(aaa.buff),fpc) != NULL)
            
            
            iz++;
        numlines[i] = iz;
        fclose(fpc);
        
        iz=0;
        
    }
    for (int i = 0; i <= num_lines-1; i++) {
        sum = sum + numlines[i];
    }
    
    
    for (int i = 0; i <= num_lines-1; i++) {
        
        
        aaa.z = &arr_lines[10240*i];
        
        
        
        fpc = fopen(aaa.z, "r");
        
        if (fpc == NULL) {
            printf("xError opening file.\n");
            
        }
        
        while (fgets(aaa.buff,sizeof(aaa.buff),fpc) != NULL) {
            
            
            if  (strstr(aaa.buff, str) != NULL) {
                pos = ftell(fpc);
                
                fdi = 79;
                ident(line_num+1,aaa.z,aaa.buff,str, def, rsk); }
            
            
            line_num++;
        }
        line_num = 0;
        
        fclose(fpc);
    }
    
    
    free(arr_lines);
    
    
    
    return 0;
}

#include "header2.h"
int messagep(char *filename, char *str, char *def, char *rsk)
{
    void lister (int , char * , char *, char *, char *, char *);
    char *arr_lines, *line;
    char buf_line[LINESIZE];
    int iz = 0; extern int sum;
    int numlines[900000];
    int num_lines = 0;
    int line_num = 0;
    xxx xxx;
    sum= 0;
    FILE *fpa = fopen("/tmp/x", "r" );
    
    if (fpa == NULL) {
        printf("Error opening file.\n");
        return -1;
        
    }
    while (fgets(xxx.buff, LINESIZE, fpa))
        if (!(strlen(buf_line) == LINESIZE-1 && buf_line[LINESIZE-2] != '\n'))
            num_lines++;
    
    
    arr_lines = (char*)malloc(num_lines * 10240 *sizeof(char)+1);
    
    rewind(fpa);
    
    line=arr_lines;
    while (fgets(line, LINESIZE, fpa))
        if (!(strlen(line) == LINESIZE-1 && line[LINESIZE-2] != '\n'))
            line +=  LINESIZE;
    
    
    for (int i = 0; i <= num_lines-1; i++) {
        
        
        xxx.z = &arr_lines[10240*i];
        xxx.z[strlen(xxx.z)-1] = '\0';
        fclose(fpa);
        
        
        FILE *fpc = fopen(xxx.z, "r");
        
        if (fpc == NULL) {
            printf("xError opening file.\n");
            
        }
        while (fgets(xxx.buff,sizeof(xxx.buff),fpc) != NULL)
            
            
            iz++;
        numlines[i] = iz;
        fclose(fpc);
        
        iz=0;
        
    }
    for (int i = 0; i <= num_lines-1; i++) {
        sum = sum + numlines[i];
    }
    
    
    for (int i = 0; i <= num_lines-1; i++) {
        
        
        xxx.z = &arr_lines[10240*i];
        
        
        
        FILE *fpcp = fopen(xxx.z, "r");
        
        if (fpcp == NULL) {
            printf("xError opening file.\n");
            
        }
        
        while (fgets(xxx.buff,sizeof(xxx.buff),fpcp) != NULL) {
            
            if  (strstr(xxx.buff, str) != NULL) {
                
                lister(line_num+1,xxx.z,xxx.buff,str, def, rsk); }
            
            
            line_num++;
        }
        line_num = 0;
        fclose(fpcp);
    }
    
    
    free(arr_lines);
    
    
    
    return 0;
}



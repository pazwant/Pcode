#include "header.h"
int myfunc( const char *path, const struct stat *sptr, int type)
{

	
	   char java[]  = ".java";
	   char test[] = "Test";
	   char test_[] = "test";
	   char driver[] = ".c";
	   char js[] = ".gs";
	
	if (s != 2) {
	
	   FILE *fp = fopen("/tmp/x", "a+");
	
	
	
		if ( strstr(path,java)  || ( strstr(path,driver) || (strstr(path, js)) ) )
      {
         
         strcat(path, "\n");
		  
         fputs(path, fp);
		          if (type == FTW_DNR) printf("Directory %s cannot be traversed.\n", path);
			      }
	fclose(fp);
	}
	
	
	if (s == 2)  {
		FILE *fp = fopen("/tmp/x", "a+");
		
		
		
		if ( (strstr(path,java)!= NULL && (strstr(path, test) == NULL) && (strstr(path, test_) == NULL) )  )
		{
			
			strcat(path, "\n");
			
			fputs(path, fp);
			if (type == FTW_DNR) printf("Directory %s cannot be traversed.\n", path);
		}
		fclose(fp);
	}
	
	

      return 0;
}

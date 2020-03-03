#include "header2.h"
#include "rep.h"

void spref(paz *prefile) {
	int line = 0 ;
	int logic = 0;
	char buff_m[100000];
	char key[] = "SharedPreferences.Editor";
	
	FILE *pref = fopen(prefile->Bx, "r");
	if (pref== NULL)
	{
		printf("\e[9CError Occured.\n");
	}
	
	while (fgets(buff_m,sizeof(buff_m),pref) != NULL)
		
	{
		
		if (strstr(buff_m, key) != NULL )
		{
			logic = 1;
		}
	}
	
	
	if(logic == 1)
		
	{
		
		removeSpaces(prefile->Ax);
		header();
		if (strcmp(prefile->Rx,"H") == 0) {
			
			high++;
			
		}
		else if (strcmp(prefile->Rx,"M") == 0){
			medium++;
		}
		else if (strcmp(prefile->Rx,"L") == 0) {
			low++;
		}
		printf("\e[9C🎯  CWE ID %s\n", prefile->Cx);
		
		printf("\e[9CLine number in the code: %d\e[25m\n" , line);
		
		printf("\e[9CSource file: %s\n\n", prefile->Bx);
		
		locator(prefile->Bx);
		
		reader(prefile->Bx ,prefile->Dx);
		
		footer();
		
		nomansland(prefile->Bx);
		
	}
	fclose(pref);
}


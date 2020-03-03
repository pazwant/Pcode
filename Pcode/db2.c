#include "header.h"

int db2(char *p3, int8_t *s, char *p4 ) {
	
	
	if(strstr(s, "1"))

	{

	 char cwe200[][100] = {" pr_err"," pr_debug"," pr_info","WARN","DBG_INFO","dprintk","_ERR","http://cwe.mitre.org/data/definitions/200.html","L"};
		for (int i3 = 0; i3 < (sizeof(cwe200)/sizeof(cwe200[0]))-1 ; ++i3) {
		 
			messagep(p3,cwe200[i3],cwe200[7],cwe200[8]);
		 
        }
    }
	remove("/tmp/x");
	remove("/tmp/req");
	return 0;
}
    

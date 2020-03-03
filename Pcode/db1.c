
  //db1.c
 // P-Code

  //Created by Paz on 24/04/15.
  //Copyright (c) 2015 Paz. All rights reserved.


#include "header.h"

int db1(char *p3, int8_t *s, char *p4 )
{
	if(strstr(s , "1"))
	{
		char shrprf_6[][100] = {"putString","http://cwe.mitre.org/data/definitions/922.html", "M"};
		for (int i3 = 0; i3 < (sizeof(shrprf_6)/sizeof(shrprf_6[0]))-1 ; ++i3) {
			
			messagep(p3,shrprf_6[i3],shrprf_6[1],shrprf_6[2]);
			
		}
		
		char shrprf_1[][100] = {"putBoolean","http://cwe.mitre.org/data/definitions/922.html", "M"};
		for (int i3 = 0; i3 < (sizeof(shrprf_1)/sizeof(shrprf_1[0]))-1 ; ++i3) {
			
			messagep(p3,shrprf_1[i3],shrprf_1[1],shrprf_1[2]);
			
		}
		char shrprf_2[][100] = {"putFloat", "http://cwe.mitre.org/data/definitions/922.html", "M"};
		for (int i3 = 0; i3 < (sizeof(shrprf_2)/sizeof(shrprf_2[0]))-1 ; ++i3) {
			
			messagep(p3,shrprf_2[i3],shrprf_2[1],shrprf_2[2]);
			
		}
		char shrprf_3[][100] = {"putInt","http://cwe.mitre.org/data/definitions/922.html", "M"};
		for (int i3 = 0; i3 < (sizeof(shrprf_3)/sizeof(shrprf_3[0]))-1 ; ++i3) {
			
			messagep(p3,shrprf_3[i3],shrprf_3[1],shrprf_3[2]);
			
		}
		char shrprf_4[][100] = {"putLong","http://cwe.mitre.org/data/definitions/922.html", "M"};
		for (int i3 = 0; i3 < (sizeof(shrprf_4)/sizeof(shrprf_4[0]))-1 ; ++i3) {
			
			messagep(p3,shrprf_4[i3],shrprf_4[1],shrprf_4[2]);
			
		}
		 }

 else if(strstr(s , "2")) {
	 char js[][100] = {"webSettings.setJavaScriptEnabled(true)","settings.setJavaScriptEnabled(true)", "Potential XSS in WebView ","M"};
	 for (int i3 = 0; i3 < (sizeof(js)/sizeof(js[0]))-1 ; ++i3) {
		 
		 messagep(p3,js[i3],js[2],js[3]);
		 
	 }
	 char jsi[][100] = {"addJavascriptInterface", "WebView addJavascriptInterface Remote Code Execution","H"};
	 for (int i3 = 0; i3 < (sizeof(jsi)/sizeof(jsi[0]))-1 ; ++i3) {
		 
		 messagep(p3,jsi[i3],jsi[1],jsi[2]);
		 
	 }}
	
 else if(strstr(s , "3")) {
	 
	 char jsi1[][100] = {"MODE_WORLD_READABLE","MODE_WORLD_WRITEABLE", "World Readerable File","H"};
	 for (int i3 = 0; i3 < (sizeof(jsi1)/sizeof(jsi1[0]))-1 ; ++i3) {
		 
		 messagep(p3,jsi1[i3],jsi1[2],jsi1[3]);
		 
	 }}
	
	 else if(strstr(s , "4")) {
	 
		 char cwe780[][100] = {"RSA/NONE/NoPadding", "http://cwe.mitre.org/data/definitions/780.html","H"};
		 for (int i3 = 0; i3 < (sizeof(cwe780)/sizeof(cwe780[0]))-1 ; ++i3) {
		
			messagep(p3,cwe780[i3],cwe780[1],cwe780[2]);
		
		}
		char capec463[][100] = {"AES/CBC/PKCS5Padding","DES/CBC/PKCS5Padding", "http://capec.mitre.org/data/definitions/463.html","H"};
		 for (int i3 = 0; i3 < (sizeof(capec463)/sizeof(capec463[0]))-1 ; ++i3) {
		
			 messagep(p3,capec463[i3],capec463[2],capec463[3]);
		
		 }
		 
		}
	else if(strstr(s , "5")) {

		char cwe502[][100] = {"ObjectInputStream","http://cwe.mitre.org/data/definitions/502.html","H"};
		for (int i3 = 0; i3 < (sizeof(cwe502)/sizeof(cwe502[0]))-1 ; ++i3) {
		
			messagep(p3,cwe502[i3],cwe502[1],cwe502[2]);
			
		}}
	else if(strstr(s , "6")) {
		
		char cwe611[][100] = {" XMLReader "," SAXParserFactory ","DocumentBuilderFactory ", " DocumentBuilder "," TransformerFactory ", " Validator ", " SchemaFactory "," SAXTransformerFactory ",  "http://cwe.mitre.org/data/definitions/611.html","H"};
		for (int i3 = 0; i3 < (sizeof(cwe611)/sizeof(cwe611[0]))-1 ; ++i3) {
			
			messagep(p3,cwe611[i3],cwe611[8],cwe611[9]);
			
		}}
	else if(strstr(s, "8"))  {
		
		
		messagep(p3,p4,"Custom Scan","Custom Scan");
		
	}
	else if(strstr(s, "7")) {

    char jsi2[][100] = {"sendBroadcast", "Information Leak","H"};
    for (int i3 = 0; i3 < (sizeof(jsi2)/sizeof(jsi2[0]))-1 ; ++i3) {
        
        messagep(p3,jsi2[i3],jsi2[1],jsi2[2]);
        
    }
    
    char jsi3[][100] = {"openFileOutput", "Weak Permission File Write","M"};
    for (int i3 = 0; i3 < (sizeof(jsi3)/sizeof(jsi3[0]))-1 ; ++i3) {
        
        messagep(p3,jsi3[i3],jsi3[1],jsi3[2]);
        
    }
	
    char cwe497[][100] = {"printStackTrace()","http://cwe.mitre.org/data/definitions/497.html","L"};
    for (int i3 = 0; i3 < (sizeof(cwe497)/sizeof(cwe497[0]))-1 ; ++i3) {
        
        messagep(p3,cwe497[i3],cwe497[1],cwe497[2]);
        
    }
	char cwe111[][100] = {"	System.loadLibrary","http://cwe.mitre.org/data/definitions/111.html","L"};
	for (int i3 = 0; i3 < (sizeof(cwe111)/sizeof(cwe111[0]))-1 ; ++i3) {
		
		messagep(p3,cwe111[i3],cwe111[1],cwe111[2]);
		
	}
	
  
	
	char cwe409[][100] = {"ZipEntry.getSize()","ZipInputStream","http://cwe.mitre.org/data/definitions/409.html","M"};
    for (int i3 = 0; i3 < (sizeof(cwe409)/sizeof(cwe409[0]))-1 ; ++i3) {
        
        messagep(p3,cwe409[i3],cwe409[2],cwe409[3]);
        
    }
    char cwe179[][100] = {"getCanonicalPath()","http://cwe.mitre.org/data/definitions/179.html","M"};
    for (int i3 = 0; i3 < (sizeof(cwe179)/sizeof(cwe179[0]))-1 ; ++i3) {
        
        messagep(p3,cwe179[i3],cwe179[1],cwe179[2]);
        
    }
	char tsk[][100] = {"getWindow().","LS","M"};
    for (int i3 = 0; i3 < (sizeof(tsk)/sizeof(tsk[0]))-1 ; ++i3) {
        
        messagep(p3,tsk[i3],tsk[1],tsk[2]);
        
    }
        char cwe158[][100] = {"catch (NullPointerException","http://cwe.mitre.org/data/definitions/158.html","I"};
    for (int i3 = 0; i3 < (sizeof(cwe158)/sizeof(cwe158[0]))-1 ; ++i3) {
        
        messagep(p3,cwe158[i3],cwe158[1],cwe158[2]);
        
    }
		// gchck_tsk();
		}
  
	

    remove("/tmp/x");
    remove("/tmp/req");
    return 0;
}

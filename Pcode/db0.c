#include "header.h"

int db0(char *p3, int8_t *s, char *p4 ) {
    
    

    
    if(strstr(s , "1")) {
        //LOGGING-PLUGINS
        char params[][100] = {"javax.servlet.http.HttpServletRequest;","ServletParams","L"};
        for (int i3 = 0; i3 < (sizeof(params)/sizeof(params[0]))-1 ; ++i3) {
            
            message(p3,params[i3],params[1],params[2]);
            
        }
        char cwe117[][100] = {"PPBILogger.error","LOG.info","LOGGER.warn","LOGGER.info","LOGGER.logInfo","log.error","log.info","logHelper.logInfo","rootLogger.info","logger.error(","logger.info","logger.warn", "log(","http://cwe.mitre.org/data/definitions/117.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe117)/sizeof(cwe117[0]))-1 ; ++i3) {
            
            message(p3,cwe117[i3],cwe117[13],cwe117[14]);
            
        }
        
        char cwe535[][100] = {"System.out","System.err","http://cwe.mitre.org/data/definitions/535.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe535)/sizeof(cwe535[0]))-1 ; ++i3) {
            
            message(p3,cwe535[i3],cwe535[2],cwe535[3]);
        }
    }
    
    
    else if(strstr(s , "2")) {
        //INJECTION PLUGINS
        char cwe89[][100] = {" Statement","http://cwe.mitre.org/data/definitions/89.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe89)/sizeof(cwe89[0]))-1 ; ++i3) {
            
            message(p3,cwe89[i3],cwe89[1],cwe89[2]);
            
        }
        char cwe90[][100] = {" DirContext ", "http://cwe.mitre.org/data/definitions/90.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe90)/sizeof(cwe90[0]))-1 ; ++i3) {
            
            message(p3,cwe90[i3],cwe90[1],cwe90[2]);
            
        }
        char cwe77[][100] = {" Runtime ", "http://cwe.mitre.org/data/definitions/77.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe77)/sizeof(cwe77[0]))-1 ; ++i3) {
            
            message(p3,cwe77[i3],cwe77[1],cwe77[2]);
            
        }
        char cwe78[][100] = {"Runtime.getRuntime().exec(","System.exec(","ProcessBuilder(", "http://cwe.mitre.org/data/definitions/78.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe78)/sizeof(cwe78[0]))-1 ; ++i3) {
            
            message(p3,cwe78[i3],cwe78[3],cwe78[4]);
            
        }
        char cwe643[][100] = {"XPath ","http://cwe.mitre.org/data/definitions/643.html","H"};
        for (int i3 = 0; i3 < (sizeof(cwe643)/sizeof(cwe643[0]))-1 ; ++i3) {
            
            message(p3,cwe643[i3],cwe643[1],cwe643[2]);
            
        }
        char cwe95[][100] = {"ScriptEngine ","http://cwe.mitre.org/data/definitions/95.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe95)/sizeof(cwe95[0]))-1 ; ++i3) {
            
            message(p3,cwe95[i3],cwe95[1],cwe95[2]);
            
        }
        char cwe111[][100] = {"System.loadLibrary","http://cwe.mitre.org/data/definitions/111.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe111)/sizeof(cwe111[0]))-1 ; ++i3) {
            
            message(p3,cwe111[i3],cwe111[1],cwe111[2]);
            
        }
        char cwe611[][100] = {"Unmarshaller","XMLReader","SAXParserFactory","XMLInputFactory", "DocumentBuilder","TransformerFactory", "SchemaFactory","SAXTransformerFactory", "XmlDocument", "http://cwe.mitre.org/data/definitions/611.html","H"};
        for (int i3 = 0; i3 < (sizeof(cwe611)/sizeof(cwe611[0]))-1 ; ++i3) {
            
            message(p3,cwe611[i3],cwe611[9],cwe611[10]);
            
            char cwe83[][100] = {"response.getWriter()", "PrintWriter", "http://cwe.mitre.org/data/definitions/83.html","M"};
            for (int i3 = 0; i3 < (sizeof(cwe83)/sizeof(cwe83[0]))-1 ; ++i3) {
                
                message(p3,cwe83[i3],cwe83[2],cwe83[3]);
            }
            
        }
    }
    
    else if(strstr(s , "3")) {
        //char params[][100] = {"javax.servlet.http.HttpServletRequest;","ServletParams","L"};
        //for (int i3 = 0; i3 < (sizeof(params)/sizeof(params[0]))-1 ; ++i3) {
        
        //    message(p3,params[i3],params[1],params[2]);
        
        //}
        
        char cwe601[][100] = {".sendRedirect(","setHeader(\"Lo","http://cwe.mitre.org/data/definitions/601.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe601)/sizeof(cwe601[0]))-1 ; ++i3) {
            
            message(p3,cwe601[i3],cwe601[2],cwe601[3]);
            
        }
        char cwe113[][100] = {"session.setAttribute","response.addCookie", "response.addHeader","response.setHeader","response.setDateHeader","session.setAttribute(request.getParameter", "http://cwe.mitre.org/data/definitions/113.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe113)/sizeof(cwe113[0]))-1 ; ++i3) {
            
            message(p3,cwe113[i3],cwe113[6],cwe113[7]);
            
        }
        char cwe807[][100] = {"ServletRequest.getServerName()","HttpServletRequest.getHeader(\"Host\")","HttpServletRequest.getHeader(\"User-Agent:\")","HttpServletRequest.getHeader(\"Referer:\")","HttpServletRequest.getHeader(\"X-Forwarded-For\")","request.getHeader(\"X-Forwarded-For\")","request.getHeader(\"User-Agent:\")","request.getHeader(\"Referer:\")","request.getHeader(\"Host\")","= request.getCookies()","= InetAddress.getByName(ip)","http://cwe.mitre.org/data/definitions/807.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe807)/sizeof(cwe807[0]))-1 ; ++i3) {
            
            message(p3,cwe807[i3],cwe807[11],cwe807[12]);
            
        }
    }
    
    else if(strstr(s, "4")) {
        
        char cwe502[][100] = {"ObjectInputStream","http://cwe.mitre.org/data/definitions/502.html","H"};
        for (int i3 = 0; i3 < (sizeof(cwe502)/sizeof(cwe502[0]))-1 ; ++i3) {
            
            message(p3,cwe502[i3],cwe502[1],cwe502[2]);
            
        }
        char cwe171[][100] = {"File", "FileOutputStream", "http://cwe.mitre.org/data/definitions/171.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe171)/sizeof(cwe171[0]))-1 ; ++i3) {
            
            message(p3,cwe171[i3],cwe171[2],cwe171[3]);
        }
        char cwe378[][100] = {"File.createTempFile",".createTempFile","http://cwe.mitre.org/data/definitions/378.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe378)/sizeof(cwe378[0]))-1 ; ++i3) {
            
            message(p3,cwe378[i3],cwe378[2],cwe378[3]);
            
            
        }
        char cwe772[][100] = {"BufferedReader","OutputStream","InputStreamReader","OutputStreamWriter","StreamWriter"," ServerSocket" ," FileInputStream", "FileOutputStream","FileReader","ZipFile"," SequenceInputStream"," CharArrayReader","PipedInputStream","FilterInputStream","ByteArrayInputStream ","SqlSession","PreparedStatement","http://cwe.mitre.org/data/definitions/772.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe772)/sizeof(cwe772[0]))-1 ; ++i3) {
            
            message(p3,cwe772[i3],cwe772[17],cwe772[18]);
            
        }
        
        char cwe116[][100] = {"\"rmi:", "http://cwe.mitre.org/data/definitions/116.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe116)/sizeof(cwe116[0]))-1 ; ++i3) {
            
            messagep(p3,cwe116[i3],cwe116[1],cwe116[2]); }
        
        char cwe409[][100] = {"ZipEntry", "http://cwe.mitre.org/data/definitions/409.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe409)/sizeof(cwe409[0]))-1 ; ++i3) {
            
            message(p3,cwe409[i3],cwe409[1],cwe409[2]);
            
        }
        
        
    }
    else if(strstr(s, "5")) {
        
        char cwe190[][100] = {"Integer.parseInt","Byte.parseByte", "http://cwe.mitre.org/data/definitions/190.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe190)/sizeof(cwe190[0]))-1 ; ++i3) {
            
            message(p3,cwe190[i3],cwe190[2],cwe190[3]);
        }
        char cwe400[][100] = {"for (", "http://cwe.mitre.org/data/definitions/400.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe400)/sizeof(cwe400[0]))-1 ; ++i3) {
            
            message(p3,cwe400[i3],cwe400[1],cwe400[2]);
        }
        char cwe393[][100] = {"for (","for (", "while(", "for(", "while (", "http://cwe.mitre.org/data/definitions/393.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe393)/sizeof(cwe393[0]))-1 ; ++i3) {
            
            message(p3,cwe393[i3],cwe393[5],cwe393[6]);
        }


        char cwe401[][100] = {"Pattern.compile", "http://cwe.mitre.org/data/definitions/400.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe401)/sizeof(cwe401[0]))-1 ; ++i3) {
            
            message(p3,cwe401[i3],cwe401[1],cwe401[2]);
        }
        
        
        char MSC05[][100] = {"BufferedReader", "https://www.securecoding.cert.org/confluence/display/java/MSC05","L"};
        for (int i3 = 0; i3 < (sizeof(MSC05)/sizeof(MSC05[0]))-1 ; ++i3) {
            
            messagep(p3,MSC05[i3],MSC05[1],MSC05[2]);
        }
        
    }
    else if(strstr(s, "6")) {
        
        char cwe780[][100] = {"RSA/NONE/NoPadding", "http://cwe.mitre.org/data/definitions/780.html","H"};
        for (int i3 = 0; i3 < (sizeof(cwe780)/sizeof(cwe780[0]))-1 ; ++i3) {
            
            message(p3,cwe780[i3],cwe780[1],cwe780[2]);
            
        }
        char capec463[][100] = {"SetURL","setHref","setHTML" , "GWT Demo","H"};
        for (int i3 = 0; i3 < (sizeof(capec463)/sizeof(capec463[0]))-1 ; ++i3) {
            
            message(p3,capec463[i3],capec463[3],capec463[4]);
            
            
        }
        char cwe330[][100] = {"Random ","getRandom ","RandomStringUtils" ,"http://cwe.mitre.org/data/definitions/330.html","H"};
        for (int i3 = 0; i3 < (sizeof(cwe330)/sizeof(cwe330[0]))-1 ; ++i3) {
            
            message(p3,cwe330[i3],cwe330[3],cwe330[4]);
        }
        
        char cwe328[][100] =
        {"SHA-1","MessageDigest.getInstance(\"SHA\")","MessageDigest.getInstance(\"MD5\")","MessageDigest.getInstance(\"MD4\")","MessageDigest.getInstance(\"MD2\")", "http://cwe.mitre.org/data/definitions/328.html","H"};
        for (int i3 = 0; i3 < (sizeof(cwe328)/sizeof(cwe328[0]))-1 ; ++i3) {
            
            message(p3,cwe328[i3],cwe328[5],cwe328[6]);
        }
        
        char cwe259[][100] = {"PASSWORD = ","PASSWORD ","SECRET ","password = ","password.equals("," SECRET_PASSWORD ","PWD "," Secret = "," password.equals ", "http://cwe.mitre.org/data/definitions/259.html","H"};
        for (int i3 = 0; i3 < (sizeof(cwe259)/sizeof(cwe259[0]))-1 ; ++i3) {
            
            messagep(p3,cwe259[i3],cwe259[9],cwe259[10]);
        }
        
        char cwe329[][100] =
        {"IvParameterSpec ", "http://cwe.mitre.org/data/definitions/329.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe329)/sizeof(cwe329[0]))-1 ; ++i3) {
            
            message(p3,cwe329[i3],cwe329[1],cwe329[2]);
        }
        char cwe295[][100] =
        {"HostnameVerifier ", "http://cwe.mitre.org/data/definitions/295.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe295)/sizeof(cwe295[0]))-1 ; ++i3) {
            
            message(p3,cwe295[i3],cwe295[1],cwe295[2]);
        }
        char cwe319[][100] =
        {"new Socket(","HttpURLConnection ", "http://cwe.mitre.org/data/definitions/319.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe319)/sizeof(cwe319[0]))-1 ; ++i3) {
            
            message(p3,cwe319[i3],cwe319[2],cwe319[3]);
        }
        
    }
    else if(strstr(s, "8")) {
        
        
        messagex(p3,p4,"Custom Search","Custom Search");
        
    }
    
    else if(strstr(s, "7")) {
        
        
        char cwe497[][100] = {"printStackTrace()","http://cwe.mitre.org/data/definitions/497.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe497)/sizeof(cwe497[0]))-1 ; ++i3) {
            
            message(p3,cwe497[i3],cwe497[1],cwe497[2]);
            
        }
        char cwe109[][100] = {"validate=\"false\">","escapeXml=\"False\"","auto-encode-requests value","enable-directory-browsing value", "http://cwe.mitre.org/data/definitions/109.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe109)/sizeof(cwe109[0]))-1 ; ++i3) {
            
            message(p3,cwe109[i3],cwe109[4],cwe109[5]);
            
        }
        char cwe382[][100] = {"System.exit()","System.exit(2)", "Runtime.getRuntime().exit(1)","http://cwe.mitre.org/data/definitions/382.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe382)/sizeof(cwe382[0]))-1 ; ++i3) {
            
            message(p3,cwe382[i3],cwe382[3],cwe382[4]);
            
        }
        
        
        char cwe350[][100] = {"getServerName()", "getHostName()","getCanonicalHostName()", "getByName()", "getByAddress()", "getAllByName()", "http://cwe.mitre.org/data/definitions/350.html","M"};
        for (int i3 = 0; i3 < (sizeof(cwe350)/sizeof(cwe350[0]))-1 ; ++i3) {
            
            message(p3,cwe350[i3],cwe350[6],cwe350[7]);
            
        }
        
        
        char cwe158[][100] = {"catch (NullPointerException","http://cwe.mitre.org/data/definitions/158.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe158)/sizeof(cwe158[0]))-1 ; ++i3) {
            
            message(p3,cwe158[i3],cwe158[1],cwe158[2]);
        }
        
        
        
        char cwe396[][100] = {"catch (Throwable throwable)","catch (Exception exception)","http://cwe.mitre.org/data/definitions/396.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe396)/sizeof(cwe396[0]))-1 ; ++i3) {
            
            message(p3,cwe396[i3],cwe396[2],cwe396[3]);
            
        }
        char cwe397[][100] = {"throws Throwable","throw new Exception()","http://cwe.mitre.org/data/definitions/397.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe397)/sizeof(cwe397[0]))-1 ; ++i3) {
            
            message(p3,cwe397[i3],cwe397[2],cwe397[3]);
            
        }
        
        
        char cwe226[][100] = {"StringUtils.isEmpty","Object.equals","http://cwe.mitre.org/data/definitions/597.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe226)/sizeof(cwe226[0]))-1 ; ++i3) {
            
            message(p3,cwe226[i3],cwe226[2],cwe226[3]);
            
        }
        
        char cwe252[][100] = {".delete()","http://cwe.mitre.org/data/definitions/252.html","L"};
        for (int i3 = 0; i3 < (sizeof(cwe252)/sizeof(cwe252[0]))-1 ; ++i3) {
            
            message(p3,cwe252[i3],cwe252[1],cwe252[2]);
            
        }
        
        
    }
    remove("/tmp/x");
    remove("/tmp/req");
    return 0;
}



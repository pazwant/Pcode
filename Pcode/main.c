
#include "header.h"


#include "rep.h"
#include "termios.h"

void escapeSpace(char p_1[1000] , char p_2[1000]);

int main()

{
    if (dezelft[0] != '\0') {
        memset(dezelft, 0, 100 * (sizeof dezelft[0])); }
		term();
	return 0;

}

void sig_handler(int signo)
{
    if (signo == SIGINT) printf("\ec");
        exit(0);
}




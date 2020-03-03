//
//  fork.c
//  P-Code
//
//  Created by A Pazvant on 05/08/16.
//  Copyright © 2016 Paz. All rights reserved.
//
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

void forko (char *filenamee) {
	pid_t pid;
	int status;
	pid_t ret;
	char *const args[3] = {"atom", filenamee, NULL};
	char **env;
	extern char **environ;
	
	/* ... Sanitize arguments ... */
	
	pid = fork();
	if (pid == -1) {
		/* Handle error */
	} else if (pid != 0) {
		while ((ret = waitpid(pid, &status, 0)) == -1) {
			if (errno != EINTR) {
				/* Handle error */
				break;
			}
		}
		if ((ret != -1) &&
			(!WIFEXITED(status) || !WEXITSTATUS(status)) ) {
			/* Report unexpected child status */
		}
	}
	else {
		
		if (execve("/usr/local/bin/atom", args, env) == -1) {
			/* Handle error */
			_Exit(127);
		}
	}}

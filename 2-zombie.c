/**
* @file util.h
* @brief this header file will contain all required
* definitions and basic utilities functions.
*
* @author Theegala Lokesh Reddy
*
* @date 7/31/2019
*/
// A C program to demonstrate Zombie Process. 
// Child becomes Zombie as parent is sleeping 
// when child process exits. 
#include <stdio.h>
#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
	// Fork returns process id 
	// in parent process 
	pid_t child_pid = fork(); 

	 
	if (child_pid!=0){// Parent process
        printf("parent process gets in sleep\n");
        sleep(5);
        printf("parent process completed\n");
    }
	else{// Child process
		printf("child process turns into zombie process\n");
        exit(0);
        
    }

	return 0; 
} 

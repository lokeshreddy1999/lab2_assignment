/**
* @file util.h
* @brief this header file will contain all required
* definitions and basic utilities functions.
*
* @author Theegala Lokesh Reddy
*
* @date 7/31/2019
*/
// A C program to demonstrate Orphan Process. 
// Parent process finishes execution while the 
// child process is running. The child process 
// becomes orphan. 
#include<stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 





int main() 
{ 
	// Create a child process	 
	int pid = fork(); 

	if (pid > 0)//parent process
		printf("parent process terminated and child process becomes an orphan\n");  
	else {//child process 
		sleep(3);
		printf("child process terminated after being adopted by init process\n"); 
	} 

	return 0; 
} 

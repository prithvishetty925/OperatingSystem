#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
    pid_t pid;
    int status;

    pid=fork();

    if(pid<0){
        printf("Error:fork() failed\n");
        return 1;
    }else if(pid==0){
        printf("This is the child process with PID:%d\n",getpid());
        printf("Parent process PID:%d\n",getpid());

        execlp("/bin/LS","LS",NULL);
        printf("This should not be printed if exec() is successful.\n");
        return 0;
    }else{
        printf("This is the parent process with PID:%d\n",pid);
        printf("child process PID:%d\n",pid); 
        wait(&status);
        printf("child process exited with status %d\n",status);
        return 0;
    }

}

/*OUTPUT:

This is the parent process with PID:38120
child process PID:38120
This is the child process with PID:38120
Parent process PID:38120
This should not be printed if exec() is successful.
child process exited with status 0 */

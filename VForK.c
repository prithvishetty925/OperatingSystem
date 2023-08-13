#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
    pid_t pid;
    pid=vfork();
    if(pid==-1){
        perror("vfork");
        return 1;
    }else if(pid==0){
        printf("child process:Hello,I'm the child\n");
        printf("child proces:My PID is%d\n",getpid());
        printf("child process:My parents PID is %d\n",getpid());
        exit(0);
    }else{
        printf("Parent process:Hello,I'm the parent\n");
        printf("Parent process:my PID is%d\n",getpid());
        printf("parent process:My child's PID is %d\n",pid);

    int status;
    waitpid(pid,&status,0);
    if(WIFEXITED(status)){
        printf("Parent process:childprocess terminated normally:\n");
    }else{
        printf("Parent process:child process terminated abnormally\n");
    }
    }
}
/*OUTPUT

child process:Hello,I'm the child
child proces:My PID is38293
child process:My parents PID is 38293
Parent process:Hello,I'm the parent
Parent process:my PID is38292
parent process:My child's PID is 38293
Parent process:childprocess terminated normally:
*/

#include <stdio.h> //printf
#include <unistd.h> //fork
#include <stdlib.h> //exit
#include <string.h>
#include <sys/wait.h>

int main(){
    pid_t childpid;
    int status;
    char path1[] = "/bin/";
    char path2[] = "/bin/";
    char pathA[100];
    char pathB[100];
    char com1[3];
    char com2[3];
    
    printf("Enter 2 linux commands that don't take parameters.\n");

    printf("first command: ");
    scanf(" %s", com1);
    getchar();
    char *arg1 = com1;
    snprintf( pathA, sizeof(pathA), "%s%s", path1, com1);

    printf("\nsecond command: ");
    scanf("%s", com2);
    getchar();
    char *arg2 = com2;
    snprintf( pathB, sizeof(pathB), "%s%s", path2, com2);

    printf("\nYour commands are: %s and %s\n", pathA, pathB);

    char *binPath1 = pathA;
    char *binPath2 = pathB;

    childpid = fork();
    if(childpid == 0){
        //This is child
        printf("This is the child with PID %d.",childpid);
        //execl(binPath1, arg1, (char *)NULL);
        execl(binPath2, arg2, (char *)NULL);	
	}else{
        //this is parent
        printf("This is the parent with PID %d.",getpid());
        childpid = wait(NULL);
		execl(binPath1, arg1, (char *)NULL);
        //execl(binPath2, arg2, (char *)NULL);
	}
    
}

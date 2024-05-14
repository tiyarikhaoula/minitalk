#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) 
{
    int pid = fork();
    if(pid == -1)
        return 1;

    if(pid == 0)
    {
        while(1)
        {
            printf("nothing\n");
            usleep(50000);
        }
    } else {
        sleep(2);
        kill(pid, SIGKILL);
        wait(NULL);
    }

    return 0;
}
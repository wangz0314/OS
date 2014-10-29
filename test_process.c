#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
        pid_t pid;

        pid = fork();

        pid_t npid = getpid();
        if(pid == 0)
        {
                while(1)
		{
                        printf("I am child,PID is %d\n",npid);
                        sleep(1);
		}
        }
        else
        {
                while(1)
                {
                        printf("I am father,PID is %d\n",npid);
                        sleep(1);
                }
        }
        return 0;
}


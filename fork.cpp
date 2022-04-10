#include<stdio.h>
#include<unistd.h>
void childProcess(int);
void parentProcess(int);
int main()
{
int no;
printf("Enter a no for processes: ");
scanf("%d",&no);
if(fork() == 0)
{
childProcess(no);
}
else if(fork() >= 1)
{
parentProcess(no);
}
return 0;
}
void childProcess(int no)
{
int i;
for(i=1; i<=no; i++)
{
printf("Process id for child process is: %d\n", getpid());
}
}
void parentProcess(int no)
{
int i;
for(i=1; i<=no; i++)
{
printf("Process id for parent process is: %d\n", getppid());
}
}

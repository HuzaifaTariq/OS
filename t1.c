#include<stdio.h>
#include<unistd.h>
pid_t fork(void);
void main()
{
int i;
for( i=0;i<4;i++)
{
   fork();
  printf("Hello");
}
printf("Exit");
}
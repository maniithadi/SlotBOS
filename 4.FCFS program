#include<stdio.h>
#include<stdlib.h>
struct fcfs
{
int pid;
int btime;
int wtime;
int ttime;
}
p[10];
int main()
{
int i,n;
int towtwtime=0,totttime=0;
printf("\n fcfs scheduling...\n");
printf("enter the no of process");
scanf("%d",&n);
for(i=0;i<n;i++)
{
p[i].pid=1;
printf("\n burst time of the process");
scanf("%d",&p[i].btime);
}
p[0].wtime=0;
p[0].ttime=p[0].btime;
totttime+=p[i].ttime;
for(i=0;i<n;i++)
{
p[i].wtime=p[i-1].wtime+p[i-1].btime;
p[i].ttime=p[i].wtime+p[i].btime;
totttime+=p[i].ttime;
towtwtime+=p[i].wtime;
}
for(i=0;i<n;i++)
{{
printf("\n waiting time for process");
printf("\n turn around time for process");
printf("\n");
}}
printf("\n total waiting time :%d", towtwtime );
printf("\n average waiting time :%f",towtwtime/n);
printf("\n total turn around time :%d",totttime);
printf("\n average turn around time: :%f",(float)totttime/n);
}


OUTPUT:
 fcfs scheduling...
enter the no of process3

 burst time of the process5

 burst time of the process9

 burst time of the process12

 waiting time for process
 turn around time for process

 waiting time for process
 turn around time for process

 waiting time for process
 turn around time for process

 total waiting time :19
 average waiting time :0.000000
 total turn around time :45
 average turn around time: :15.000000
--------------------------------
Process exited after 13.93 seconds with return value 0
Press any key to continue . . .

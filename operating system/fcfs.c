#include<stdio.h>
void main()
{
    int ptd[15],btime[15],wttime[15],n,i;
    float turnaroundtime=0.0,total_waitingtime=0.0;
    float avg_turnaroundtime,avg_waitingtime;
    printf("\n\n\nFCFS\n\n\n");
    printf("ENTER THE NUMBER OF PROCESSES:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER  BURST TIME OF THE PROCESSES%d:",i);
        scanf("%d",&btime[i]);
        wttime[0]=0;
        for(i=1;i<n;i++)
        {
            wttime[i]=btime[i-1]+wttime[i-1];
        }
        printf("PROCESS ID\t\tBURST TIME\t\tWAITING TIME\t\tTURN AROUND TIME\t\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t\t%d\t\t%d\t\t%d\t\n",i,btime[i],wttime[i],btime[i]+wttime[i]);
            total_waitingtime+=wttime[i];
            turnaroundtime+=(wttime[i]+btime[i]);
        } 
        avg_turnaroundtime=turnaroundtime;
        avg_waitingtime=total_waitingtime;
        printf(" avg.waiting time %f\n",avg_waitingtime);
        printf("avg turn around time %f\n",avg_turnaroundtime);

    }
}


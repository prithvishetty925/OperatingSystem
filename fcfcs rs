#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,req[50],mov=0,cp;
    printf("enter the current position\n");
    scanf("%d",&cp);
    printf("enetr number of requests\n");
    scanf("%d",&n);
    printf("eneter request order\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&req[i]);
    }
    mov=mov+abs(cp-req[0]);
    printf("%d->%d",cp,req[0]);
    for(i=1;i<n;i++)
    {
        mov=mov+abs(req[i]-req[i-1]);
        printf("->%d",req[i]);
    }
    printf("\n");
    printf("total head movement=%d\n",mov);
}



*/enter the current position
45
enetr number of requests
5
eneter request order
30
66
24
75
50
45->30->66->24->75->50
total head movement=169
[1] + Done                       "/usr/bin/gdb" --interpreter=mi --tty=${DbgTerm} 0<"/tmp/Microsoft-MIEngine-In-n1k2b05m.spf" 1>"/tmp/Microsoft-MIEngine-Out-lxpvcunk.a25"
@sanjanacrao ➜ /workspaces/OS (main) $ */

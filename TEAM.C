#include<stdio.h>
int main()
{
    int n,p,v,t,count=0,i;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        
        if((p==1 && v==1) || (v==1 && t==1) || (t==1 && p==1))
        {
            count= count + 1;
            
        }
    }
    printf("%d",count);
    return 0;
    
}
#include<stdio.h>
int main()
{
    int n,a[30],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0;
    while(a[i]<a[i+1]&&i<n-1)
    {
       i++;   
    }
    printf("%d",a[i]);
    return 0;
}

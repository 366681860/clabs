#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    int i=0,j=0;
    int a[100]={0};
    for(i=1;i<argc;i++,j++)
    {
        a[j]=atof(argv[i]);
    }
    int min=a[0],k=0;
    for(k=0;k<argc-1;k++)
    {
        if(min>=a[k])
        {
            min=a[k];
        }
    }
    printf("%d\n",min);
    return 0;
}
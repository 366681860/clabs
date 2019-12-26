
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
    int a[100];
    int i = 1;
    int j = 0;
    int p = 0;
    int q = 0;
    int temp;
    for(i=1;i<argc;i++,j++){
        a[j]=atof(argv[i]);
    }
    for(p=0;p<argc-2;p++){
     if(a[p]<a[p+1]) 
{
temp=a[p];
a[p]=a[p+1];
a[p+1]=temp;}
}
printf("The min is：%d\n",a[argc-2]);
return 0;
}
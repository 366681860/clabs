#include<stdio.h>
int main(){
 unsigned  int y=1;
 unsigned  int z=0;
 while(y>0){
 y=y<<1;
 z=z+1;

 }
 printf("the max:%S digit:%S\n",y-1,z);
 return 0;
 
}
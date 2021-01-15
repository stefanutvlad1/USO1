#include<stdio.h>

int main(int argc, char *argv[]);
{ int sum;
   if(argc!=3)
   {printf("Nu s-au dat 2 argumente!");
   exit(1);
   }
   sum=argv[1]+argv[2];
   printf("%d",sum);





}
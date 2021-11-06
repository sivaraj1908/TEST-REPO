#include <stdio.h>
#include <conio.h>

void main()
{
    int i,a=0,b=1,c;
    for(i=2;i<100;i++){
        c=a+b;
        a=b;
        b=c;
    }
      printf("The %dth fibonacci series = %d\n   ",i,c);
}
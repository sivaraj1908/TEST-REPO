#include <stdio.h>
#include <conio.h>

void main()
{
    int i,a=0,b=1,c;
    printf("%d\n%d\n",a,b);
    for(i=2;i<100;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}
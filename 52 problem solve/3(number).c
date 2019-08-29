#include<stdio.h>
void main()
{
    int i;
    for( i=1000; i>=1; i--)
        i++;

    if (i%5==0){
        printf("\n");
    }
    printf("%d\t",i);

}

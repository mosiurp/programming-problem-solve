#include<stdio.h>
int main()
{
    int T, i;
    char n [101];
    scanf("%d",&T);
    for(i=0; i<=T; i++)
    {
        gets(n);
        //scanf("%s",&n);
        if('n' % 2 == 0){
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}

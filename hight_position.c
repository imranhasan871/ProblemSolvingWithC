#include <stdio.h>

int main(){
    int b = 0,i,a,position = 0;

    for ( i = 1; i < 101; i++)
    {
        printf("%d\n",i);
        scanf("%d", &a);

        if (b < a)
        {
            b = a;
            position++;
        }
        else
        {
            continue;
        }

    }

    printf("%d\n %d",b,position);

    return 0;

}
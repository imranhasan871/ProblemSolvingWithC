#include <stdio.h>

int main(){

    int i = 1;
    print:
    printf("%d\n",i);
    i++;
    if ( i <= 5) {
        goto print;
    }
    int i, N ,x,y,yL= 0,xL= 0;
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &x,&y);

        if (x < y)
        {
            for ( i = x +1; i < y; i++)
            {
                if (i % 2 == 1)
                {
                    printf("%d\n",i);
                }

            }
        }
        else if(x > y)
        {
            for ( i = y; i < x; i++)
            {
                if (i % 2 == 1)
                {
                    xL += i;
                }

                printf("%d",xL);

            }

        }

    }

    return 0;
}
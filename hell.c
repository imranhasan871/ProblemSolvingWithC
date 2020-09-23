#include <stdio.h>

int main(){
    int random;
    int odd = 0,positive = 0, negative = 0, even = 0 ;
    for (int i=1; i <=5; i++)
    {
        scanf("%d", &random);
        if (random % 2== 0)
        {
            even +=1;
        }
        else if (random % 2==1)
        {
            odd+=1;
        }
        else if (random >=0)
        {
            positive +=1;
        }
       else if (random <0)
       {
           negative+=1;
       }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)",even,odd, positive,negative);

    return 0;
}
#include <stdio.h>

int main(){

    float sallary;

    scanf("%f", &sallary);

    if (sallary >= 0 && sallary <= 400)
    {
        float new = sallary * 15 / 100;
        printf("Novo salario: %.2f\n",sallary +new);
        printf("Reajuste ganho: %.2f\n",new);
        printf("Em percentual: 15 %%\n");
    }
    if (sallary >= 400.01 && sallary <= 800)
    {
        float new = sallary * 12 / 100;
        printf("Novo salario: %.2f\n",sallary +new);
        printf("Reajuste ganho: %.2f\n",new);
        printf("Em percentual: 12 %%\n");
    }
    if (sallary >= 800.01 && sallary <= 1200.00)
    {
        float new = sallary * 10 / 100;
        printf("Novo salario: %.2f\n",sallary +new);
        printf("Reajuste ganho: %.2f\n",new);
        printf("Em percentual: 10 %%\n");
    }
    if (sallary >= 1200.01 && sallary <= 2000.00)
    {
        float new = sallary * 7 / 100;
        printf("Novo salario: %.2f\n",sallary +new);
        printf("Reajuste ganho: %.2f\n",new);
        printf("Em percentual: 7 %%\n");
    }
    if (sallary > 2000.00 )
    {
        float new = sallary * 4 / 100;
        printf("Novo salario: %.2f\n",sallary +new);
        printf("Reajuste ganho: %.2f\n",new);
        printf("Em percentual: 4 %%\n");
    }

    return 0;


}
#include <stdio.h>

int main(){
    double a, b, c, d,m,mediaFinal;
     scanf("%lf %lf %lf %lf",&a, &b, &c, &d);
         m = ((a*2)+(b*3)+(c*4)+(d*1))/10;
        printf("Media: %.1f\n",m);

        if (m >= 7.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (m >= 5.0)
        {
            printf("Aluno reprovado.\n");
        }
        else if (media >=5.0 && media <=6.9)
        {
            printf("Aluno em exam.\n");
            scanf("%f",&mediaFinal);
            printf("Nota do exame: %.1f\n",mediaFinal);
            mediaFinal = ((media + mediaFinal)/2);

        }
       else if (mediaFinal>=5.0)
       {
           printf("Aluno aprovado.\n");
       }
       else if (mediaFinal <=4.9)
       {
           printf("Aluno reprovado\n");
       }
       printf("Media final: %.1f",mediaFinal);

    return 0;
}
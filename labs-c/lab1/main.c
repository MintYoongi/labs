#include <stdio.h>
#include <math.h>

int main() {
    double a, x, G, F, Y;

    printf("Введите a: ");
    scanf("%lf", &a); /*ввод значения а для вычисления дальнейшей формулы */
    printf("Введите х: ");
    scanf("%lf", &x); /*ввод значения х для вычисления дальнейшей формулы */
    
    /*вычисление G по формуле*/
    
    G = (4*(-18*pow(a,2)+3*a*x+10*pow(x,2)))/(15*pow(a,2)+29*a*x+12*pow(x,2));
    printf ("G = %lf\n\n", G);

    printf("Введите a: ");
    scanf("%lf", &a);
    printf("Введите х: ");
    scanf("%lf", &x);
    
    /*вычисление F по формуле*/
    
    F = 1/(cos(5*pow(a,2)+14*a*x-3*pow(x,2)));
    printf ("F = %lf\n\n", F);

    printf("Введите a: ");
    scanf("%lf", &a);
    printf("Введите х: ");
    scanf("%lf", &x);
    
    /*вычисление Y по формуле*/
    
    Y = acos(9*pow(a,2)+42*a*x+40*pow(x,2)+1);
    printf ("Y = %lf\n\n", Y);

    return 0;
}

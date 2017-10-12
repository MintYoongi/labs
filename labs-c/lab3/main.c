#include <stdio.h>
#include <math.h>

int main() {
    int c=1;
    double a, x, G, F, Y;
    while ((c>=1) && (c<=3)) {
        printf ("enter c = 1 or 2 or 3: ");
        scanf ("%d", &c);
        switch (c) {
            case 1:
                printf ("enter a: ");
                scanf ("%lf", &a);
                printf ("enter x: ");
                scanf ("%lf", &x);
                G = (4 * (-18 * pow(a, 2) + 3 * a * x + 10 * pow(x, 2))) /
                    (15 * pow(a, 2) + 29 * a * x + 12 * pow(x, 2));
                printf("G = %lf\n\n", G);
                break;
            case 2:
                printf ("enter a: ");
                scanf ("%lf", &a);
                printf ("enter x: ");
                scanf ("%lf", &x);
                F = 1 / (cos(5 * pow(a, 2) + 14 * a * x - 3 * pow(x, 2)));
                printf("F = %lf\n\n", F);
                break;
            case 3:
                printf ("enter a: ");
                scanf ("%lf", &a);
                printf ("enter x: ");
                scanf ("%lf", &x);
                Y = acos(9 * pow(a, 2) + 42 * a * x + 40 * pow(x, 2) + 1);
                printf("Y = %lf\n\n", Y);
                break;
            default:
                printf("Error");
        }
    }
    return 0;

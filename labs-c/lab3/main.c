#include <stdio.h> 
#include <math.h> 

int main() { 
double a, x, m, G, F, Y, min, max; 
int c, k; 

do { 

printf("Если вы хотите выйти из программы, введите 0\n"); 
printf("Если вы хотите посчитать G, введите 1\n"); 
printf("Если вы хотите посчитать F, введите 2\n"); 
printf("Если вы хотите посчитать Y, введите 3\n"); 
scanf("%d", &c); 

if (c == 0) { 
printf("До свидания!"); 
return 0; 
} 

if ((c < 0) || (c > 3)) { 
printf("Неверное значение, попробуйте ввести заново\n"); 
scanf("%d", &c); 
} else 

printf("Введите минимальное значение х: ");
scanf("%lf", &min); 
printf("Введите максимальное значение x: ");
scanf("%lf", &max); 

if (min >= max) { 
printf("Минимальное значение должно быть меньше максимального, введите еще раз максимальное\n"); 
scanf("%lf", &max); 
} 
printf("Введите колличество шагов: ");
scanf("%d", &k); 

while (k <= 0) { 
printf("Число шагов не может быть меньше или равно 0, введите количество шагов еще раз\n"); 
scanf("%d", &k); 
} 

switch (c) { 
case 1: { 
printf("Введите а: "); 
scanf("%lf", &a); 
for (x = min; x <= max; x += (max - min) / 
(s - 1)) {
m = (15*pow(a,2)+29*a*x+12*pow(x,2)); 
if (m == 0) { 
printf("Введенные значения не входят в область определения функции"); 
continue; 
} 
G =(4*(-18*pow(a,2)+3*a*x+10*pow(x,2)))/m; 
printf("G=%lf\n", G); 

} 
break; 
case 2: { 
printf("Введите а: "); 
scanf("%lf", &a); 
for (x = min; x <= max; x += (max - min) / (s - 1)) { 
m = cos(5*pow(a,2)+14*a*x-3*pow(x,2)); 
if (m == 0) { 
printf("Введенные значения не входят в область определения функции"); 
continue; 
} 
F = 1/m; 
printf("F=%lf\n", F); 
} 
break; 
case 3: { 
printf("Введите а: "); 
scanf("%lf", &a); 
} 
for (x = min; x <= max; x += (max - min) / (s - 1)) { 
Y = acos(9*pow(a,2)+42*a*x+40*pow(x,2)+1); 
printf("%lf\n", Y); 
} 
break; 
} 
} 
} 
} 
} while (c != 0) 
return 0; 
} 

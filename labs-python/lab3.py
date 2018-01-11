from math import log, sin, acos

print(" 1 - Вычислить функцию G\n " 
" 2 - Вычислить функцию F\n " 
" 3 - Вычислить функцию Y\n " 
" 0 - Выход из программы \n ") 
c = float(input('Значение\n')) 
if c == 0: 
print("До свидания!") 
else: 
a = float(input("Введите а: ")) 
min = float(input("Введите минимальное значение x: ")) 
max = float(input("Введите макимальное значение х: ")) 
step = int(input("Введите число шагов: ")) 
step = int 
step = (max - min) / (step - 1) 

if c == 1: 
while min <= max: 
m = (15*(a**2)+29*a*x+12*(x**2)) 
if m != 0: 
G = (4*(-18*(a**2)+3*a*x+10*(x**2))) / m 
print('Result: {0:.4f}'.format(G)) 
else: 
print("Введите корректное значение ") 
min += step 
elif c == 2: 
while min <= max: 
m =(cos(5*(a**2)+14*a*x-3*(x**2))) 
if m != 0: 
F = 1 / m 
print('Result: {0:.18f}'.format(F)) 
else: 
print("Введите корректное значение") 
min += step 
elif c == 3: 
while min <= max: 
Y = acos(9*(a**2)+42*a*x+40*(x**2)+1) 
print('Result: {0:.4f}'.format(Y)) 
min += step

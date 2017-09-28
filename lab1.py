#import math
from math import cos, acos, atan
a = float(input('Enter a: '))
x = float(input('Enter x: '))
G = (4*(-18*(a**2)+3*a*x+10*(x**2)))/(15*(a**2)+29*a*x+12*(x**2))
print ('A = {}, X = {}, Result: {}'.format(a,x,G))

a = float(input('Enter a: '))
x = float(input('Enter x: '))
F = 1/(cos(5*(a**2)+14*a*x-3*(x**2)))
print ('A = {}, X = {}, Result: {}'.format(a,x,F))

a = float(input('Enter a: '))
x = float(input('Enter x: '))
Y = acos(9*(a**2)+42*a*x+40*(x**2)+1)
print ('A = {}, X = {}, Result: {}'.format(a,x,Y))
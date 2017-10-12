from math import cos, acos
c = 1
while (c >= 1) and (c <= 3):
    c = int(input('Enter c = 1 or 2 or 3: '))
    if c == 1:
        a = float(input('Enter a: '))
        x = float(input('Enter x: '))
        G = (4*(-18*(a**2)+3*a*x+10*(x**2)))/(15*(a**2)+29*a*x+12*(x**2))
        print ('a = {}, x = {}, G: {}'.format(a, x, G))
    if c == 2:
        a = float(input('Enter a: '))
        x = float(input('Enter x: '))
        F = 1/(cos(5*(a**2)+14*a*x-3*(x**2)))
        print('a = {}, x = {}, F: {}'.format(a, x, F))
    if c == 3:
        a = float(input('Enter a: '))
        x = float(input('Enter x: '))
        Y = acos(9*(a**2)+42*a*x+40*(x**2)+1)
        print('a = {}, x = {}, Y: {}'.format(a, x, Y))
    if (c < 1) or (c > 3):
        print('Error')
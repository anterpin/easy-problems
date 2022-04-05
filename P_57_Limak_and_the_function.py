
# f(x) = x ^ 2 + 100x + [x/3]
# 3f(x) = 3x^2 + 300x + x - (x%3)
# 3x^2 + 300x + x + (x%3) - 3f(x) = 0
# x = (-301 + sqrt(301^2 +36f(x)))/6
# x = (-302 + sqrt(302^2 +36f(x)))/6
# x = (-303 + sqrt(303^2 +36f(x)))/6
from math import sqrt
def secondo_grado(a,b,c):
    return int((-b + sqrt(b**2 - 4 * a * c)) / (2*a))

def f(x):
    return x**2 + 100 * x + int(x/3)

n = int(input())
for b in [301,300,303]:
    x = secondo_grado(3,b,-3 * n)
    if f(x) == n:
        print(x)
        break
    if f(x+1) == n:
        print(x+1)
        break
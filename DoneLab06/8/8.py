a = input()
b = a
c = a[:]
print(a == b == c)
print(a is b, a is c)
a += '!'
print(a, b, c)

x = list(map(float, input().split()))
for value in x:
    if value < 0:
        print(value)
        break
else:
    print('Отрицательных чисел нет')

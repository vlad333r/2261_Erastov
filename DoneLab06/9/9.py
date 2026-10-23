for i, letter in enumerate('abcdefghijklmnopqrstuvwxyz'):
    for j in range(100):
        globals()[f'{letter}{j}'] = i * 100 + j + 1

print(a0, a99, b0, z99)

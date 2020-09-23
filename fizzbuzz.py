import os
num = 1
for num in range(101):
    if num % 15 == 0:
        print('fizzbuzz')
    elif num % 3 == 0:
        print('fizz')
    elif num % 5 == 0:
        print('buzz')
    else:
        print(str(num))
num = num + 1
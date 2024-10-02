n = int(input())
while True:
    numb = int(input())
    if numb != 0:
        if numb % n != 0:
            print(f'{numb} is NOT a multiple of {n}.')
        else:
            print(f'{numb} is a multiple of {n}.')
    else:
        break
while True:
    n = int(input())
    n_origin = n
    arr = ['1']
    i = 1
    if n != -1:
        while n - i != 0:
            i += 1
            if n % i == 0:
                arr.append(str(i))
        arr_int = map(int, arr)
        integrate = sum(arr_int) - n_origin
        if integrate != n_origin:
            print(f'{n_origin} is NOT perfect.')
        else:
            print(f'{n_origin} = {" + ".join(arr[:-1])}')
    else:
        break
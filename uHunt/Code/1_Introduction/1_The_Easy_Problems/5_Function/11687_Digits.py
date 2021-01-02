while True:
    x = input()
    if x == 'END':
        break
    prev_d = x
    curr_d = ''

    i = 0
    while True:
        i += 1
        curr_d = str(len(prev_d))
        if curr_d == prev_d:
            break
        prev_d = curr_d

    print(i)

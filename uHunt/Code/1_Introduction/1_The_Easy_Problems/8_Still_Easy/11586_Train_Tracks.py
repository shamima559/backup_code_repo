for i in range(int(input())):
    a = input()

    ff = 0
    mm = 0
    for item in a:
        if (item == "F"):
            ff += 1
        if (item == "M"):
            mm += 1
    
    if (ff == mm and ff != 1 and mm != 1):
        print("LOOP")
    else:
        print("NO LOOP");
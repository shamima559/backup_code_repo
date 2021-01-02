my_list = list(map(int, input().split()))

print('input the number:')
number = int(input())

first = 0
last = len(my_list)-1
found = False
cycle = 0

while first <= last and not found:

    midpoint = (first + last)//2
    if my_list[midpoint] == number:
        found = True
    else:
        if number < my_list[midpoint]:
            last = midpoint-1
        else:
            first = midpoint+1
    cycle += 1

print('Found after', cycle, 'cycle.')

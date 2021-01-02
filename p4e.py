l = set()
for line in open(input()):
    l.update({word for word in line.split()})

l = list(l)
l.sort()
print(l)

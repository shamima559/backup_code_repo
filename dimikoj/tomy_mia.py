import math
for i in range(int(input())):
    sentence = input().split()
    unique_word = set(sentence)
    deno = 1
    for item in unique_word:
        deno *= math.factorial(sentence.count(item))
    print("1/%d" % (math.factorial(len(sentence)) / deno))

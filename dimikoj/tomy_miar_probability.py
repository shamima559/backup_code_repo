import math

test = int(input())
for x in range(test):
    line = input()
    unique_word = []
    words = line.split()
    # print("The number of words in the sentence is %d" % len(words))
    denominator = 1
    for item in words:
        if unique_word.count(item) == 0:
            unique_word.append(item)
    # print("Unique words in the sentence are:")
    # for item in unique_word:
    #    print("%s " % item, end="")
    # print()

    # for item in unique_word:
    #    cnt = words.count(item)
    #    print("'%s' word appears %d times in the sentence" % (item, cnt))

    for item in unique_word:
        denominator *= math.factorial(words.count(item))
    numerator = math.factorial(len(words))
    inv_probability = numerator / denominator
    print('1/%d' % (int(inv_probability)))

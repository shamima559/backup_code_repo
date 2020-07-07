def solve(N, A):
    first = {}
    last = {}
    for i, x in enumerate(A):
        first.setdefault(x, i)
        last[x] = i

    lengths = set()
    for x, i in first.items():
        j = last[x]
        length = j - i + 1
        if length in lengths:
            return False
        lengths.add(length)
    return sum(lengths) == N


for _ in range(int(input())):
    N = int(input())
    A = list(map(int, input().split()))
    print("YES" if solve(N, A) else "NO")

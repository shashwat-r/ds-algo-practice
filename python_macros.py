read_ints = lambda: list(map(int, input().split()))
print_list = lambda arr: print(" ".join([str(x) for x in arr]))
T = int(input())
for _ in range(T):
    n = int(input())
    arr = read_ints()
def stl_lower_bound(arr, value):
    first, last = 0, len(arr)
    length = last - first
    while (length > 0):
        half = length // 2
        middle = first + half
        if (arr[middle] < value):
            first = middle + 1
            length -= half + 1
        else:
            length = half
    return first

def stl_upper_bound(arr, value):
    first, last = 0, len(arr)
    length = last - first
    while (length > 0):
        half = length // 2
        middle = first + half
        if (value < arr[middle]):
            length = half
        else:
            first = middle + 1
            length = length - half - 1
    return first

def stl_binary_search(arr, value):
    i = stl_lower_bound(arr, value)
    return i!=len(arr) and not (value < arr[i])

def lower_bound(arr, value):
    first, last = 0, len(arr)
    while last > first:
        middle = first + (last - first) // 2
        if (arr[middle] < value):
            first = middle + 1
        else:
            last = middle
    return first

# returns nearest element greater than val.
def upper_bound(arr, value):
    first, last = 0, len(arr)
    while (last > first):
        middle = first + (last - first) // 2
        if (value < arr[middle]):
            last = middle
        else:
            first = middle + 1
    return first

# returns nearest element not less than val.
def _upper_bound(arr, value):
    first, last = 0, len(arr)
    while last > first:
        middle = first + (last - first) // 2
        if (arr[middle] <= value):
            first = middle + 1
        else:
            last = middle
    return first

arr = [i-1 if i % 5 == 4 else i for i in range(1,21)]
print(end="")
for i in range(len(arr)): print(arr[i], end=" ")
print()
for i in range(-2, len(arr)+5): print(stl_lower_bound(arr, i), end=" ")
print()
for i in range(-2, len(arr)+5): print(lower_bound(arr, i), end=" ")
print()
for i in range(-2, len(arr)+5): print(stl_upper_bound(arr, i), end=" ")
print()
for i in range(-2, len(arr)+5): print(upper_bound(arr, i), end=" ")
# print()
# for i in range(-2, len(arr)+5): print(_upper_bound(arr, i), end=" ")
print()
# print(stl_binary_search(arr, 3), stl_binary_search(arr, 4))
print()
for i in range(10): print()

# # for i in range(0, len(arr)): 
# #     print("[", end="")
# #     if lower_bound(arr, i) != i:
# #         print(arr[lower_bound(arr, i)], end=" ")
# #     else:
# #         print(":", end="")
# #     print(arr[i], end="")
# #     if upper_bound(arr, i) != i:
# #         print("", arr[upper_bound(arr, i)], end="")
# #     else:
# #         print(":", end="")
# #     print("]", end=" ")
# for i in range(0, len(arr)): 
#     print(stl_lower_bound(arr, i), i)#, stl_upper_bound(arr, i))

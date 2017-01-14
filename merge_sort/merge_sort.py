#!/usr/bin/python3
def merge(left, right):
    result = []
    i = j = 0
    left_len = len(left)
    right_len = len(right)
    while i < left_len and j < right_len:
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    while i < left_len:
        result.append(left[i])
        i += 1
    while j < right_len:
        result.append(right[j])
        j += 1
    return (result)
def merge_sort(array):
    arr_len = len(array)
    if arr_len < 2:
        return (array)
    mid = arr_len // 2
    left = merge_sort(array[:mid])
    right = merge_sort(array[mid:])

    print (merge(left,right))
    return merge(left, right)

test_array = [8, 7, 6, 5, 4, 3, 2, 1, 3, 4, 5, 5, 2, 3, 1, 3, 2, 5, 6, 7, 8, 10, 11, 34, 34, 21, 1, 6, 7, 8, 9]
print("Test array:")
print(test_array)
test_array = merge_sort(test_array)
print("New array:")
print(test_array)

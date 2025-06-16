def merge_sort(Arr):
    if len(Arr) <= 1:
        return Arr
    mid = len(Arr) // 2
    left_half = merge_sort(Arr[:mid])
    right_half = merge_sort(Arr[mid:])
    sorted_left=merge_sort(left_half)
    sorted_right=merge_sort(right_half)
    return merge(sorted_left, sorted_right)

def merge(left, right):
    merged = []
    left_index = right_index = 0
    while left_index<len(left) and right_index<len(right):
        if left[left_index]<right[right_index]:
            merged.append(left[left_index])
            left_index += 1
        else:
            merged.append(right[right_index])
            right_index += 1
    merged.extend(left[left_index:])
    merged.extend(right[right_index:])
    return merged

l=[47,4738,5342,353,241,45]
print(merge_sort(l))
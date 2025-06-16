def merge_sort2(arr):
    if len(arr) <= 1:
        return arr
    mid=len(arr)//2
    left=arr[:mid]
    right=arr[mid:]

    sorted_left=merge_sort2(left)
    sorted_right=merge_sort2(right)
    
    i=j=k=0
    while i<len(left) and j<len(right):
        if left[i]<right[j]:
            arr[k]=left[i]
            i+=1
        else:
            arr[k]=right[j]
            j+=1
        k+=1
    
    while i<len(left):
        arr[k]=left[i]
        i+=1
        k+=1
    
    while j<len(right):
        arr[k]=right[j]
        j+=1
        k+=1
    return arr

arr=[24,58,11,67,92,43]

print(merge_sort2(arr))
    
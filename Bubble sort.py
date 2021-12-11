arr = [64,34,25,12,22,11,90]
n = len(arr)

print("The Original array: ")
for i in range(n):
    print(arr[i])

for i in range(n):
    for j in range(0,n-i-1):
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1],arr[j]
            
print("Sorted array is: ")
for i in range(n):
    print(arr[i])
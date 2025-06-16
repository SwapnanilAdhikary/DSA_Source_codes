num = int(input("How many Numbers ?"))
lst=[]

for n in range(num):
    numbers = int(input("Enter a number : "))
    lst.append(numbers)

print("Sum of all numbers :", sum(lst))
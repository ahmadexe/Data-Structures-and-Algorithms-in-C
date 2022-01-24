
first_largest = 0
second_largest = 0

listmain = [12,1,34,78,89,100,2,4,100]

for item in listmain:
    if item > first_largest:
        second_largest = first_largest
        first_largest = item
    
    elif item > second_largest and item != first_largest:
        second_largest = item


print(second_largest)
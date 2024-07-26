import random

def ReadStringCount():
    #Read a string and print its length
    string = input("Enter a string: ");

    modstring = string.replace(" ", "");
    stringlen = len(modstring);

    print(f"{string} is {stringlen} characters long");

def ReadRandomArray():
    #Fill an array/list with 5 random numbers from 0 to 99
    array = [];

    for i in range(5):
        array.append(random.randrange(0, 99));

    #Separately from the filling part, print thoes numbers out
    print(array);

ReadStringCount()
print(" ")
ReadRandomArray()
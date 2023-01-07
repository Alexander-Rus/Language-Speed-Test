
import timeit
import time

def bubbleSort(arr):
    for i in range(len(arr) - 1):
        for j in range(len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

def main():

    #Create the list of 10,000 integers
    values = [i for i in range(10000)]

    #Reverse the list of values
    values.reverse()

    # Perform the bubble sort, worst case scenario and time it
    elapsed = timeit.timeit(lambda: bubbleSort(values), number=1) * 1000
    print(f"PYTHON Time elapsed: {elapsed:.2f} ms")



# Call the main function
if __name__ == "__main__":
    main()


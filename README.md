# Language Speed Comparison

This is a simple project example to compare the relative speed of C++, Java, Python, and Rust. Each language is tasked with the same steps 

* Initialize an array of 10,000 integers. 
* Reverse the array into decending order.
* Perform a **bubble sort** on the array given the worst case scenario. 

Bubble sort is considered a very inefficient sorting method, and will take significant computing resources to sort an array that is in decending order.
I have tried to keep the bubble sort method as similar as possible between languages. They all follow the same basic structure in python:

```
def bubbleSort(arr):
    for i in range(len(arr) - 1):
        for j in range(len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
```

Docker is used to containerize each language. Using Docker-compose the containers can be run at the same time with results printed out together. 


## Results
For each language the results I recieved were as follows:
**PYTHON Time elapsed: 11803.04 ms**
**RUST Time elapsed: 3450ms**
**C++ Time elapsed: 1066.33ms**
**JAVA Time elapsed: 124 milliseconds**
 
These results will likely vary greatly depending on the machine you are using. 
I was surprised to see that Java was the fastest, but I was not surprised to see python being the slowest. 


## Local Development
**Make sure you have docker installed and working correctly**
1. Clone this repository
2. Within each directory, there is a Dockerfile to create a Docker image specific to the language.
* In the `c++` directory, type the command `docker build -t c_plus_speed .`
* In the `java` directory, type the command `docker build -t java_speed .`
* In the `python` directory, type the command `docker build -t python_speed .`
* In the `rust` directory, type the command `docker build -t rust_speed .`
3. In the main directory there is a `docker-compose.yaml`, this is the file that tells Docker-compose to run all the containers at once
* In the main directory type in the command `docker-compose up` to run all containers and get the output. 

<p align="center">
<img src="https://raw.githubusercontent.com/Alexander-Rus/Language-Speed-Test/main/img/Screenshot%20from%202023-01-07%2015-25-21.png"
  alt="Example output of speed test"
  width="894" height="255">
</p>


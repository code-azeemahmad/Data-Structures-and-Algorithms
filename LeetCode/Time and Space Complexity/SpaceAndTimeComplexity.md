# Space and Time Complexity: 

Code execution time is different on different OS and online coding platforms

## Time Complexity:
&nbsp;&nbsp; NOT the actual time taken but amount of time taken as function of input size (n).

Amount of time taken is measured in terms of operations.
```
 int n = 5;
    for (int i = 0; i < n; i++)
```
When we talk about time compexity, we talk about it wrt worst case scenario because if an algorithm works optimal at worst case, then it must work best at best case.
In real world scenarios or interviews, worst case scenarios are important

### Linear Search
&nbsp;&nbsp; f(x) = x
&nbsp;&nbsp; f(n) = n   -->  O(n)
- It means no. of elements in array = no. of iterations in loop

## Big O notation:
        |
        |---> Worst case complexity (upper boundary)

- ignore constraints
- largest term

```
    f(n) = 100 + 5n^2 + n^(1/2)     
    f(n) = n^2  + n^(1/2)       // // n = 10^6
    f(n) = 10^12 + 10^3
    f(n) = n^2 --> O(n)
```

### Notations:

- Big O (worst case) upper bound
- Theta 0 (average case)
- Omega w (best case) lower bound

## Space Complexity:
&nbsp;&nbsp; Amount of space taken by an algorithm as function of input size (n)

```         |----> input (arr, vec, str)
    code ---|
            |----> auxiliary space extra 
``` 
We count only auxiliary space in space complexity.

### Storing Squares of elements of an Array:
```
    int n = 5;
    arr1[n] = {1, 2, 3, 4, 5};      // input arr
    arr2[n] = {1, 4, 9, 16, 25};    // extra 
```
As the input size n increases, the auxiliary space size increases --> Space Complexity = O(n) Linear Graph  

### Calculating Sum of all elements of an Array:
```
    // input: arr[]
    int sum = 0;
    for (int i = 0; i < n; i ++)
    {
        sum += arr[i];
    }
    cout << sum;
    // output: sum
```
- No matter how much greater the input arr size n is, there will be only one output variable space created.
- Auxiliary Space will remain constant --> Space Complexity = O(k) OR O(1)

## Note:
&nbsp;&nbsp;&nbsp; Interview POV, we focus on Time Complexity beacuse in our modern systems, it is comparatively easy to bring more space as compared to making an algorithm which is more efficient in terms of time

# Some common time complexities:

## O(1) Constant Time Complexity
- Sum of numbers from 1 to N
```
    int n,
    cin >> n;
    int ans = n * (n+1)/2;```
&nbsp;&nbsp;&nbsp; Time Complexity = O(1)
- Printing each element of an array one by one
- Printing largest element of a sorted array

## O(n) Linear Time Complexity
- N Factorial
```
    int fact = 1
    for (int i=l; i<=n; i++) {
        fact *= i;
    }
```
- nth Fibonacci DP
- Kadane's Algorithm
- Moore's voting algorithm

## O(n^2)
- Bubble Sort
- Selection Sort
- Insertion Sort

## O(n^3)
- Printing all possible SubArrays

## O(log n)
&nbsp;&nbsp;&nbsp; O(log base 2 n)
- Binary Search
- Binary Search Tree

## O(n log n)
- Merge sort
- Quick sort
- Greedy algorithms

## O(2^n)
- Recursion (brute force)

## O(n!)
- nQueens
- Knights Tour
- string - all possible permutations
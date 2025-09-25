# Prime Number - Time Complexity:
```
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```
i iterates from 2 to sqrt(n), so Time Complexity = O(n^1/2 )

# Selection Sort - Time Complexity:
```
(n − 1) + (n − 2) + (n − 3) + … + 1= n (n − 1)/ 2​
```
That simplifies to O(n²).
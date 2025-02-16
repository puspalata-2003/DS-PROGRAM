// C Program to find the sum of even-indices Fibonacci numbers
#include <stdio.h>
int calculateEvenIndexedSum(int n) {
    if (n <= 0) 
        return 0;
    int fibo[1000]; 
    fibo[0] = 0;
    fibo[1] = 1;

    int sum = 0;
    for (int i = 2; i < n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 0; i < n; i += 2) {
        sum += fibo[i];
    }

    return sum;
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int sum = calculateEvenIndexedSum(n);
    printf("Sum of Fibonacci numbers at even indices up to %d terms = %d\n", n, sum);

    return 0;
}

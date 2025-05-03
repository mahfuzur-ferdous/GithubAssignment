#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello World"<<endl;
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial<<endl;   
    }

    if (n < 0)
        cout << "Error! Fibonacci of a negative number doesn't exist." << endl;
    else {
        int a = 0, b = 1, next;
        cout << "Fibonacci sequence up to " << n << ": ";
        for (int i = 0; i < n; ++i) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }
    int count = 0, number = 2, nthPrime;
    while (count < n) {
        bool isPrime = true;
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            count++;
        
        if (count < n)
            number++;
    }
    
    nthPrime = number;
    cout << "The " << n << "th prime number is: " << nthPrime << endl;
    return 0;
}
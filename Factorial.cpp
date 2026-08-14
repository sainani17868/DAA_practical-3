#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

long long factorialIterative(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

long long factorialRecursive(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorialRecursive(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    auto startIterative = high_resolution_clock::now();

    long long resultIterative = factorialIterative(n);

    auto endIterative = high_resolution_clock::now();

    auto startRecursive = high_resolution_clock::now();

    long long resultRecursive = factorialRecursive(n);

    auto endRecursive = high_resolution_clock::now();

    auto timeIterative = duration_cast<nanoseconds>(
        endIterative - startIterative
    );

    auto timeRecursive = duration_cast<nanoseconds>(
        endRecursive - startRecursive
    );

    cout << "\n<-------- ITERATIVE METHOD -------->\n";
    cout << "Factorial : " << resultIterative << endl;
    cout << "Time      : " << timeIterative.count() << " ns\n";

    cout << "\n<-------- RECURSIVE METHOD -------->\n";
    cout << "Factorial : " << resultRecursive << endl;
    cout << "Time      : " << timeRecursive.count() << " ns\n";

    return 0;
}

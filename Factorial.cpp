#include <iostream>
using namespace std;

long long factorialIterative(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
        fact = fact * i;

    cout<<fact<<endl;
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

    cout << "\n------------ ITERATIVE METHOD -------------\n";
    cout << "Factorial : " << factorialIterative(n) << endl;

    cout << "\n------------ RECURSIVE METHOD ---------------\n";
    cout << "Factorial : " << factorialRecursive(n) << endl;

    return 0;
}

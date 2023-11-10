#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool checkNum(int n)
{
    if (n / 10 == 0)
    {
        return false;
    }
    return true;
}

bool sPrime(int n)
{
    if (n > 1 && isPrime(n) && checkNum(n))
    {
        return sPrime(n / 10);
    }
    if (!checkNum(n) && isPrime(n))
    {
        return true;
    }
    return false;
}

void SPrimeNum(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (sPrime(i))
            cout << i << ' ';
    }
}

int main()
{
    int num;
    cin >> num;
    SPrimeNum(num);

    return 0;
}
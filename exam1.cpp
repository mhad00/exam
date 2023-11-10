#include <iostream>

using namespace std;

int tonguocso(long a)
{
    long sum = a;
    for (int i = 1; i <= a / 2; i++)
    {
        if (!(a % i))
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    long a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        int sum = tonguocso(a);
        cout << sum << '\n';
    }
    return 0;
}
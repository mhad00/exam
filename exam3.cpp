#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    string b = "";
    int count = 1;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j <= a.size(); j++)
        {
            if (a[i] == a[j] && j < a.size())
            {
                count++;
            }
            else
            {
                b += a[i] + to_string(count);
                count = 1;
                i = j;
            }
        }
    }
    cout << b;
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int base_cash;
    int joe_cash;
    cin >> base_cash;
    cin >> joe_cash;
    int dec = joe_cash / base_cash;
    int count = 0;
    if (base_cash == joe_cash)
    {
        cout << 0;
        exit(0);
    }
    else if (joe_cash % base_cash != 0)
    {
        cout << -1;
        exit(0);
    }

    else
    {
        while (dec > 1)
        {
            if (dec % 6 == 0)
            {
                count += 2;
                dec / 6;
            }
            else if (dec % 2 == 0)
            {
                count += 1;
                dec / 2;
            }
            else if (dec % 3 == 0)
            {
                count += 1;
                dec / 3;
            }
            else
            {
                cout << -1;
                exit(0);
            }
        }

        cout << count;
        exit(0);
    }
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        int key[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> key[i];
        }
        if (key[y - 1] != 0)
        {
            int z = key[y - 1];
            if (key[z - 1] != 0)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}

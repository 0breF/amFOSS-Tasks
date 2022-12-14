#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

int distinct_elements(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        while (i < n - 1 && arr[i] == arr[i + 1])
        {
            i++;
        }
        count++;
    }
    return count;
}

int main()
{
    int no_of_cities;

    cin >> no_of_cities;
    for (int k = 0; k < no_of_cities; k++)
    {
        int no_of_heroes;
        cin >> no_of_heroes;
        int hero_levels[no_of_heroes];
        for (int l = 0; l < no_of_heroes; l++)
        {
            cin >> hero_levels[l];
        }
        sort(hero_levels, hero_levels + no_of_heroes);
        if ((distinct_elements(hero_levels, no_of_heroes) != no_of_heroes) || (hero_levels[0]==0))
        {
            int mana = 0;
            int sum = 0;

            for (int a = 0; a < no_of_heroes + 1; a++)
            {
                for (int i = 0; i < no_of_heroes - 1; i++)
                {
                    if (hero_levels[i] == hero_levels[i + 1] != 0)
                    {
                        hero_levels[i] == 0;
                        break;
                    }
                }
                sort(hero_levels, hero_levels + no_of_heroes);
                hero_levels[no_of_heroes - 1] = hero_levels[0];
                mana += 1;
                for (int i = 0; i < no_of_heroes; i++)
                {
                    if (hero_levels[0] == hero_levels[i])
                    {
                        hero_levels[0] = 0;
                    }
                }

                for (int i = 0; i < no_of_heroes - 1; i++)
                {
                    if (hero_levels[i] == hero_levels[i + 1] != 0)
                    {
                        hero_levels[i] == 0;
                        break;
                    }
                }
                if (accumulate(hero_levels, hero_levels + no_of_heroes, sum) == 0)
                {
                    cout << mana << endl;
                    break;
                }
            }
        }
        else{
            cout<<no_of_heroes+1<<endl;
        }
    }

    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int no_of_groups;
    cin>>no_of_groups;
    for(int i=0;i<no_of_groups;i++){
        bool surv = true;
        int no_of_monsters;
        cin>>no_of_monsters;
        int monster_health[no_of_monsters];
        for(int i=0;i<no_of_monsters;i++){
            cin>>monster_health[i];
        }
        for(int i=0;i<no_of_monsters;i++){
            if(monster_health[i]%(*min_element(monster_health,monster_health+no_of_monsters))!=0){
                surv = false;
                break;
            };
        }
        if(surv){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }   
    return 0;
}

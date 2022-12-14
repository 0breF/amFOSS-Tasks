#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x;
    cin>>x;
    int y[x];
    for(int i=0;i<x;i++){
        cin>>y[i];
    }
    int count=0;
    for(int i=0;i<x-1;i++){
        if(y[i]+y[i+1]<=4){
            count+=1;
        }
        else{
            count+=1;
        }
    }
    cout<<count;
    return 0;
}

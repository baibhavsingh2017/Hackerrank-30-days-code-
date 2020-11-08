#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i;
    cin>> n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>> a[i];
    }
    int max = a[0];
    for(i=0; i<n; i++)
    {
        if(max< a[i])
        {
            max= a[i];
        }
    
    }
    int min= a[0];
    for(i=0; i<n; i++)
    {
        if(min> a[i])
        {
            min= a[i];
        }
    }
    cout<<min<<" "<<max;
    
    
    return 0;  
    return 0;
}

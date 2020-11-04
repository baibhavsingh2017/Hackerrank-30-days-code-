#include <bits/stdc++.h>

using namespace std;

int factorial(int n, int result);

int main()
{
    int n, i;
    cin>> n;
    int result=1;
    cout<< factorial(n, result);
    return 0;
}

 int factorial(int n, int result)
    {
        for(int i= n; i>0; i--)
        {
            result= result*i;
        }
        return result;
    }

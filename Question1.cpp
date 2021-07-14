#include<bits/stdc++.h>
using namespace std;

int Triplets(int a[], int n, int sum)
{
    int result=0;
    for (int i = 0; i < n-2; i++)
    {

       for (int j = i+1; j < n-1; j++){
        for (int k = j+1; k < n; k++)
               if (a[i] + a[j] + a[k] < sum)
                   result++;
       }
    }
    return result;
}

int main()
{
    int a[] = {5, 1, 3, 4, 7};
    int sum = 12;
    int n = sizeof a / sizeof a[0];
    cout << Triplets(a, n, sum) << endl;
    return 0;
}


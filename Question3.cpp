#include<bits/stdc++.h>
using namespace std;

int getMaxArea(int a[], int n)
{
    stack<int> s;
    int area = 0,t,toparea,i = 0;
    while (i < n)
    {
        if (s.empty() || a[s.top()] <= a[i])
            s.push(i++);
        else
        {
            t = s.top();
            s.pop();
            toparea = a[t] * (s.empty() ? i :i - s.top() - 1);

            if (area < toparea)
                area = toparea;
        }
    }
  while (s.empty() == false)
    {
        if (area < toparea)
            area = toparea;

        t = s.top();
        s.pop();
        toparea = a[t] * (s.empty() ? i :
                                i - s.top() - 1);
   }

    return area;
}
int main()
{
    int a[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(a)/sizeof(a[0]);
    cout << " " << getMaxArea(a, n);
    return 0;
}

#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    int m, d;
    cin >> d >> m;
    int curr_pro = arr[0];
    int curr_sum = arr[0];
    int count = 0;
  
    for (int i = 1; i < n; i++)
    {
        if(curr_pro==m && curr_sum==d)
            {count++;
             curr_sum
            }
    }
}
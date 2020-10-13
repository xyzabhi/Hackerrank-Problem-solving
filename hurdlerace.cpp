/*
 -*- coding: utf-8 -*-
 @Date    : 2020-10-13 19:57:53
 @Author  : Abhinav Kumar (abhinavkumar8083@gmail.com)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
        {cin >> arr[i];
        if(arr[i]>max)
            max = arr[i];
        }
    if(k>=max)
        cout << 0 << endl;
        else cout<<max-k<<endl;
    return 0;
}




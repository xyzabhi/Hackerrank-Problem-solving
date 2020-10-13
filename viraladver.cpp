/*
 -*- coding: utf-8 -*-
 @Date    : 2020-10-13 20:09:22
 @Author  : Abhinav Kumar (abhinavkumar8083@gmail.com)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int comm = 0;
    int shared = 5;
    int liked;
    while(n--)
    {
        liked = shared / 2;
        comm += liked;
        shared = liked * 3;
    }
    cout << comm << endl;
    return 0;
}




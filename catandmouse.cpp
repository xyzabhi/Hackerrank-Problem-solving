#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; //Number of queries
    while(n--)
    {
    int x, y, z; //x pos of cat A y pos of cat B and z pos of mouse C
    cin >> x >> y >> z;
    x = abs(z - x);
    y = abs(z - y);
    if(x>y)
        cout << "Cat B" << endl;
    else if (y>x)
        cout << "Cat A" << endl;
    else
        cout << "Mouse C" << endl;
    }
    return 0;
}
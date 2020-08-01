#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int spaces = 0; spaces < n - i - 1; spaces++)
            cout << " ";

        cout << "*";

        if (i != 0)
        {
            for (int spaces = 0; spaces < 2 * i - 1; spaces++)
                cout << " ";
            cout << "*";
        }
        
        cout<<"\n";
    }
    return 0;
}

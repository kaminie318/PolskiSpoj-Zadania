#include <iostream>

using namespace std;

int main()
{
    string wyraz;
    while(cin>>wyraz)
    {
        for(int i = wyraz.size()-1;i>=0;i--)
        {
            cout<<wyraz[i];
        }
        cout<<endl;
    }
}
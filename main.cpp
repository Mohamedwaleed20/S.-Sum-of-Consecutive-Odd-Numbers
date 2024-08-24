#include <iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    if(n<1||n>100)
    {
        cout << "error"  ;
    }

    while(n--)
    {
        int x , y;
        cin >> x >> y;

        int sum =0;
        int mx= max(x,y);
        int mn= min(x,y);
        if(x==y||x-y==1||y-x==1)
        {
            cout << 0 << endl;
        }
        else
        {
            for(int i = mn+1 ; i<mx;i++)
            {
                 if(i%2!=0)
                {
                    sum=sum+i;
                }
            }

        cout<<sum<<endl;

        }
    }


    return 0;
}

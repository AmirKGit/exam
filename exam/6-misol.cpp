#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"ARRAYNING RAZMERI "; cin>>n;
    
    int a[n];
    
    cout<<"ARRAYLARNI YOZING "<<endl;
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { if(a[i]>a[j])
            {
                int s = a[i];
                a[i] = a[j];
                a[j] = s;
            }
        }
    }

    for(int i=0; i<n; i++)
    cout<<a[i];
    return 0;
}
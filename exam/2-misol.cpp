#include <iostream>

using namespace std;

int main() {
//     "1,2,3"      =>  "2"
// "1,2,3,4"    =>  "2 3"
// "1,2,3,4,5"  =>  "2 3 4"
// /////////////////////
// "1"    =>  NULL
// "1,2"  =>  NULL

    int arr[]={1,2,3,4,5};

    int length= sizeof(arr)/sizeof(arr[0]);

    for (int i = 1; i < length-1; i++)
    {
        cout<<arr[i];
    }
    

    return 0;
}

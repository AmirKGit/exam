// testJackpot(["@", "@", "@", "@"]) ➞ true

// testJackpot(["abc", "abc", "abc", "abc"]) ➞ true

// testJackpot(["SS", "SS", "SS", "SS"]) ➞ true

// testJackpot(["&&", "&", "&&&", "&&&&"]) ➞ false

// testJackpot(["SS", "SS", "SS", "Ss"]) ➞ false
#include <iostream>

using namespace std;

int main() {

    string str[]={"@", "@", "@", "k"};
    string res;

    int length=sizeof(str)/sizeof(str[0]);

    for (int i = 0; i < length; i++)
    {
        res=str[i];
        
    }
    for (int i = 0; i < length; i++)
    {
        if (res==str[i])
        {
            cout<<"true";
            break;
        } else {
            cout<<"false";
            break;
        }
        
    }
    

    return 0;
}

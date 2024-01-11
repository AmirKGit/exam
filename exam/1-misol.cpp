#include <iostream>

using namespace std;

int main() {

    string str = "STRING";
    string result, res;

    for (int i = 0; i < str.length(); i++) {
        result = str[i];
        cout << result;

        
        for (int j = 0; j < 1; j++) {
            res = str[i];
            cout << res;
        }
    }

    return 0;
}

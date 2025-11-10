#include <iostream>
#include <math.h>

using namespace std;

int main() {
    string input_num;
    int base_num;
    int input_size;
    int result = 0;

    cin >> input_num >> base_num;

    input_size = input_num.size();
    
    for(int i = input_size-1 ; i >=0 ; i--){
        char c = input_num.at(i);
        int tmp;
        if(isalpha(c)){
            tmp = (tolower(c) - 'a' + 10);
        } else {
            tmp = c - '0';
        }
        // cout << tmp << "*" << pow(base_num, (input_size-i-1)) << endl;
        tmp = (tmp * pow(base_num, (input_size-i-1)));
        // cout << tmp << endl;
        result += tmp;
    }

    cout << result;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    int i;
    cout << "Please enter how many times you want it to be repeated:";
    cin >> i;
    string b;
    cout << "Please enter your name:";
    cin >> b;
    for(int c=0; c<i; c++)
    {
        cout << b <<endl;
    }
    return 0;
}

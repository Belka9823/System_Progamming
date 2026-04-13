# include <iostream>
# include <cstdlib>
# include <cstring>
# include <string>
#include <cmath>




using namespace std;

int main() {
    int n;
    cout << "Введите n: ";
    cin >> n;

    string Answer = "";
    int d = n;    
    int carry = 0;

    while (true) {
        Answer = (char)(d + '0') + Answer; 

        int prod = d * n + carry;
        d = prod % 10;
        carry = prod / 10;


        if (d == n && carry == 0) {
            break;
        }
    }

    cout << "Результат: " << n;
    for (int i = 0; i < Answer.length() - 1; i++) {
        cout << Answer[i];
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, b, c;
    int sum;
    cin >> n;
    int result = 0;
    int k =0;

    if (n < 10)
        n *= 10;
    result = n;

    while (1) {
        b = result/10; //2
        c = result%10; // 6
        sum = (b + c) % 10; //8

        result = (c*10) + sum; //68

        k++;

        if( n == result )
            break;

        cout << result << endl;
    }

    cout << k << endl;

    return 0;

}


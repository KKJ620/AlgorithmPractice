#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; //�Է¹޴� ��
    cin >> n;

    int *arr = new int[n];

    for(int i=0; i<n; i++) {
        cin >>arr[i];
    }
    cout << *min_element(arr, arr+n) <<" "<< *max_element(arr, arr+n) << endl;

    delete[] arr;

    return 0;
}

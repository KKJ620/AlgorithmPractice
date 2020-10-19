#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int *arr = new int[n];

    for(int i=0; i<n; i++) {
        cin >>arr[i];
    }

    float M = *max_element(arr, arr+n);

    float *narr = new float[n];
    float sum;
    for(int i=0; i<n; i++) {
        narr[i] = (arr[i]/M)*100;
        sum += narr[i];

    }

    cout << sum/n;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int *input = new int[9];
    int max_num;
    int max_index;
    for(int i=0; i<9; i++) {
        cin >> input[i];
    }
    //for(int i=0; i<9; i++){
    //    cout << input[i];
    //}
    max_num = *max_element(input, input+9);

    for(int i=0; i<9; i++){
        if(input[i] == max_num){
            max_index = i+1;
        }
    }
    cout << max_num << '\n' << max_index;
    return 0;
}

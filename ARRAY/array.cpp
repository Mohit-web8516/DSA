//to search an element

#include <iostream>
using namespace std;

int main() {
    int i, x = 8, index = -1;
    int arr[5] = {3, 5, 6, 8, 9};

    for (i = 0; i < 5; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }

    cout << index;
    return 0;
}

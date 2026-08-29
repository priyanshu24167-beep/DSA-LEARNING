#include <iostream>
using namespace std;

int main() {

    int arr[] = {100, 200, 300, 400, 500};
    int size = 5;

    int target = 500;

    for (int i = 0; i < size; i++) {

        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl << "And the value is :"<< arr[i];
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}
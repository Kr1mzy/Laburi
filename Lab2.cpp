#include <iostream>
using namespace std;
int main() {
    int i = 69;
    int number = 72;

    i = i + 69 + 72;

    int arr[3] = { 0, 0, 0 };
    int* iPointer = &i;

    number = *iPointer;

    *iPointer = 15;

    // Ìåíÿåì àäðåñ â èç ïåðåìåííîé i íà ìàññèâ
    iPointer = &arr[0];

    iPointer = iPointer + 2;

    arr[0] = 10;

    *iPointer = 5;
    iPointer = iPointer - 1;
    *iPointer = 6;

    cout << "i = " << i << endl;
    cout << "arr[0] = " << arr[0] << ", arr[1] = " << arr[1] << ", arr[2] = " << arr[2] << endl;

    return 0;
}

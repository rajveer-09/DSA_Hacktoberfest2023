//Move zero to the end
#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& nums) {
    int nonZeroIndex = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    moveZeros(arr);

    cout << "Array after moving zeros to the end: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

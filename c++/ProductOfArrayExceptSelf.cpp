//Product of array except self
#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);
    int leftProduct = 1, rightProduct = 1;

    for (int i = 0; i < n; i++) {
        result[i] *= leftProduct;
        leftProduct *= nums[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return result;
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

    vector<int> productArray = productExceptSelf(arr);

    cout << "Product of Array Except Self: ";
    for (int num : productArray) cout << num << " ";
    cout << endl;

    return 0;
}

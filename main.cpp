#include <iostream>
#include <vector>

using namespace std;

void rvrs(vector<int>& vct) {
    int start = 0;
    int end = vct.size() - 1;

    while (start < end) {
        // Swap elements at start and end positions
        swap(vct[start], vct[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    rvrs(numbers);

    cout << "Reversed vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

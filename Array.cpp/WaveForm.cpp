#include <iostream>
#include <vector>

using namespace std;

void ConvertWave(vector<int> &Wave, int arr[][3], int row, int col) {
    for (int j = 0; j < col; ++j) {
        if (j & 1) {
            // Odd case - bottom up approach
            for (int i = row - 1; i >= 0; --i) {
                Wave.push_back(arr[i][j]);
            }
        } else {
            // Even case - top bottom approach
            for (int i = 0; i < row; ++i) {
                Wave.push_back(arr[i][j]);
            }
        }
    }
}

int main() {
    vector<int> Wave;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Array" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    ConvertWave(Wave, arr, 3, 3);

    cout << "Wave vector contents: ";
    for (int i = 0; i < Wave.size(); ++i) {
        cout << Wave[i] << " ";
    }
    cout << endl;

    cout << "Size : " << Wave.size() << endl;

    for (int i = 0; i < Wave.size(); ++i) {
        cout << "x" << Wave[i] << " ";
    }
    cout << endl;

    return 0;
}

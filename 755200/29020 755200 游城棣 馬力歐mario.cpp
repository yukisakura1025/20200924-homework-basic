#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "The amount of layers: ";
    cin >> height;
    for (int i = height; i > 0; i--) {
        for(int j = i; j > 0; j--) {
            cout << " ";
        }
        for(int n = height - i + 1; n > 0; n--) {
            cout << "#";
        }
      cout << "\n";
    }
}
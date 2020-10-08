#include <iostream>
using namespace std;

int main () {
    int num, money;
    int sum = 0;
    cout << "資料筆數: ";
    cin >> num;
    int count = num;
    while (count > 0) {
        cout << "第 " << num - count + 1 << " 筆資料: ";
        cin >> money;
        sum += money;
        count--;
    }
    cout << "總和: " << sum;
}

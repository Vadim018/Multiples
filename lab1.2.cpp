#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Ukr");
    int n, m;

    cout << "Введ*ть значення n: ";
    cin >> n;
    cout << "\n";

    cout << "Введ*ть значення m (б*льше за n): ";
    cin >> m;
    cout << "\n";

    if (n >= m) {
        cout << "m має бути б*льше за n!" << endl;
        return 1;
    }

    int sum = 0;
    
    cout << "Кратн* 4 числа в*д " << n << " до " << m << ":" << endl;

    for (int i = n; i <= m; ++i) {
        if (i % 4 == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\n";
    cout << "\nСума кратних 4 чисел: " << sum << endl;
    return 0;
}
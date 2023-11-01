#include <iostream>
#include <iomanip>
#include <ctime>
#include <Windows.h>
using namespace std;

const int N = 25;

void Create(int a[], const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int a[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int SumOne(int a[], const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    return sum;
}

template <typename T>
T SumTwo(T a[], const int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    return sum;
}


int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand((unsigned)time(NULL));
    int a[N];
    int Low = -11;
    int High = 13;

    Create(a, N, Low, High);

    cout << "Початковий масив(1): ";
    Print(a, N);

    int sum = SumOne(a, N);
    cout << "Сума парних елементів(1): " << sum << endl;

    int b[N];
    int LowTwo = -11;
    int HighTwo = 13;

    Create(b, N, LowTwo, HighTwo);

    cout << "Початковий масив(2): ";
    Print(b, N);

    int sumTwo = SumTwo(b, N);
    cout << "Сума парних елементів(2): " << sumTwo << endl;

    return 0;
}

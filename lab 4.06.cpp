#include <iomanip>
#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

template <typename T1, typename T2>
void Create(T1* a, T2 size, T2 low, T2 high)
{
    for (T2 i = 0; i < size; i++) {
        a[i] = low + rand() % (high - low + 1);
    }
}

template <typename T1, typename T2>
void Print(T1* a, T2 size)
{
    for (T2 i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
}

template <typename T1, typename T2>
int Sum(T1* a, T2 size)
{
    int sum = 0;
    for (T2 i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    return sum;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 24;
    int a[n];

    int low = -50;
    int high = 15;

    Create(a, n, low, high);

    Print(a, n);

    int s = Sum(a, n);

    cout << endl;
    cout << "sum= " << s;

    return 0;
}



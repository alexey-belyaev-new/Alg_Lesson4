#include <iostream>

using namespace std;

void Bin(int n) {
    if (n < 2) {
        cout << n;
        return;
    }
    else {
        Bin(n / 2);
        int p = n % 2;
        cout<<p;
    }
}

int power(int a, int b) {
    int c = 0;
    if (b == 0) c = 1;
    else if (b == 1) c = a;
    else if (b % 2 == 0) c = power(a * a, b / 2);
    else c = a * power(a * a, b / 2);
    return c;
}

int main()
{
    int n;
    cout << "Enter number: "; cin >> n;
    cout << "Number " << n << " in binary system: ";
    Bin(n);
    cout << "\n";
    
    int num, pow;
    cout << "Enter number: "; cin >> num;
    cout << "Enter power: "; cin >> pow;
    cout << "Number " << num << " raised to a power " << pow << ": " << power(num, pow)<< "\n";
    
}

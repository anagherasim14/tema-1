#include <iostream>
using namespace std;


int din_10_in_b(int n, int b)
{
    int nb = 0;
    int p = 1;
    while (n != 0)
    {
        nb = nb + p * (n % b);
        p = p * 10;
        n = n / b;
    }

    return nb;
}

int din_b_in_10(int n, int b)
{
    int n10 = 0;
    int p = 1;
    while (n != 0)
    {
        n10 = n10 + p * (n % 10);
        n = n / 10;
        p = p * b;
    }
    return n10;
}
int din_b1_in_b2(int n, int b1, int b2)
{
    int x;
    x = din_b_in_10(n, b1);
    return din_10_in_b(x, b2);
}

int main()
{
    int x, b1,b2;
    cout << "x=";
    cin >> x;
    cout << "b1=";
    cin >> b1;
    cout << "b2=";
    cin >> b2;
    if (b1 < 26 && b2 < 26)
        cout << din_b1_in_b2(x, b1, b2);
    else
        cout << "eroare";
    
}

#include <iostream>
using namespace std;
int setbitsA(int a)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }
    return count;
}
int setbitsB(int b)
{

    int count = 0;
    while (b != 0)
    {
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cout << "enter the value of a and b" << endl;
    cin >> a >> b;
    int ans1 = setbitsA(a);
    cout << "total setbits of a is"<<" " << ans1 << endl;
    int ans2 = setbitsB(b);
    cout << "total setbits of b is"<<" " << ans2 << endl;
    cout << "total setbits of a and b is"<<" " << (ans1 + ans2) << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    int fn1,fn,fn2;
    cout << "MASUKAN N: "; cin >> n;
    fn1 = 0;
    fn2 = 1;
    fn = fn1 + fn2;
    cout << fn <<endl;
    for(int i = 0; i <= n ; ++i)
    {
        fn = fn1 + fn2;
        fn1 = fn2;
        fn2 = fn;
        cout << fn << endl;
    }
}

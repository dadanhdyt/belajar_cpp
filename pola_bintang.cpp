#include <iostream>
#define POLA '*'
using namespace std;
int  main(){
    int n;
    cout << "MASUKAN N: ";
    cin >> n;

    //pola 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << POLA;
        }
        cout << endl;

    }
    cout << endl;
    //pola 2
    for ( int i = 0; i < n ; i++ )
    {
        for(int j = n; j > i; --j)
        {
             cout << POLA;
        }
        cout << endl;
    }
    cout << endl;

    //pola ke 3
    for (int i = 0; i <n;i++)
    {
        for ( int j = 0; j < i;j++ )
        {
            cout << " ";
        }
        for (int k = n; k > i ; k-- )
        {
            cout << POLA;
        }
        cout << endl;
    }
    //pola ke 4
      for (int i = 0; i <n;i++)
        {
             for (int k = n; k > i ; k-- )
            {
                cout << ' ';
            }
            for ( int j = 0; j < i;j++ )
            {
                cout <<POLA;
            }

            cout << endl;
        }

}

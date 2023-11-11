#include <iostream>

int main(){
    int n;
    int f_n,f_n1,f_n2;

    std::cout << "MASUKAN N: ";
    std::cin >> n;
    std::cout << endl;
    f_n1 = 0;
    f_n2 = 1;
    f_n = f_n1 + f_n2;
    for ( int i = 1 ; i <= n; i++ )
    {
        f_n = f_n1 + f_n2;
        f_n2 = f_n2;
        f_n1 = f_n;
        std::cout << f_n << std::endl;
    }

   return 0;
}

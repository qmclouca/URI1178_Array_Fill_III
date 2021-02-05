#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double N[100], X=0;
    std::cin >> X;
    N[0] = X;
    for (int aux=1; aux<100; aux++){
        N[aux] = N[aux-1]/2;
    }
    for (int aux=0; aux<100; aux++) {
        std::cout << setprecision(4) << fixed << "N[" << aux << "] = " << N[aux] << std::endl;
    }
    return 0;
}

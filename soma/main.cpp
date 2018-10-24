#include <iostream>
#include "somando.h"
#include "subraindo.h"
using namespace std;

int main()
{
    somando a;
    subraindo b;

    cout << a.somandotudo(2,3) << endl;
    cout << b.subtraindotudo(3,2) << endl;
    return 0;
}

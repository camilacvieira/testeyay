#include "somando.h"

somando::somando()
{
    soma=0;
}

somando::~somando()
{
    //dtor
}

int somando::somandotudo(int a, int b){
    return a+b;
}


int somando::multiplicacao(int a, int b)
{
    return a*b;
}
int somando::subtraindo (int a, int b){
 return a-b;   
}

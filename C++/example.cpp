#include <iostream>
int main(){
    float n1 = 0, n2 = 0, result = 0;
    std::cout<<"\t\t\t\tDigite un numero: "; std::cin>>n1;
    std::cout<<"\t\t\t\tDigit otro numero: "; std::cin>>n2;

    result = n1 + n2;
    std::cout<<"\t\t\t\tLa suma es: "<<result<<std::endl;
    return 0;
}

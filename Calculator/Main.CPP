#include <iostream>
#include <conio.h>
using namespace std;

int main {
    int opc;
    float n1 = 0, n2 = 0, result = 0;

    do {
        cout<<"\t\nCalculador"<<endl;
        cout<<"1. S"<<endl;
        cout<<"2. R"<<endl;
        cout<<"3. M"<<endl;
        cout<<"4. D"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Select one opcion: ";
        cin>>opc;

        if(opc >= 1 && opc <= 4){
            cout<<"Enter a number: ";
            cin>>n1;
            cout<<"Enter other number: ";
            cin>>n2;
        }
        switch(opc) {
            case 1: result = n1 + n2; cout<<result; break;
            case 2: result = n1 - n2; cout<<result; break;
            case 3: result = n1 * n2; cout<<result; break;
            case 4: if(n2 == 0){
                cout<<"Error.";
            } else {
                result = n1 / n2; cout<<result; break;
            }
            case 5: break;
            default: cout<<"Please, enter a valid option.";
        }
    }
    getch();
    return 0;
}
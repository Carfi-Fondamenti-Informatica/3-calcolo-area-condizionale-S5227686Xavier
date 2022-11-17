#include <iostream>
using namespace std;

int main() {
   float a,b;
    int opzione;
    cout<<"inserire i valori a e b:"<<endl;
    cin>>a>>b;
    cout<<"inserire:"<<endl;
    cout<<" 0 per area triangolo"<<endl<<" 1 per area quadrato"<<endl<<" 2 per area rettangolo"<<endl;
    cin>>opzione;
    switch (opzione){
        case 0:
            cout<<a*b/2<<endl;
            break;
        case 1:
            cout<<a*a<<endl;
            break;
        case 2:
            cout<<a*b<<endl;
            break;
        default:
            cout<<"opzione non valida"<<endl;
            break;
    }
   return 0;
}

#include <iostream>
using namespace std;

// int main(){
//     int i;

//     cout<<"masukkan nilai: ";
//     cin>>i;
//     cout<<i<<endl;

//     return 0;
// }


int main(){
    float m, cm, inci;

    cout<<"Masukkan ukuran meter\t: ";
    cin>>m;

    cm=m*100;
    inci=m*100/2.54;

    cout<<"Ukuran dalam CM\t\t: "<<cm<<endl;
    cout<<"Ukuran dalam INCI\t: "<<inci<<endl;

}
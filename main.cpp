#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int n ;
    double total = 0.0 ;
    int a = 0;
    

    do{
        system("cls");
        a = 0;
        cout << "jumlah data :";
            cin >> n;
            double data[n];

            for (int i=0; i<n; i++){
                cout << "Data ke -" << (i+1) <<": ";
                cin >> data[i];
                total += data [i];
            }

            cout << "\nRata-Rata: "<< total / n ;
            cout << "\ntekan 1 kemudian enter jika ingin keluar\n";
            cin >> a;
        } while ( a != 1 );

    if (a == 1){
        system("pause");
    }





    return 0;
}
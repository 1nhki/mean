#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n ;
    static double total = 0.0 ;
    int a = 0;
    


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
    
    




    return 0;
}
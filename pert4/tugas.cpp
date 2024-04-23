#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>
using namespace std;



int main() 
{
     float x1, x2, x3;
     float x4;
     int menu;
     
     MenuUtama1:
     
     cout << "Masukkan angka pertama  : "<< endl;
    cin >> x1;

    cout << "Masukkan angka kedua     : "<< endl;
    cin >> x2;

    cout << "pilih menu operasi    \n1.(+)\n2.(-)\n3.(x)\n4.(/) : "<< endl;
    
    cout << "silahkan pilih menu     : ";
    cin >> menu;

    switch (menu)
	 {
        case 1:
           
        	x3 = x1 + x2;
        	cout << "hasil penjumlahan     : "<< x3 << endl;
            system("pause");
            system("cls");
            goto MenuUtama1;
           
            break;
        case 2:
        	
            x3 = x1 - x2;
            cout << "hasil pengurangan     : " << x3 << endl;
            
            system("pause");
            system("cls");
            goto MenuUtama1;
            break;
        case 3:
        	
        	x3 = x1 * x2;
        	cout << "hasil perkalian     : "<< x3 << endl;
            
            system("pause");
            system("cls");
            goto MenuUtama1;
            break;
        case 4:
        	
        	
        	x4 = x1 / x2;
        	
        	 if ( x2 <= 0   )
        	 {
        	 	cout << "angka kedua tidak boleh 0 atau kurang" << endl;
        	 	
			 }
			 else 
			 {
			 	cout << "hasil pembagian     : "<< fixed << setprecision(2) << x4 << endl;
			 }
        	 
        	system("pause");
            system("cls");
            goto MenuUtama1;
            break;
        case 5:
        	
            break;
        default:
            cout << "Invalid choice." << endl;
    }
    return 0;
}

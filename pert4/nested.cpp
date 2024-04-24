// #include <iostream>

// using namespace std;
// void postfix()
// {
//     int a = 1;
//      cout << a << "ini nilai awal i"<< endl;
//      cout << a++ << "ini nilai a++ postfix"<< endl;
//      cout << ++a << "ini nilai ++b prefix"<< endl;
// }

// void nestedif()
// {
//     int a = 5;

    

// }

// int main()
// {
//      cout << "iteration statement "<< endl;
//      cout << "penggunaan for "<< endl;

//      int a = 1;
//      int b = 1;
//     //  apa bedanya int a = 1 itu di luar for dengan di dalam for 

//     for( a; a <= 5; a++)// a++ postfix
//     {
//         for(b ; b <= a; ++b)// ++b prefix
//         {
//             cout << b << endl;
//         }
//     }

//     cout << endl;


//     cout << "ini postfix prefix "<< endl;
//     postfix();
//     cout << "ini nested if "<< endl;
//     nestedif();
//     cout << "ini nested if "<< endl;

    


//     return 0;

// }


#include <iostream>
using namespace std;

int main()
{
    int a = 0;

    while (a <= 9)
    {
        a++;
        cout << a << endl;
    }


    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        if ((ch - 'A') % 2 == 0) {
            cout << ch << " ";
        }
        
        else if ((ch - 'a') % 2 == 1) {
            cout << ch << " ";

        }

    }


    return 0;
}


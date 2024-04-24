#include <iostream>

using namespace std;


    void dowhhile(){

        cout << "penggunaan while break"<< endl;

         
        int a =0;
        int b =2;

        while (a<=1)
        {
            a = a + 1;
            if (a == 3)
            {
                cout << a<< endl;
                break ;
            }

            cout << "loping while berhenti "<< endl;

        }

        cout << "berhenti "<< endl;

    }

int main()
{
    //  cout << "iteration statement "<< endl;
    //  cout << "penggunaan for "<< endl;

    //  int a = 1;
    // //  apa bedanya int a = 1 itu di luar for dengan di dalam for 

    // for(int a; a <= 5; a++)
    // {
    // cout << a<< endl;
    // }

    dowhhile();


    return 0;

}


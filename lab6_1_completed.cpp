#include<iostream>
using namespace std;

int main(){

    int i = 0, count_Even = 0, count_Odd = 0;
    int x;
    

    while(i < 1) 
    {
        cout << "Enter an integer: ";
        cin >> x;

         if (x%2 == 0 and x !=0)
        {
            count_Even++ ;
        }
        else if (x%2 == 1 and x !=0)
        {
            count_Odd++ ;
        }
        else
        {
            i++;
        }
    }

    cout << "#Even numbers = " << count_Even<<"\n";
    cout << "#Odd numbers = " << count_Odd;
    return 0;
}

// File: CS112_A2_T3_S27_ 20230054_20231143_20231109.cpp
// Purpose: Description of your game

// --> Author 1: Mohammed Atef Abd EL-Kader Bayomi.    (ID:20231143)         (Section : S27)
// --> Email : mohamed45452020@gmail.com

// --> Author 2: Esraa Emary Abd Elsalam.             (ID:20230054)         (Section : S27)
// --> Email : esraaemary33@gmail.com

// --> Author 3: Aly El-Deen Yasser Aly.            (ID:20231109)         (Section : S27)
// --> Email : aibakgaming747@gmail.com

// ============================================================================================================================================================================== //

#include <bits/stdc++.h>
using namespace std;

// Check the validity of the entered numbers.
void validity(){


}

// Function for Rational Number Calculator.
string R_N_C(){



}

// ===========================================================================>> Main Application <<=========================================================================== //
int main(){
    while (true)
    {
        cout << "# ===== Welcome To Our Application ===== #\nWhat do you want to do?\n [1] Rational Number Calculator.\n [2] Exit Program.\nEnter Your Choice: ";
        int choice;
        cin >> choice;
        while ((cin.fail()) || (choice!= 1 && choice!= 2)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input." << endl;
            cout << "Please enter a valid choice: ";
            cin >> choice;
        }  
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        if(choice == 1){
            






            int choice2;
            cout << "Do you want to continue?\n [1] Yes.\n [2] No.\nEnter Your Choice: ";
            cin >> choice2;
            while ((cin.fail())||(choice!= 1 && choice!= 2)){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input." << endl;
                cout << "Please enter a valid choice: ";
                cin >> choice;
            }  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if(choice2 == 1)
                continue;
            else if(choice2 == 2)
                break;
        }
        if(choice == 2)
            break;
    }
    cout << "Thanks for using our application ...." << endl;
    return 0;
}

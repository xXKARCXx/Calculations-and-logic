#include <iostream>
#include <string>
using namespace std;



void TimeConverter (){


}

void converter_menu ()
{
    cout << "Option 1" << endl;
    cout << "Option 2" << endl;
    cout << "Exit" << endl;
}

void min_secCon (){
    int sec = 60;
    int min ;
    cout << "Chose the amount of minutes you want to change to seconds: ";
    cin >> min;
    cout << "amout of seconds: " << (min * sec ) << endl;
}

void hour_secCon (){
int sec;
int minC = 3600;
int hour;
cout << "type the amount of hours you want to conveter to seconds: ";
cin >> hour;
cout << "This amount of secound in this amount of hours: " << (hour * minC) << endl;
}

int main(){
    int choice;
    while (true)
    {
        converter_menu();

        cout << "Enter Option 1 or 2 or 3" << endl;
        cout<< "<------------------------------------------------------->" << endl;
        cin >> choice;

        if (choice == 3){
            cout << "Exited. Goodbye Now!" << endl;
            cout << "                                              " << endl;
            break;
        }
        switch (choice)
        {
        case 1:
            min_secCon();
            cout << "                                              " << endl;
            break;
        case 2:
            hour_secCon();
            cout << "                                              " << endl;
            break;
        default:
        cout << "Try again!" << endl;
        cout << "                                              " << endl;
        break;
        }

    }
    
    return 0;
}
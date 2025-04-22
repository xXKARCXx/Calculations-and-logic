#include <iostream>
#include <string>
#include <vector>
using namespace std;


  void twoSum (){
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int target = 5;
    
    for (int i = 1; i < arr.size(); i++){
        for (int j = 0; j < arr.size(); j++){
            if (arr[i] + arr[j] == target){
                cout << "The two numbers are: " << arr[i] << " and " << arr[j] << endl;
            }
        }
    }
  }


// void TimeConverter (){;
// }

void converter_menu ()
{
    cout << "                 1) Minutes to Seconds" << endl;
    cout << endl;
    cout << "                 2) Hours to seconds" << endl;
    cout << endl;
    cout << "                       3) Exit" << endl;
}

void min_secCon (){
    int sec = 60;
    int min ;
    cout << "Chose the amount of minutes you want to change to seconds: ";
    cout << endl;
    cin >> min;
    cout << endl;
    cout << "amout of seconds: " << (min * sec ) << endl;
}

void hour_secCon (){
int sec;
int minC = 3600;
int hour;
cout << "type the amount of hours you want to conveter to seconds: ";
cout << endl;
cin >> hour;
cout << endl;
cout << "This amount of secound in this amount of hours: " << (hour * minC) << endl;
}

int main(){
    // int choice;
    // cout << "                                                   " << endl;
    // cout << "                 Choose Option 1 or 2 or 3" << endl;
    // cout<< "<------------------------------------------------------->" << endl;
    // while (true)
    // {
    //     converter_menu();
    //     cout << endl;
    //     cout << "                Enter your choice: ";
    //     cin >> choice;
    //     cout << endl;
    //     cout << "              You have picked choice "<< choice << endl;

    //     if (choice == 3){
    //         cout << endl;
    //         cout << "                Exited. Goodbye Now!" << endl;
    //         cout << "                                              " << endl;
    //         break;
    //     }
    //     switch (choice)
    //     {
    //     case 1:
    //         min_secCon();
    //         cout << "                                              " << endl;
    //         break;
    //     case 2:
    //         hour_secCon();
    //         cout << "                                              " << endl;
    //         break;
    //     default:
    //     cout << "Try again!" << endl;
    //     cout << "                                              " << endl;
    //     break;
    //     }

    // }

    twoSum();
    
    return 0;
}
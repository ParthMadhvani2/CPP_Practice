#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forget();

int main(){
    int c;
    cout << "\t\t\t_________________________________________________________________\n\n\n";
    cout << "\t\t\t                    welcome to the the login page                \n\n\n";
    cout << "\t\t\t_________________________________Menu____________________________\n\n\n";
    cout << "                                                  \n\n\n";
    cout << "\t| Press 1 to LOGIN                           |"<< endl;
    cout << "\t| Press 2 to REGISTER                        |"<< endl;
    cout << "\t| Press 3 to if you forget your password     |"<< endl;
    cout << "\t| Press 4 to EXIT                            |"<< endl;
    cout << "\n\t\t\t Please enter your choice : "<< endl;
    cin >> c;
    cout << endl;

    switch(c){
        case 1:
            login();
            break;

        case 2:
            registration();
            break;

        case 3:
            forget();
            break;

        case 4:
            cout << "\t\t\t     Thank You! \n\n";
            break;
        
        default:
            system("clear");
            cout << "\t\t\t Please select from the options given above. \n" << endl;
            main();
    }
}

void login(){
    int count;
    string userId, password, id, pass;
    system("clear");
    cout << "\t\t\t Please enter the user name and password : " << endl;
    cout << "\t\t\t USERNAME ";
    cin >> userId;
    cout << "\t\t\t PASSWORD ";
    cin >> password;
    
    // this ifstream file would check that the username and the password entered exsists in or records or not
    ifstream input("records.txt");

    while(input >> id >> pass)
    {
        if(id == userId && pass == password){
            count = 1;
            system("clear");

        }
    }
    input.close();

    if(count == 1){
        cout << userId << "\n Your LOGIN is successfull \n Thanks for logging in ! \n" << endl;
        main();
    }else{
        cout << "\n LOGIN ERROR \n Please check your username and password \n " << endl;
    }
}

void registration()
{
    string ruserId, rpassword, rid, rpass;
    system("clear");
    cout << "\t\t\t Enter the usrename : ";
    cin >> ruserId;
    cout << "\t\t\t Enter the password : ";
    cin >> rpassword;

    // we want to write inside the file as user wants to register thus we use ofstream file instead of ifstream
    ofstream f1("records.txt, ios::app");
    f1 << ruserId << ' ' << rpassword << endl;   
    system("clear");
    cout << "\n\t\t\t Registration is successfull! \n";
    main();

}

void forget(){
    int option;
    system("clear");
    cout << "\t\t\t You forget the the password? No worries \n";
    cout << "Press 1 to search your id by username "<< endl;
    cout << "Press 2 to go back to main menu "<< endl;
    cout << "\t\t\t Enter your choice : ";
    cin >> option;

    switch(option){

        case 1:
        {
            int count = 0;
            string suserId, sId, spass;
            cout << "\n\t\t\t Enter the username which you remembered : ";
            cin >> suserId;

            //check if the entered username exsists or not for that use ifstream file
            ifstream f2("records.txt");
            while(f2>>sId>>spass){
                if(sId==suserId)
                {
                    count=1;
                }
            }
            f2.close();
            if(count == 1){
                cout << "\n\n Your account is found! \n";
                cout << "\n\n Your password is : "<< spass;
                main();
            }else{
                cout << "\n\t Sorry! your account is not found! \n";
                main();

            }
            break;
        }
        case 2:
        {
            main();

        }
        default:
            cout << "\t\t\t Wrong choice! Please try again "<< endl;
            forget();
    }
}
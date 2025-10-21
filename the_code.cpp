#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;

double bala ;
double total;


void withdrawal(){
    double u;

    cout << "=====> Welcome in withdarawal panel <======\n";
    cout << " \n";
    cout << "How much UNIT you wanna to withdarawal : ";
    cin >> u;
    total = bala - u ;

    sleep(1);

    cout << "OK, your " << u << " UNITS was withdrawn ! \n"<< endl;

    cout << " [ The remaining balance in your account : " << total<< "]\n";
    sleep(3);
    system("clear");

    cout << "=====================================================\n";
    cout << "=========---(^_^) < Good Night > (^_^)-----========== \n";
    cout << "=====================================================\n";

    sleep(1);
    system("clear");
}
void deposit(){
    bala = total;


    cout << "=====> Welcome in Deposit panel <======\n";
    cout << " \n";

    cout << "HOW much coins you will depositing : ";
    cin >> bala;
    cout << "OK, your " << bala << " UNITS wath added !" << endl;
}
void balance(){
    bala = total;
    cout << "=====> Welcome in Deposit panel <======\n";
    cout << "\n";

    cout << "hello sir, your balance is : "<< total << endl;
}


int main()
{
    bala = total;
    int l;
    string n;
    char o;

    cout << "========</ test ATM sysytem \>==========\n";
    cout <<"  \n";

    cout << "Welcome, enter your name (first, last) : ";
    cin >> n;
    cout << "Marhaba sir." << n << endl;

    sleep(1);

    cout << "OK, enter your last three num in your card : ";
    cin >> l ;

    sleep(1);
    system("clear");

    while (true){
    sleep(2);
    system("clear");
    cout << "  \n";
    cout << "1-Deposit \n";
    cout << "2-Withdrawal \n";
    cout << "3-Show your Balance  \n4-EXIT \n";
    cout << "what is opreation you want (1 , 2 , 3 , 4): ";
    cin >> o;

    system("clear");

    if (o == '1'){deposit();}
        else if( o == '2'){withdrawal();}
        else if( o == '3'){balance();}
        else if ( o == '4'){break;}
            else {cout << "Worng Entery , try again !\n"; return 1; }

    }
    return 0;
}

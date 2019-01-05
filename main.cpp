#include <QCoreApplication>

#include <iostream>
using namespace std;

#include <time.h>

int main(int argc, char *argv[])
{
    QCoreApplication exe(argc, argv);
    srand((int)time(0));
    int i = 0;
    int a,b;
    cout<<"Random multiplication exercise"<<endl;
    cout<<"Please enter the number of times you want to practice"<<endl;
    cin >> i;
    cin.get();
    while(i--){
        a = rand()%10000;
        b = rand()%10000;
        cout << a <<"*" <<b<<"=";
        cin.get();
        cout << a <<"*" <<b<<"="<<a*b<<endl;
    }

    return exe.exec();
}

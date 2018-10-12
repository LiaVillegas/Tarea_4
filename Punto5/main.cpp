#include "functions.cpp"


struct Timer {
    int hours;
    int minutes;
    int seconds;
};

int main(){

    Timer temp;

    cout << "Enter Hours: " << endl;
    cin >> temp.hours;
    cout << "Enter Minutes: " << endl;
    cin >> temp.minutes;
    cout << "Enter Seconds: " << endl;
    cin >> temp.seconds;


    Temporizador(temp.hours,temp.minutes, temp.seconds);

    Final();

    return 0;

}

#include <iostream>
using namespace std; 
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
    friend class user;
public:
    void A(void); //setter function
    void Z(void); //getter function
    void add(Time T1,Time T2); //adds two times
};
 
void Time::A(void) //this method takes values from user
{
    cout << "Enter time" << endl;
    cout << "Hours = ";    cin>>hours;
    cout << "Minutes = ";  cin>>minutes;
    cout << "Seconds = ";  cin>>seconds;
}
 
void Time::Z(void) //this method print time 
{
    cout << endl;
    cout << "Total Time = ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
 
void Time::add(Time T1,Time T2) //this method add two times
{
     
    this->seconds=T1.seconds+T2.seconds;
    this->minutes=T1.minutes+T2.minutes + this->seconds/60;;
    this->hours= T1.hours+T2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}
 
 
int main()
{
    Time T1,T2,T3;
    T1.A();
    T2.A();
    T3.add(T1,T2); //prints sum of two time.
    T3.Z();
}


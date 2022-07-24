#include<iostream>
#include<conio.h>

using namespace std;

class date{
private:
 int month, day, year;
 char c;
public:
 void setDate(){
  cout << "Enter Date In This Format dd/mm/yyyy" << endl;
  cin >> day>>c>>month>>c>>year;
 }
 void getDate(){
  cout << "Date Entered Is" << endl;
  cout << day << c << month << c << year << endl;
 }
};

int main(){

date d1;
d1.setDate();
d1.getDate();
}

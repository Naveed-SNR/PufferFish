#include<iostream>
using namespace std;

class Distance {
 int feets;
 float inches;

 public:

    Distance() : feets (0), inches(0) {}
    Distance(int ft, float in) : feets (ft), inches (in){}
    void getdist()
    {
        cout<< "Enter feets: ";
        cin>>feets;
        cout<<endl << "Enter Inches: ";
        cin>> inches;
    }
    void showdist ()
    {
        cout<<endl<<feets <<"\'-"<<inches<<"\"";
    }
    void adddist(Distance, Distance);
};

void Distance:: adddist(Distance d1, Distance d3)
{
    inches = d1.inches + d3.inches;
    if (inches>=12)
    {
        inches -=12;
        feets +=1;
    }
    feets = feets+d1.feets+d3.feets;
}

int main(){

    Distance dist1, dist2;
    Distance dist3(7,5);
    dist1.getdist();
    dist2.adddist(dist1 , dist3);
    cout<<"Length:";
    dist2.showdist();
return 0;

}

#include <iostream>
using namespace std;

class angle
{
    private:

        int degree;
        float minutes;
        char direction;
    
    public:

        angle(int a, float b, char c)
         {
            degree=a;
            minutes=b;
            direction=c;
       
            cout<<"constructor values assigned"<<endl;
        }

        void setvalue(int a, float b, char c)
        {
            degree=a;
            minutes=b;
            direction=c;
       
            cout<<"values assigned"<<endl;
        }

        void dispvalue()
        {
            cout<< degree<< " \xF8 "<< minutes<<" ' "<< direction;
        }
};

int main(void)
{
    int i,  deg, mood = 1;
    float min;
    char dir;
   
    angle a1(149, 34.8, 'S');
    a1.dispvalue();

    while(mood == 1)
    {
        cout<< "\nEnter value: \n ";
        cin>> deg>> min>> dir;
       
        a1.setvalue(deg, min, dir);
        a1.dispvalue();
       
        cout<<"\n  Enter '1' to enter another, else enter anything else"<< endl;
        cin>> mood;
    }
    
    cout<<"Bei ma keh";
    return 0;
}
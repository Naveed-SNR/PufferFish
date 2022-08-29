#include <iostream>
using namespace std;

class Counter
{

private:
    
    unsigned int count;

public:
    
    Counter();

    void increment()
    {
        count++;
    }
    
    int getcount()
    {
        return count;
    }   
};

 Counter:: Counter(): count(0)
{
    /*Function Body*/
}

int main(void)
{
    Counter c1, c2;
   
    cout<< "\n"<< c1.getcount();
    cout<< "\n"<< c2.getcount();

    c1.increment();
    c2.increment();

    cout<< "\n"<< c1.getcount();
    cout<< "\n"<< c2.getcount();

    return 0;
}
#include <iostream>
using namespace std;

class smpl
{
  private:
    static int count;
    int num;

  public:
    smpl()
    {
      num = ++count;
    }

    void dispno()
    {
      cout << "I am object " << num << endl;
    }
};


int smpl::count = 0;

int main()
{
  smpl obj1;
  smpl obj2;
  smpl obj3;
  obj1.dispno();
  obj2.dispno();
  obj3.dispno();
}

#include <iostream>
using namespace std;
#include <process.h>

class Stack
{
    protected:
    
    enum {MAX = 3};
    int st[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int var)
    {
        st[++top] = var;
    }
    int pop()
    {
        return st[top--];
    }
};

class Stack2: public Stack
{
    public:
        
        void push(int var)
        {
            if(top >= MAX -1 )
                cout << "\nError: Stack is full..."; exit(1);
         Stack::push(var);
        }
    
        int pop()
        {
            if(top < 0)
                cout << "\nError: Stack is empty..."; exit(1);
            return Stack:: pop();
        }
};

int main(void)
{
    Stack2 s1;

    s1.push(11);
    s1.push(22);
    s1.push(33);

    cout << endl << s1.pop();
    cout << endl << s1.pop();
    cout << endl << s1.pop();
    cout << endl << s1.pop();
    cout << endl;

    return 0;
}




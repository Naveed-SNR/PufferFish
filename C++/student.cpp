#include<iostream>
#include<fstream>
using namespace std;

class Student 
{
    public:
            int rollno;
            string name;
            int age;
            int semester;
            string contact;
    public:
        
        void getdata()
        {  
            cout << "\nEnter Roll Number: ";   cin >> rollno;
            cout << "\nEnter Name: "; cin >> name;
            cout << "\nEnter Age: "; cin >> age;
            cout << "\nEnter Semester: "; cin >> semester;
            cout << "\nEnter Contact: "; cin >> contact;

            cout << endl << endl;
        }

         void display()
        {
            cout << "\nRoll Number: "<< rollno;
            cout << "\nName: "<< name;
            cout << "\nAge: "<< age;
            cout << "\nSemester: " << semester;
            cout << "\nContact: " << contact;
        }
        int chk()
        {
            return rollno;
        }
};

int main(void)
{
    Student s;
    int n, r;
    char found = 'f';

    cout << "Enter the number of student records: "; cin >> n;
    cout<< endl;

    fstream file("student.dat", ios::out | ios::app | ios::binary);
    
    if(!file) 
    {
        cout << "Cannot open file! \n" << endl;
        return 1;
    }

    for(int i = 1; i <= n; i++)
    {
        cout << "Enter details for student "<< i <<":"<< endl;
        s.getdata();
        file.write((char*) &s, sizeof(s));
        cout << "Record added!"<< endl<< endl; 
    }

    cout << "Enter Roll.no of the student to get details: "; cin >> r;

    file.seekg(0);
    while(!file.eof())
    {
       file.read((char *) &s, sizeof(s));
       if(s.chk() == r)
       {
          s.display();
          found = 't';
          break;
       }
    }
    if(found == 'f')
       cout<<"\nRecord not found\n";

    file.close();
    return 0;
}
    
   

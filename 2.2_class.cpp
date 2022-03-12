#include<iostream>
using namespace std;
class student
{   
    public:
    int  roll_no;
    char std_class[5];
    char division[1];
    char name[10];
    void read()
    {   
        cout<<"enter the name of student:"<<endl;
        cin>>name[10];
        cout<<"enter the roll no of student:"<<endl;
        cin>>roll_no;
        cout<<"enter the division of student:"<<endl;
        cin>>division;
        cout<<"enter the class of student:"<<endl;
        cin>>std_class;
    }

    void display()
    {
        cout<<"the name of student is :"<<name<<endl;
        cout<<"the roll no of student is :"<<roll_no<<endl;
        cout<<"the class of student is :"<<std_class<<endl;
        cout<<"the division of student is :"<<division<<endl;
    }
};

 int main()
{
    class student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"new";
        s[i].read();
        s[i].display();
        cout<<"\n";
    }
    return 0;
}
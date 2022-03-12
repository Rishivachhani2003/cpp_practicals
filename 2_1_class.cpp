#include<iostream>
using namespace std;

class College_details
{
   public : char college_name[10];
        char college_code[10];
        char department[5];
        int intake;
    
    // public details()
    // {
    //     char college_name[10];
    //     char college_code[10];
    //     char department[5];
    //     int intake;
    // }
};

int main()
{
    College_details rishi;
    // rishi a;
    // struct college_details a;
    cout<<"+++++Enter the College information+++++\n"<<endl;
    cout<<"Name of the college :"<<endl;
    cin>>rishi.college_name;
    cout<<"College Code :"<<endl;
    cin>>rishi.college_code;
    cout<<"Department :"<<endl;
    cin>>rishi.department;
    cout<<"department In-take:"<<endl;
    cin>>rishi.intake;

    cout<<"********* College Information ********* \n "<<endl;
    cout<<"Name of the college :"<<rishi.college_name<<endl;
    cout<<"Name of the college :"<<rishi.college_code<<endl;
    cout<<"Name of the college :"<<rishi.department<<endl;
    cout<<"Name of the college :"<<rishi.intake<<endl;
    
    return 0;
}
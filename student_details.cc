// WAP to create a class for student to get and print details of a student using member function.
#include<iostream>
using namespace std;
#define MAX 10
class student
{
    private:  
    char name[30];
    int roll_no;
    int total;
    float perc;
    public:
    void get_detalis(void);  
    void show_detalis(void);
};
void student::get_detalis(void)
{
    cout<<"enter name:-";
    cin>>name;
    cout<<"Enter roll_no:-";
    cin>>roll_no;
    cout<<"enter total marks outof 500:-";
    cin>>total;
    perc=(float)total/500*100;

}
void student::show_detalis(void)
{
    cout<<"student details:-\n";
    cout<<"\nName:-"<<name<<"\nroll_no:-"<<roll_no<<"\ntotal:-"<<total<<"\npercentage:-"<<perc;
} 
int main()
{
    student std[MAX];
    int n,loop;
    cout<<"enter total number of students:-";
    cin>>n;
    for(loop=0;loop<n;loop++)
    {
       cout<<"enter details of student"<<loop+1<<":-\n";
       std[loop].get_detalis();
    }
cout<<endl;
for(loop=0;loop<n;loop++)
{
    cout<<"detalis of student"<<(loop+1)<<":\n";
     std[loop].show_detalis();
}
    return 0;
}



#include <iostream>
using namespace std;
 
class student
{
    private:
        char  name[30];
        int   universityID;
        int   total;
        int marke1 , marke2, marke3;
        int percent; 
    public:
        //member function to get student's details
        void getDetails(void);
        //member function to print student's details
        void putDetails(void);
        //member function to print Percentage of successful students
        void PercentageSuccessfulStudents();
};

void student :: getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter University ID: ";
    cin >> universityID;
    cout<<"Enter marke 1 (The weight of the mark 1 of 25) = ";
    cin>>marke1;
    cout<<"Enter marke 2 (The weight of the mark 2 of 25) = ";
    cin>>marke2;
    cout<<"Enter marke 3 (The weight of the  mark 3 of 50) = ";
    cin>>marke3;
    total=marke1+marke2+marke3; 
    
    int avg= total/3; 
   
  // cout<<"The  average = "<< avg<<endl;
    cout<<endl;
    percent=total/100*100;
   // cout<<"percentage"<<percent<<endl;
 
    cout<<"---------------------------------------------"<<endl;
}
float avg(int id,int m1,int m2,int m3){ 
    float avg;
    cout<<"Enter id for sudent "<<endl;
    cin>>id; 
    avg=m1+m2,m3/3;
    cout <<"the avg "<<avg<<endl;
    
}
//member function definition, outside of the class
void student:: PercentageSuccessfulStudents(){
    int StudentTest, StudentSuccessful;
    float PercentageSuccessfulStudents;
    cout<<"Enter The number of students who took the test"<<endl;
    cin>>StudentTest;
    cout<<"Enter The number of successful students"<<endl;
    cin>>StudentSuccessful;
    PercentageSuccessfulStudents=(StudentTest/StudentSuccessful)*100;
    cout<<"Percentage of successful students "<<PercentageSuccessfulStudents<<endl;
    
}
 
//member function definition, outside of the class
void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",University ID:" << universityID << ",Total:" << total <<",  Average "<<avg<< ",Percentage:" << percent<<endl;
}
 
int main()
{
    student std[10];
    student stu;
    
    int n,loop;
   
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
    }
     
    cout << endl;
     
    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
    }
    cout<<endl;
    stu.PercentageSuccessfulStudents();
    
    return 0;
}


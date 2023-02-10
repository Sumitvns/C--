#include <iostream>

using namespace std;

class Student{
    int roll_number, rank;
    char student_name[50], Address[50];

    public:
        void read_data(int count){
            cout<<"\n\n--------- Enter student "<<count+1<<" information ---------\n";
            cout<<"Name of the Student (Max. 50 characters only): ";
            cin>>student_name;
            cout<<"Roll Number: ";
            cin>>roll_number;
            cout<<"Rank: ";
            cin>>rank;
            cout<<"Address: ";
            cin>>Address;
            cout<<"\nStudent information with roll number "<<roll_number<<" has saved!";
        }

        void display_data(int count){
            cout<<"\n\n******** Student "<<count+1<<" Information ********";
            cout<<"\nName of the Student: "<<student_name;
            cout<<"\nRoll Number: "<<roll_number;
            cout<<"\nRank : "<<rank;
            cout<<"\nAddress: "<<Address;
            cout<<"\n---------------------------------------\n";
        }
};

int main(){
    Student stud[3];
    int i;
    for(i=0; i<3; i++)
        stud[i].read_data(i);
    cout<<"\n\n+++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"The information of 3 students has been saved.";
    cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++\n";
    for(i=0; i<3; i++)
        stud[i].display_data(i);
    return 0;
}
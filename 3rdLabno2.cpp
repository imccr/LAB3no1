#include<iostream>
using namespace std;

int *roll=new int ;
char *name = new char [15];


void readRollandName(){
    cout<<"Enter Your Name " ;
    cin>>name;
    cout<<"Enter Your Rollno ";
    cin>>*roll;
}

void deallocation(){
delete roll;
delete [] name ;
}
void printRollandName(){
    cout<<endl<<"Name : " <<name ;
    cout<<endl<< "Rollno : "<<*roll;
}
int main (){
    readRollandName();
    cout<<endl<<"Memory allocated dynamically for name and rollno: ";
    cout<<endl<<"Value of Name and roll before Deallocation ";
    printRollandName();
    deallocation();
    cout<<endl<<"After Deallocation : ";
    printRollandName();
    return 0; 
}
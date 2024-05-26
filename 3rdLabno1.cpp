#include<iostream>
#include<cmath>
using namespace std;
const double pi =3.1415;
double calculatearea(int length =10){
    return 6*length*length;
}
double calculatearea(double radius){
    return pi*radius*radius;
}
double calculatearea(double length,double breadth)
{
return length * breadth;
}
int main (){
int a;


do{
  cout<<"Enter The following Number to calculate area"<<endl;
  cout<<"1. for cube "<<endl;
  cout<<"2. for circle"<<endl;
  cout<<"3. for rectangle "<<endl;
  cout<<"4. to exist "<<endl;
  cout<<"Enter your choice ";
  cin>>a;

  switch (a)
  {
  case 1:
  int length ;
     cout<<"Enter Length of Cube(Default is 10 )"<<endl;
     cin>>length;
     cout<<"The area of the Cube is  "<<calculatearea(length)<<endl;
    break;
   case 2:
   double radius;
   cout<<"Enter the radius of the circle "<<endl;
   cin>>radius;
   cout<<"The area of the Circle is " <<calculatearea(radius )<<endl;
   case 3:
   double len,breadth;
   cout<<"Enter the length and breadth of the rectangle "<< calculatearea(len,breadth)<<endl;
    case 4: {
                cout << "Exiting program..." << endl;
                break;
            }
    default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while (a!= 4);
 return 0;
}

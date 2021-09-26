//C++ program to check if a person is eligible to vote or not
#include<iostream>
using namespace std;

int main()
{
     int age;
     cout<<"Enter your age:";
     cin>>age;
     
     if (age>=18)
     {
                  cout<< "/n You are eligible to vote";
     }
      
      else 
      {
           cout<< "/n You are not eligible to vote";
      }
return 0;
}

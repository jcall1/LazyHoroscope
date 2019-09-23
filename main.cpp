//Authors: Justin Call
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstname;
  string lastname;

  //get user input
  cout<<"What is your first name?"<<endl;
  cin>>firstname;
  cout<<"What is your last name?"<<endl;
  cin>>lastname;
  cout<<"Welcome, "<<firstname[0]<<"."<<lastname[0]<<", here is your fortune..."<<endl;

  //tell fortune

  return 0;
}

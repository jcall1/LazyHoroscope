//Authors: Justin Call
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstname;
  string lastname;
  int lucky;

  //get user input
  cout<<"What is your first name?"<<endl;
  cin>>firstname;
  cout<<"What is your last name?"<<endl;
  cin>>lastname;
  cout<<"Welcome, "<<firstname.at(0)<<"."<<lastname.at(0)<<"., here is your fortune..."<<endl;

  //tell fortune
  lucky = firstname.length();
  cout<<"your lucky number is "<<lucky<<endl;

  return 0;
}

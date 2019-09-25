//Authors: Justin Call
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
  //declare variables
  string firstname;
  string lastname;
  char firstinitial;
  char lastinitial;
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

  firstinitial = toupper(firstname.at(0));
  lastinitial = toupper(lastname.at(lastname.length()-1));

  if(firstinitial == 'A' || firstinitial == 'E' || firstinitial == 'I' || firstinitial == 'O' || firstinitial == 'U'){
  cout<<"you are destined to be famous!"<<endl;
  }
  else{
  cout<<"you should keep a low profile"<<endl;
  }

  if(lastinitial == 'A' || lastinitial == 'E' || lastinitial == 'I' || lastinitial == 'O' || lastinitial == 'U'){
  cout<<"you have already met your true love"<<endl;
  }

  cout<<"have a good day!"<<endl;

  return 0;
}

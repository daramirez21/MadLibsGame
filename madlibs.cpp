//Authors: David Ramirez 
#include <iostream>
#include <string>

using namespace std;

int main()
{

string name;
cout<< "Enter a first name:" << endl;
cin>>name;
string number;
cout<< "Enter a whole number:" << endl;
cin>>number;
string adjective;
cout<< "Enter an adjective:" << endl;
cin>>adjective;
string drink;
cout<< "Enter the name of a drink:" << endl;
cin>>drink;
string decimal;
cout<< "Enter a decimal number:" << endl;
cin>>decimal;
cout<<endl<<endl;

cout<< "Your mad libs story:"<<endl;



cout<<"On the very first day of school "<<name<<" was given "<<number<<" assignments. "<<name<<" did "<<adjective<<" on every single one all while there was a spilled "<<drink<<" on the chair. In the end all of those assignments were graded and "<<name<<"'s total was "<<decimal<<"%"<<endl;




  return 0;
}

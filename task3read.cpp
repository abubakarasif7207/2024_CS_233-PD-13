#include<iostream>
#include<fstream>
using namespace std;
void get_birthday(string name,int age);

main()
{
string name;
int age;
get_birthday( name, age);

  
}



void get_birthday(string name,int age)
{
   fstream file;
   file.open("text.txt",ios::in);
   while(!file.eof())
{
  getline(file,name);
 file>>age;
 if(age%2==0)
 {
    cout<<"################"<<endl;
    cout<<"# "<<age<<" HB "<<name<<"! "<<age<<" #"<<endl;
    cout<<"################"<<endl;
 }
 else{
    cout<<"******************"<<endl;
    cout<<"* "<<age<<" HB "<<name<<"! "<<age<<" *"<<endl;
    cout<<"*******************"<<endl;
 }
}
file.close();
}
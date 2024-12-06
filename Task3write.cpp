#include<iostream>
#include<fstream>

using namespace std;
void data_write(string name,int age);
int main()
{
string name;
int age;
cout<<"Enter the name: ";
cin>>name;
cout<<"Enter the age:";
cin>>age;
data_write( name, age);
}
void data_write(string name,int age)
{
fstream file;
file.open("text.txt",ios::out);
file<<name<<endl;
file<<age;
file.close();

}
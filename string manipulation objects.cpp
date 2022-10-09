//string manipulation function
//string s1("") or string s1="" they are same no error
#include<iostream>
#include<string.h>
using namespace std;
main()
{
string s1("Quick! Send for count");
string s2("Lord");
string s3("Don't");

//erase function
s1.erase(0,7); //Send for count
cout<<s1<<endl;
//replace function
s1.replace(9,5,s2); //send for Lord
cout<<s1<<endl;
s1.replace(0,1," s");
//insert function
s1.insert(0, s3); //don't send for Lord
cout<<s1<<endl;
//append
s1.append(3,'!'); //Don't send for Lord
cout<<s1<<endl;

}

// This is a program file to find the size of a string using size()
// function

#include <iostream>
using namespace std;
int main(){
	string name = "My name is Abhinav asthana and i am a college sophomore";
	double size = name.size();
	cout<<"size: "<<size<<endl;

	// Now printing the max size a string variable can store
	double max = name.max_size();
	cout<<"Max size: "<<max<<endl;
	cout<<name<<endl;

	// Finding a particular word in a string
	return 0;
}

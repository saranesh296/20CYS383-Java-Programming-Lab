#include <iostream> 
using namespace std; 

class Parent 
{ 
	public: 
	int id_p; 
}; 

class Child : public Parent 
{ 
	public: 
	int id_c; 
}; 

int main() 
{ 	
	Child obj1; 
        cin >> obj1.id_c;
        cin >> obj1.id_p;
	cout << "Child id is " << obj1.id_c << endl; 
	cout << "Parent id is " << obj1.id_p << endl; 
	return 0; 
}

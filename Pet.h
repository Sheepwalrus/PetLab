#include <string>
using namespace std;
class Pet 
{
public:
	string name;
	int age;
	Person *owner;
	virtual void action()
	{
		//Virtual Function
	}
};



#include <string>
using namespace std;
class Plant
{
public: 
	int greenness;
};
class Fern: public Plant
{
public:
	void action();
};
class Cactus: public Plant
{
public:
	void action();
};


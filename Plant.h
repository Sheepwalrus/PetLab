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
	void fernicate();
};
class Cactus: public Plant
{
public:
	void poke();
};


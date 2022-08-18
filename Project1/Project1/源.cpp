#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int g_a;//g_--global

typedef struct teacher
{

}tecaher_t;//_t--typedef

namespace spaceA{
	int g_b;
}

namespace spaceB
{
	int a = 10;

	namespace spaceC {
		struct teacher
		{
			int id;
			char name[64];
		};
	}
}

int main(void)
{
	//spaceA::g_b = 10;
	//cout << spaceA::g_b << endl;
	//using spaceA::g_b;
	using namespace spaceA;
	cout << g_b << endl;

	using spaceB::spaceC::teacher;
	teacher _t{};

	spaceB::spaceC::teacher _t1;

	using namespace spaceB::spaceC;
	struct teacher t1;

	return 0;
}
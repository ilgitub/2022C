#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Teacher
{
public:
	Teacher(const int id, const char *name)
	{
		m_id = id;
		int len = strlen(name);
		m_name = (char*)malloc(len + 1);
		strcpy(m_name,name);
	}
	void PrintT()
	{
		cout << "id= " << m_id << ",name= " << m_name << endl;
	}
	~Teacher()
	{
		cout << "~Teacher()..." << endl;
		if (m_name!=NULL){
			free(m_name);
			m_name = NULL;
		}
	}
private:
	int m_id;
	char *m_name;
};

int main(void)
{
	Teacher t1(1,"zhang3");
	t1.PrintT();

	return 0;
}
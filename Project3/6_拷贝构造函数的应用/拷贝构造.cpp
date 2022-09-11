#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Teacher
{
public:
	Teacher(int id, const char* name)
	{
		m_id = id;
		int len = strlen(name);
		m_name = (char*)malloc(sizeof(char) * (len+1));
		strcpy(m_name,name);
	}

	Teacher(const Teacher& another)
	{
		m_id = another.m_id;
		//m_name = another.m_name;
		int len = sizeof(another.m_name);
		m_name = (char*)malloc(sizeof(char)*(len+1));
		strcpy(m_name,another.m_name);
	}

	void PrintT()
	{
		cout << "id =" << m_id << ", " << "name =" << m_name << endl;
	}

	~Teacher()
	{
		cout << "~Teacher()..." << endl;
		if (m_name!=NULL)
		{
			free(m_name);
			m_name = NULL;
		}
	}

private:
	int m_id;
	char* m_name;
};

void test()
{
	Teacher t1(1, "zhang3");
	t1.PrintT();

	Teacher t2(t1);
	t2.PrintT();
}

int main(void)
{
	//Teacher t1(1, "zhang3");
	//t1.PrintT();
	test();

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Goods
{
public:
	Goods()
	{
		weight = 0;
		next = NULL;
		cout << "����һ������Ϊ" << weight << "�Ļ���" << endl;
	}
	Goods* next;
	Goods(int w)
	{//��Ҫ����һ��w�Ļ�����Ҳֿ�����������
		weight = w;
		next = NULL;
		total_weight += w;
		cout << "����һ������Ϊ" << weight << "�Ļ���" << endl;
	}
	~Goods()
	{//�ֿ����������������
		cout << "ɾ��һ������Ϊ" << weight << "�Ļ���" << endl;
		total_weight -= weight;
	}
	static int get_total_weight()
	{
		return total_weight;
	}
private:
	int weight;//����
	static int total_weight;//�ֿ�������
};

int Goods::total_weight = 0;

void buy(Goods*& head, int w)
{
	//����һ�����������w
	Goods* new_goods = new Goods(w);
	if (head==NULL)
	{
		head = new_goods;
	}
	else {
		new_goods->next = head;
		head = new_goods;
	}
}

void sale(Goods*& head)
{
	if (head==NULL)
	{
		cout << "�޻�" << endl;
		return;
	}
	Goods* temp = head;
	head = head->next;
	delete temp;
	cout << "saled." << endl;
}

int main(void)
{
	int choice = 0;
	Goods* head = NULL;
	int w;
	do
	{
		cout << "1 ����" << endl;
		cout << "2 ����" << endl;
		cout << "0 �˳�" << endl;

		cin >> choice;
		switch (choice)
		{
		case 1:
			//����
			cout << "�����Ҫ�������������" << endl;
			cin >> w;
			buy(head,w);
			break;
		case 2:
			//����
			sale(head);
			break;
		case 0:
			return 0;
		default:
			break;
		}
		cout << "��ǰ�ֿ����������" << endl;

	} while (1);
	return 0;
}
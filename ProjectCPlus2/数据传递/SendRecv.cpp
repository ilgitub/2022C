#define _CRT_SECURE_NO_WARNINGS
#include "SendRecv.h"
#include<iostream>
using namespace std;

int SendRecv::Send(int n)
{
	//if (NULL == str)
	//{
	//	return -1;
	//}
	//memset(buf,0,n);
	string s = buf;
	cout << "Send buf is : " << s << endl;
	return 0;
}
int SendRecv::Recv(char* str, int n)
{
	if (NULL == str)
	{
		return -1;
	}
	len += n;
	strncpy(buf, str, n);
	cout << "Recive buf is: " << buf << endl;
	return 0;
}
SendRecv::SendRecv()
{
	memset(buf,0,2048);
	len = 0;
}

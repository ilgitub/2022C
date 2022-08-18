#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"SendRecv.h"

using namespace std;

int main(void)
{
	char* str;
	str = (char *)malloc(sizeof(char) * 128);
	if (NULL==str)
	{
		return -1;
	}
	memset(str,0,128);
	strncpy(str,"to be or not to be, that's a question.",128);

	SendRecv sv;
	sv.Recv(str,strlen(str)+1);
	sv.Send(strlen(str)+1);

	if (str!=NULL)
	{
		free(str);
		str = NULL;
	}
	return 0;
}
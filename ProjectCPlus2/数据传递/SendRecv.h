#pragma once

class SendRecv
{
public:
	int Send(int n); 
	int Recv(char * str, int n);
	SendRecv();
private:
	char buf[2048];
	int len;
};


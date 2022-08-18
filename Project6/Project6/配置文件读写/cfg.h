#pragma once
#ifdef __cplusplus
extern "C"
{
	// Function state
	int ReadCfgFile(char* file, char* key, char* value, int* len);
	int WriteCfgFile(char *file, char* key, char* value, int* len);
}
#endif
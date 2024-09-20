#include <stdio.h>
#include <windows.h>

void decryptString(const char* str, char* buffer)
{
	int len = strlen(str);
	
	for(int i = 0; i < len; i++)
	{
		char c = str[i];
		if (c == 0) { break; }

		buffer[i] = (c + 5);

		if (c > 'y')
		{
			buffer[i] -= 95;
		}
	}

	buffer[len] = 0;
}

int checkPassword(const char* inputUsername, const char* windowsUsername, const char* inputPassword)
{
	char password[255];

	int inputLen = strlen(inputUsername);
	int windowsLen = strlen(windowsUsername);

	int len;
	if (inputLen < windowsLen) { len = inputLen; }
	else { len = windowsLen; }

	for (int i = 0; i < len; i++)
	{
		char c1 = inputUsername[i];
		char c2 = windowsUsername[i];
		password[i] = (c1 + c2) / 2;
	}

	password[len] = 0;

	return strcmp(password, inputPassword);
}

int main() 
{
	char usernamePrompt[255];
	decryptString("Pn`mi\\h`5", usernamePrompt);
	printf(usernamePrompt);

	char inputUsername[255];
	fgets(inputUsername, 255, stdin);
	inputUsername[strcspn(inputUsername, "\n")] = 0;

	int inputUsernameLen = strlen(inputUsername);
	if (inputUsernameLen < 3 || inputUsernameLen > 254)
	{
		char lenError[255];
		decryptString("Dikpozhpnoz]`z]`or``iz.z\\i_z-0/z^c\\m\\^o`mn", lenError, 255);
		printf(lenError);

		getchar();

		return 0;
	}

	char windowsUsername[255];
	int bufferSize = 255;
	if (!GetUserNameA(windowsUsername, &bufferSize))
	{
		return 0;
	}

	char passwordPrompt[255];
	decryptString("K\\nnrjm_5", passwordPrompt, 255);
	printf(passwordPrompt);

	char inputPassword[255];
	fgets(inputPassword, 255, stdin);
	inputPassword[strcspn(inputPassword, "\n")] = 0;

	char strResult[255];
	if (checkPassword(inputUsername, windowsUsername, inputPassword) == 0) 
	{
		decryptString(">jmm`^o", strResult, 255);
	}
	else 
	{
		decryptString("Di^jmm`^o", strResult, 255);
	}

	printf(strResult);

	getchar();

	return 0;
}
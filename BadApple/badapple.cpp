#include <cstdio>
#include <windows.h>
//57行*150位=8550‬一个图
int main()
{
	FILE *fp = fopen("badapple.txt", "r");
	char buf[8550];
	while (!feof(fp))
	{
		HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD pos = { 0,0 };
		SetConsoleCursorPosition(hConsoleOutput, pos);
		Sleep(100);
		for (int i = 0; i < 58; i++)
		{
			fgets(buf, 8550, fp);
			printf("%s", buf);
		}
	}
	return 0;
}
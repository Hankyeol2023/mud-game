#include "slotmachine.h"

void gotoxy(int x, int y) //��ǥ ����
{
    COORD pos = { 2 * x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetColor(int color) //���� ����
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void CursorView(char show) //Ŀ�� ���ֱ�
{
    CONSOLE_CURSOR_INFO ConsoleCursor;
    ConsoleCursor.bVisible = show;
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

void SetConsole() //�ܼ�â ����
{
    system("title MangRufLand");
    system("mode 158,45");
}
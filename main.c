#include "slotmachine.h"


int main()
{
    int betting = 0;
    int money = 10000;
    char *answer = 'y';

    SetConsole();
    StartingScreen();

    while(money > 0)
    {
        Betting(&betting, &money);
        slotMachine(&betting, &money);
        
        gotoxy((MapWidth / 2) - 8, 39);
        printf("��� �Ͻðڽ��ϱ� ? ( y / n )");
        
        gotoxy((MapWidth / 2) + 7, 39);
        scanf("%s", &answer);

        if (answer == 'y')
        {
            if (money <= 0)
            {
                gotoxy((MapWidth / 2) - 8, 41);
                printf("���� �����ϴ�. ������ �����մϴ�.");
                _getch();
                break;
            }
            else
            {
            gotoxy((MapWidth / 2) - 6, 41);
            printf("������ ��� �����մϴ�.");
            _getch();
            continue;
            }
        }

        if (answer == 'n')
        {
            gotoxy((MapWidth / 2) - 5, 41);
            printf("������ �����մϴ�.");
            _getch();
            break;
        }
        system("cls");
            
    }

    return 0;
}

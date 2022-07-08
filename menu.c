#include "common.h"

void title(void)
{
    int x, y;
    x = 15, y = 1;//Initializing position(x - 35 = centre)
    Color(6, 0);
    gotoxy(x, y);        printf("                                                       ,--            ");
    gotoxy(x, y + 1);    printf("         ~**!-                                         ;$$,           ");
    gotoxy(x, y + 2);    printf("       !$#@@@#$:                                       !@@,           ");
    gotoxy(x, y + 3);    printf("      !@@@@@@@@@;.                                     !@@,           ");
    gotoxy(x, y + 4);    printf("     ;@@@$, -=@@@~                                     !@@,           ");
    gotoxy(x, y + 5);    printf("    :@@@,     :@@@.                                    !@@,           ");
    gotoxy(x, y + 6);    printf("    ;@@:       !@@~  .!!~ ~$@!.  ~$@*,      ,!#@$~.    !@@,   ~!!-    ");
    gotoxy(x, y + 7);    printf("   -$@@-       ;@@#  .@@**@@@@@-!@@@@@,    ;@@@@@@@,   !@@,  ~@@$-    ");
    gotoxy(x, y + 8);    printf("   ~@@#,       :#@@  .@@@$**@@@##**#@@!   ;@@$***@@#,  !@@, -@@#~     ");
    gotoxy(x, y + 9);    printf("   ~@@=.       -$@@  .@@$-  !@@@:  ~#@@  .@@$,   !@@=  !@@, $@#~      ");
    gotoxy(x, y + 10);   printf("   ~@@$,       ~#@@  .@@!   .@@#    *@@  ~@@;     @@=  !@@,;@@:       ");
    gotoxy(x, y + 11);   printf("   ~@@@-       ;@@#  .@@!    @@#    *@@  !@@;     @@=  !@@*@@$        ");
    gotoxy(x, y + 12);   printf("   ,=@@-       !@@;  .@@!    @@#    *@@  !@@;     @@=  !@@:@@#-       ");
    gotoxy(x, y + 13);   printf("    ;@@$.     ~#@@,  .@@!    @@#    *@@  -@@;     @@=  !@@,,@@=       ");
    gotoxy(x, y + 14);   printf("    ,=@@#,   ~#@@;   .@@!    @@#    *@@  ,@@*.   *@@=  !@@, !@@!      ");
    gotoxy(x, y + 15);   printf("     :#@@@@@@@@@=.   .@@!    @@#    *@@   !@@@*;#@@#   !@@,  @@@;     ");
    gotoxy(x, y + 16);   printf("      -$@@@@@@@*.    .@@!    @@#    *@@   .=@@@@@@#.   !@@,  .@@@;    ");
    gotoxy(x, y + 17);   printf("        ~$###=-      .##;    $#=    !##     ~$###;     ;##,   -##=,   ");
    gotoxy(x, y + 18);   printf("                                                                      ");
    Color(0, 15);

    gotoxy(x, y + 21);   printf("                     Press any key to continue");
    while (1)
    {
        if (_kbhit())
        {
            x = _getch();
            break;
        }
    }
    system("cls");
}
int menu(void)
{
    int ch;
    int x, y, route = 1;
    x = 50, y = 14;//Initializing position (y>12)(x> 20, x: centre)
    Color(6, 0);
    gotoxy(x - 20, y - 12); printf("                                -       ");
    gotoxy(x - 20, y - 11); printf("    ;$@$;                      .@       ");
    gotoxy(x - 20, y - 10); printf("   *@#;$@=                     .@       ");
    gotoxy(x - 20, y - 9);  printf("  ~@!   ;@~ .- -:  -;     ::   .@  .-.  ");
    gotoxy(x - 20, y - 8);  printf("  #@     @@ !@=@@#*@@@  ~@@@@~ .@  #@.  ");
    gotoxy(x - 20, y - 7);  printf("  @#     #@ !@- =@: !@, @*  =@ .@ =@.   ");
    gotoxy(x - 20, y - 6);  printf("  @@     @@ !@  ~@   @,~@~  ~@ .@;@,    ");
    gotoxy(x - 20, y - 5);  printf("  :@:   :@~ !@  ~@   @,,@~  ~@ .@ @$    ");
    gotoxy(x - 20, y - 4);  printf("   #@!;!@$  !@  ~@   @, #$~~@$ .@ ,@*   ");
    gotoxy(x - 20, y - 3);  printf("    !@@@;   !@  ~@   @, ,=@@*  .@  :@!  ");//40
    gotoxy(x - 20, y - 2);  printf("                                        ");
    Color(0, 15);

    while (1)
    {
        switch (route)
        {
        case 1:
            Color(15, 0);
            gotoxy(x - 11, y + 1); printf("     1. Play Omok     ");//22
            Color(0, 15);
            gotoxy(x - 11, y + 3); printf("    2. Renju rules    ");
            gotoxy(x - 11, y + 5); printf("      3. Credits      ");
            gotoxy(x - 11, y + 7); printf("     4. Exit Game     ");
            gotoxy(x - 11, y + 9); printf("Press Enter to decide ");
            break;
        case 2:
            
            gotoxy(x - 11, y + 1); printf("     1. Play Omok     ");//22
             Color(15, 0);
            gotoxy(x - 11, y + 3); printf("    2. Renju rules    ");
            Color(0, 15);
            gotoxy(x - 11, y + 5); printf("      3. Credits      ");
            gotoxy(x - 11, y + 7); printf("     4. Exit Game     ");
            gotoxy(x - 11, y + 9); printf("Press Enter to decide ");
            break;
        case 3:
            gotoxy(x - 11, y + 1); printf("     1. Play Omok     ");//22
            gotoxy(x - 11, y + 3); printf("    2. Renju rules    ");
            Color(15, 0);
            gotoxy(x - 11, y + 5); printf("      3. Credits      ");
            Color(0, 15);
            gotoxy(x - 11, y + 7); printf("     4. Exit Game     ");
            gotoxy(x - 11, y + 9); printf("Press Enter to decide ");
            break;
        case 4:
            
            gotoxy(x - 11, y + 1); printf("     1. Play Omok     ");//22
            gotoxy(x - 11, y + 3); printf("    2. Renju rules    ");
            gotoxy(x - 11, y + 5); printf("      3. Credits      ");
            Color(15, 0);
            gotoxy(x - 11, y + 7); printf("     4. Exit Game     ");
            Color(0, 15);
            gotoxy(x - 11, y + 9); printf("Press Enter to decide ");
            break;
        }
        ch = _getch();
        if (ch == '\r')
            break;
        else if (ch == 224)
        {
            ch = _getch();
            switch (ch)
            {
            case 72://up
                if (route > 1)
                    route--;
                break;
            case 80://down
                if (route < 4)
                    route++;
                break;
            }
        }
    }
    system("cls");
    return route;
}
void renju_rules(void)
{
    int ch;
    printf("For Black: \n");
    printf("3X3 is banned\n");
    printf("4X4 is banned\n");
    printf("6 is banned\n");
    printf("Press any key to go to menu ");
    while (1)
    {
        if (_kbhit())
        {
            ch = _getch();
            break;
        }
    }
}
void credits(void)
{
    int ch;
    printf("sorkaksema");
    printf("Press any key to go to menu ");
    while (1)
    {
        if (_kbhit())
        {
            ch = _getch();
            break;
        }
    }
}
void EXIT(void)
{
    int ch;
    printf("Thank you for playing\n\n");
    exit(EXIT_SUCCESS);
}
#include<windows.h>  /// LIBRARY REQUIRED TO USE WINDOW FUNCTIONS eg: MAXIMIZE CONSOLE
#include<conio.h>  /// LIBRARY REQUIRED TO USE FUNCTIONS eg: arrow, getch
#include <unistd.h>  /// LIBRARY REQUIRED TO USE FUNCTIONS eg: sleep();
#include <bits/stdc++.h> /// LIBRARY FOR C++
using namespace std;

int a = 2;  /// GLOBAL DECLARATION FOR SLEEP FUNCTION TIME IN SECONDS
int z =0;
void gotoxy(int x, int y)    /// COORDINATIONS
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void MaximizeOutputWindow(void)    /// MAX CONSOLE
{
    HWND consoleWindow = GetConsoleWindow(); // This gets the value Windows uses to identify your output window
    ShowWindow(consoleWindow, SW_SHOWMAXIMIZED); // this mimics clicking on its' maximize button
}
void hidecursor()    /// HIDE CURSOR
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void ClearConsoleToColors(int ForgC, int BackC)    /// COLOR
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     //This is used to get the handle to current output buffer.
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     //This is used to reset the carat/cursor to the top left.
     COORD coord = {0, 0};
                      //   This is a return value indicating how many characterss were written
                        //   It is not used but we need to capture this since it will be
                          //   written anyway (passing NULL causes an access violation).
     DWORD count;
                                   //This is a structure containing all the console info
                          // It is used here to find the size of the console.
     CONSOLE_SCREEN_BUFFER_INFO csbi;
                     //Now the current color will be set by this handle
     SetConsoleTextAttribute(hStdOut, wColor);
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                              //This fills the buffer with a given character (in this case 32=space).
          FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
          FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
                              //This will set our cursor position for the next print statement
          SetConsoleCursorPosition(hStdOut, coord);
     }
     return;
}
void SetColor(int ForgC)      /// COLOR
{
     WORD wColor;
     //This handle is needed to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
void arrowhere(int realposition,int arrowposition)  /// ARROW
{
    char arrow1=205 , arrow2=16 ;
        if(realposition == arrowposition)
        {
            SetColor(34);
            printf(" %c%c   " , arrow1 , arrow2);
        }
        else
        {
            SetColor(14);
            printf("      ");
        }
}

void PHONEBOOK()
{
    char a, b;
    int t = 1;
SetColor(82);
    // P start
    for (a = 5, b = 18; b >= 6; b--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 5, b = 6; a <= 14; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 14, b = 6; b <= 12; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 14, b = 12; a >= 5; a--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    // P end

    // H start
    for (a = 18, b = 6; b <= 18; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 18, b = 12; a <= 27; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 27, b = 6; b <= 18; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    // H end

    // O start
    for (a = 31, b = 6; a <= 40; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 40, b = 6; b <= 18; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 40, b = 18; a >= 31; a--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 31, b = 18; b >= 6; b--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    // O end

    // N start
    for (a = 44, b = 6; b <= 18; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 45, b = 6; a <= 56; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
        b++;
    }
    for (a = 56, b = 6; b <= 18; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    // N end

    // E start
    for (a = 58, b = 6; a <= 67; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 58, b = 12; a <= 67; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 58, b = 18; a <= 67; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 58, b = 6; b <= 18; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    // E end

    // B start
    for (a = 71, b = 18; b >= 6; b--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 71, b = 6; a <= 76; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 77, b = 6; a <= 80,b<=8; a++,b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 80, b = 9; a >= 77,b<=11; a--,b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a =80, b = 8; a <= 76,b>=11; a--,b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 77, b = 12; a>=71; a--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 77, b = 12; a <= 80,b<=15; a++,b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 80, b = 15; a >= 77,b<=18; a--,b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 76, b = 18; a >= 71; a--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }



    for (a = 80, b = 14; b<=15; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }




     for (a =80, b = 16; a >= 76,b>=18; a--,b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }



    for (a = 76, b = 18; a >= 71; a--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    // B end

    // O start
    for (a = 84, b = 6; a <= 93; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 93, b = 6; b <= 18; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 93, b = 18; a >= 84; a--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 84, b = 18; b >= 6; b--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    // O end

    // O start
    for (a = 97, b = 6; a <= 106; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 106, b = 6; b <= 18; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 106, b = 18; a >= 97; a--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 97, b = 18; b >= 6; b--)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    // O end

    // K start
    for (a = 110, b = 6; b <= 18; b++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
    }
    for (a = 111, b = 12; a <= 117; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
        b--;
    }
    for (a = 111, b = 12; a <= 117; a++)
    {
        gotoxy(a, b);
        printf("%c", 219);
        Sleep(t);
        b++;
    }
    // K end
    SetColor(86);

    gotoxy(33,22);
    Sleep(t);
    printf("Healing yourself is connected with healing others– Yoko Ono");
     gotoxy(46,28);
    Sleep(t);
    SetColor(68);
    printf("Press any key to Continue");
    getchar();
}
void aboutbox()    /// ABOUT FRAME BOX
{
    SetColor(9);
    int i, j,TopBottomLines=166,Sidelines=70,x=0,y=0,a=0;

    for(i=0; i<=TopBottomLines+1; i++)    /////// TOP LINE
    {
        gotoxy(x+i, y);
        if(i==0)
        {
             printf("%c", 218);sleep(a);
        }
        else if(i==TopBottomLines+1){
            printf("%c\n", 191);sleep(a);}
        else
            printf("%c", 196);sleep(a);
        fflush(stdout);
    }

    for(i=1; i<=Sidelines; i++)    /////// SIDE LINE
    {
        gotoxy(x, y+i);
        printf("%c", 179);sleep(a);
        for(j=1; j<=TopBottomLines; j++)
            printf(" ");sleep(a);
        printf("%c\n", 179);sleep(a);
        fflush(stdout);
    }

    for(i=0; i<=TopBottomLines+1; i++)   /////// BOTTOM LINE
    {
        gotoxy(x+i, y+Sidelines);
        if(i==0)
        {
            printf("%c", 192);sleep(a);
        }
        else if(i==TopBottomLines+1)
        {
            printf("%c\n", 217);sleep(a);
        }
        else
        {
            printf("%c", 196);sleep(a);
        }

    }
 }
void box()    /// FRAME BOX
{
    SetColor(9);
    int i, j,TopBottomLines=166,Sidelines=44,x=0,y=0;

    for(i=0; i<=TopBottomLines+1; i++)    /////// TOP LINE
    {
        gotoxy(x+i, y);
        if(i==0)
        {
             printf("%c", 218);
        }
        else if(i==TopBottomLines+1){
            printf("%c\n", 191);}
        else
            printf("%c", 196);
        fflush(stdout);
    }

    for(i=1; i<=Sidelines; i++)    /////// SIDE LINE
    {
        gotoxy(x, y+i);
        printf("%c", 179);
        for(j=1; j<=TopBottomLines; j++)
            printf(" ");
        printf("%c\n", 179);
        fflush(stdout);
    }

    for(i=0; i<=TopBottomLines+1; i++)   /////// BOTTOM LINE
    {
        gotoxy(x+i, y+Sidelines);
        if(i==0)
        {
            printf("%c", 192);
        }
        else if(i==TopBottomLines+1)
        {
            printf("%c\n", 217);
        }
        else
        {
            printf("%c", 196);
        }

    }
 }
void headerbox(int len1,int len2,int x,int y)      /// HEADER BOX
{
    hidecursor();
    int i, j;

    for(i=0; i<=len1+1; i++)
    {
        gotoxy(x+i, y);
            printf("%c", 16);
    }

    for(i=1; i<=len2; i++)
    {
        gotoxy(x, y+i);
        printf("%c", 30);
        for(j=1; j<=len1; j++)
            printf(" ");
        printf("%c\n", 31);
    }

    for(i=0; i<=len1+1; i++)
    {
        gotoxy(x+i, y+len2);
            printf("%c", 17);

    }
    fflush(stdout);
 }
void eraseheaderbox(int len1,int len2,int x,int y)      /// REMOVE HEADER BOX
{
    hidecursor();
    int i, j;

    for(i=0; i<=len1+1; i++)
    {
        gotoxy(x+i, y);
            printf(" ");
    }

    for(i=1; i<=len2; i++)
    {
        gotoxy(x, y+i);
        printf(" ");
        for(j=1; j<=len1; j++)
            printf(" ");
        printf(" \n");
    }

    for(i=0; i<=len1+1; i++)
    {
        gotoxy(x+i, y+len2);
            printf(" ");

    }
    fflush(stdout);
 }
void heart(int x, int y)  ///FOR FAV CONTACTS
{
    gotoxy(x,y);  cout << "* * * * * *" << endl;
    gotoxy(x,y+1);cout << "*** *** ***" << endl;
    gotoxy(x,y+2);cout << " *   *   * " << endl;

}
void eraseheart(int x, int y)  ///REMOVE SHAPE FOR NO FAV CONTACTS
{
    gotoxy(x,y);  cout << "           " << endl;
    gotoxy(x,y+1);cout << "           " << endl;
    gotoxy(x,y+2);cout << "           " << endl;
}
void DOT(int x, int y)    /// DOT
{
        gotoxy( x, y+2);
        printf( "%c", 4);
        fflush(stdout);
}
void exclamation(int x, int y)    ////EXCLAMATION MARK
{
    int i;
    for(i=0; i<7; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("   %c",219,219,219,219,219,219,219);
        if(i==1)
            printf("   %c",219);
        if(i==2)
            printf("   %c",219);
        if(i==3)
            printf("   %c",219);
        if(i==4)
            printf("   %c",219);
        if(i==5)
            printf("     ",219);
        if(i==6)
            printf("   %c",219,219,219,219,219,219,219,219);
        fflush(stdout);
    }
}
void s0(int x, int y)    //// small size numbers
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|  |");
        if(i==2)
            printf("|__|");
    }
    fflush(stdout);
}
void s1(int x, int y)    //// small size numbers
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("  | ");
        if(i==2)
            printf("  | ");
    }
    fflush(stdout);
}
void s2(int x, int y)    //// small size numbers
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf(" __|");
        if(i==2)
            printf("|__ ");
    }
    fflush(stdout);
}
void s3(int x, int y)    //// small size numbers
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf(" __|");
        if(i==2)
            printf(" __|");
    }
    fflush(stdout);
}
void s4(int x, int y)    //// small size numbers
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf("   |");
    }
    fflush(stdout);
}
void s5(int x, int y)    //// small size numbers
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__ ");
        if(i==2)
            printf(" __|");
    }
    fflush(stdout);
}
void s6(int x, int y)    //// small size numbers
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__ ");
        if(i==2)
            printf("|__|");
    }
    fflush(stdout);
}
void s7(int x, int y)    //// small size numbers
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("   |");
        if(i==2)
            printf("   |");
    }
    fflush(stdout);
}
void s8(int x, int y)    //// small size numbers
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf("|__|");
    }
    fflush(stdout);
}
void s9(int x, int y)    //// small size numbers
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf("   |");
    }
    fflush(stdout);
}
void letter_A(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf("|  |");

        fflush(stdout);
    }
}
void letter_B(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__)");
        if(i==2)
            printf("|__)");

        fflush(stdout);
    }
}
void letter_C(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __");
        if(i==1)
            printf("|  ");
        if(i==2)
            printf("|__");

        fflush(stdout);
    }
}
void letter_D(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" _  ");
        if(i==1)
            printf("| \\");
        if(i==2)
            printf("|_/");

        fflush(stdout);
    }
}
void letter_E(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __");
        if(i==1)
            printf("|__");
        if(i==2)
            printf("|__");

        fflush(stdout);
    }
}
void letter_F(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __");
        if(i==1)
            printf("|_ ");
        if(i==2)
            printf("|  ");

        fflush(stdout);
    }
}
void letter_G(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("| _ ");
        if(i==2)
            printf("|__|");

        fflush(stdout);
    }
}
void letter_H(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf("|  |");

        fflush(stdout);
    }
}
void letter_I(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" ");
        if(i==1)
            printf("|");
        if(i==2)
            printf("|");

        fflush(stdout);
    }
}
void letter_J(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("   ");
        if(i==1)
            printf("  |");
        if(i==2)
            printf("__|");

        fflush(stdout);
    }
}
void letter_K(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("   ");
        if(i==1)
            printf("|/ ");
        if(i==2)
            printf("|\\");

        fflush(stdout);
    }
}
void letter_L(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("   ");
        if(i==1)
            printf("|  ");
        if(i==2)
            printf("|__");

        fflush(stdout);
    }
}
void letter_M(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("     ");
        if(i==1)
            printf("|\\/|");
        if(i==2)
            printf("|  | ");

        fflush(stdout);
    }
}
void letter_N(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("     ");
        if(i==1)
            printf("|\\ |");
        if(i==2)
            printf("| \\|");

        fflush(stdout);
    }
}
void letter_O(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|  |");
        if(i==2)
            printf("|__|");

        fflush(stdout);
    }
}
void letter_P(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__)");
        if(i==2)
            printf("|   ");

        fflush(stdout);
    }
}
void letter_Q(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("| _|");
        if(i==2)
            printf("|__%c", 191);

        fflush(stdout);
    }
}
void letter_R(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __  ");
        if(i==1)
            printf("|__| ");
        if(i==2)
            printf("|  \\");

        fflush(stdout);
    }
}
void letter_S(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__ ");
        if(i==2)
            printf(" __|");

        fflush(stdout);
    }
}
void letter_T(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("___");
        if(i==1)
            printf(" | ");
        if(i==2)
            printf(" | ");

        fflush(stdout);
    }
}
void letter_U(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("|  |");
        if(i==2)
            printf("|__|");

        fflush(stdout);
    }
}
void letter_V(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("     ");
        if(i==1)
            printf("\\  /");
        if(i==2)
            printf(" \\/ ");

        fflush(stdout);
    }
}
void letter_W(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("     ");
        if(i==1)
            printf("|  | ");
        if(i==2)
            printf("|/\\|");

        fflush(stdout);
    }
}
void letter_X(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("   ");
        if(i==1)
            printf("\\/");
        if(i==2)
            printf("/\\");

        fflush(stdout);
    }
}
void letter_Y(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("\\ /");
        if(i==2)
            printf(" |  ");

        fflush(stdout);
    }
}
void letter_Z(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("__");
        if(i==1)
            printf(" /");
        if(i==2)
            printf("/_");

        fflush(stdout);
    }
}
void boldletter_A(int x, int y)    ////BOLD ALPHAPET
{
    int i;
    for(i=0; i<7; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
        if(i==1)
            printf("%c      %c",219,219);
        if(i==2)
            printf("%c      %c",219,219);
        if(i==3)
            printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
        if(i==4)
            printf("%c      %c",219,219);
        if(i==5)
            printf("%c      %c",219,219);
        if(i==6)
            printf("%c      %c",219,219);

        fflush(stdout);
    }
}
void boldletter_B(int x, int y)    ////BOLD ALPHAPET
{
    int i;
    for(i=0; i<7; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("%c%c%c%c%c%c%c ",219,219,219,219,219,219,219);
        if(i==1)
            printf("%c      %c",219,219);
        if(i==2)
            printf("%c      %c",219,219);
        if(i==3)
            printf("%c%c%c%c%c%c%c",219,219,219,219,219,219,219);
        if(i==4)
            printf("%c      %c",219,219);
        if(i==5)
            printf("%c      %c",219,219);
        if(i==6)
            printf("%c%c%c%c%c%c%c ",219,219,219,219,219,219,219);

        fflush(stdout);
    }
}
void boldletter_D(int x, int y)    ////BOLD ALPHAPET
{
    int i;
    for(i=0; i<7; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("%c%c%c%c%c%c%c ",219,219,219,219,219,219,219);
        if(i==1)
            printf("%c      %c",219,219);
        if(i==2)
            printf("%c      %c",219,219);
        if(i==3)
            printf("%c      %c",219,219,219,219,219,219,219);
        if(i==4)
            printf("%c      %c",219,219);
        if(i==5)
            printf("%c      %c",219,219);
        if(i==6)
            printf("%c%c%c%c%c%c%c ",219,219,219,219,219,219,219);

        fflush(stdout);
    }
}
void boldletter_E(int x, int y)    ////BOLD ALPHAPET
{
    int i;
    for(i=0; i<7; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
        if(i==1)
            printf("%c   ",219);
        if(i==2)
            printf("%c   ",219);
        if(i==3)
            printf("%c%c%c%c%c%c",219,219,219,219,219,219);
        if(i==4)
            printf("%c   ",219);
        if(i==5)
            printf("%c   ",219);
        if(i==6)
            printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
        fflush(stdout);
    }
}
void boldletter_G(int x, int y)    ////BOLD ALPHAPET
{
    int i;
    for(i=0; i<7; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
        if(i==1)
            printf("%c   ",219);
        if(i==2)
            printf("%c   ",219);
        if(i==3)
            printf("%c   %c%c%c%c",219,219,219,219,219);
        if(i==4)
            printf("%c      %c",219,219);
        if(i==5)
            printf("%c      %c",219,219);
        if(i==6)
            printf("%c%c%c%c%c%c%c%c ",219,219,219,219,219,219,219,219);

        fflush(stdout);
    }
}
void boldletter_O(int x, int y)    ////BOLD ALPHAPET
{
    int i;
    for(i=0; i<7; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
        if(i==1)
            printf("%c      %c",219,219);
        if(i==2)
            printf("%c      %c",219,219);
        if(i==3)
            printf("%c      %c",219,219);
        if(i==4)
            printf("%c      %c",219,219);
        if(i==5)
            printf("%c      %c",219,219);
        if(i==6)
            printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);

        fflush(stdout);
    }
}
void boldletter_T(int x, int y)    ////BOLD ALPHAPET
{
    int i;
    for(i=0; i<7; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("%c%c%c%c%c%c%c ",219,219,219,219,219,219,219);
        if(i==1)
            printf("   %c",219);
        if(i==2)
            printf("   %c",219);
        if(i==3)
            printf("   %c   ",219);
        if(i==4)
            printf("   %c   ",219);
        if(i==5)
            printf("   %c   ",219);
        if(i==6)
            printf("   %c ",219,219,219,219,219,219,219,219);

        fflush(stdout);
    }
}
void boldletter_U(int x, int y)    ////BOLD ALPHAPET
{
    int i;
    for(i=0; i<7; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("%c      %c",219,219);
        if(i==1)
            printf("%c      %c",219,219);
        if(i==2)
            printf("%c      %c",219,219);
        if(i==3)
            printf("%c      %c",219,219);
        if(i==4)
            printf("%c      %c",219,219);
        if(i==5)
            printf("%c      %c",219,219);
        if(i==6)
            printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);

        fflush(stdout);
    }
}
void boldletter_Y(int x, int y)    ////BOLD ALPHAPET
{
    int i;
    for(i=0; i<7; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" %c     %c",219,219,219,219,219,219,219,219);
        if(i==1)
            printf("  %c   %c ",219,219);
        if(i==2)
            printf("   %c %c ",219,219);
        if(i==3)
            printf("    %c    ",219,219,219,219,219,219,219,219);
        if(i==4)
            printf("    %c",219);
        if(i==5)
            printf("    %c",219);
        if(i==6)
            printf("    %c",219);

        fflush(stdout);
    }
}


struct Node /// LINKED LIST
{
    string name;
    string phoneNumber;
    bool isFavorite;
    Node *next;
};
Node *head = NULL; /// INTIALIZING FIRST HEAD AS NULL

void MainMenu();
void saveToFile();
void contactlist();   /// CALLING ALL FUNCTIONS SO THAT IF ANY FUNCTIONS DIFFERS FROM POSITIONS IT WONT CAUSE ERROR BUT CAN ACCESS IT
void favouritelist();
void contactinfo(Node *&current, int flag);

void saveToFile() /// SAVING INFORMATION FROM FILE
{
    ofstream file("contacts.txt"); // opening file to write
    Node *current = head;          // declaring a node of the linkedlist created
    while (current != NULL)
    {
        file << current->name << "," << current->phoneNumber << "," << (current->isFavorite ? "1" : "0") << endl;
        current = current->next;
    }
    file.close();
}
void swapNodes(Node *a, Node *b)
{
    Node *prevA = NULL;
    Node *prevB = NULL;
    Node *temp = head;

    // Find the previous nodes of a and b
    while (temp != a)
    {
        prevA = temp;
        temp = temp->next;
    }

    temp = head;
    while (temp != b)
    {
        prevB = temp;
        temp = temp->next;
    }

    // Swap the nodes
    if (prevA != NULL)
    {
        prevA->next = b;
    }
    else
    {
        head = b;
    }

    if (prevB != NULL)
    {
        prevB->next = a;
    }
    else
    {
        head = a;
    }

    temp = a->next;
    a->next = b->next;
    b->next = temp;
}
void insertionSort(Node *&head)
{
    Node *current = head;
    Node *nextNode = NULL;

    while (current != NULL && current->next != NULL)
    {
        nextNode = current->next;

        while (nextNode != NULL)
        {
            if (current->name.compare(nextNode->name) > 0)
            {
                // Swap the nodes
                swapNodes(current, nextNode);
                current = nextNode;
                break;
            }
            nextNode = nextNode->next;
        }

        current = current->next;
    }
}
void addNode(string name, string phoneNumber) /// ADDING CONTACTS IN NODES
{

    // creating node
    Node *newNode = new Node;           // named a node
    newNode->name = name;               // intializing contact name
    newNode->phoneNumber = phoneNumber; // intializing contact number
    newNode->isFavorite = false;        // intializing contact as not favourite at the beginning
    newNode->next = NULL;

    // connecting node alphabetically
    if (head == NULL || head->name >= name)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL && current->next->name < name)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void markAsFavorite(Node *&current) /// MARKING CONTACT AS FAV
{
    if(current->isFavorite==true)
    {
        headerbox(35,2,110,24);
        gotoxy(115,25);cout << "Already marked as favorite.";
        sleep(a);
        eraseheaderbox(35,2,110,24);
    }
    else
    {
        current->isFavorite = true;
        headerbox(35,2,110,24);
        gotoxy(115,25);cout << "Contact marked as favorite." << endl;
        sleep(a);
        eraseheaderbox(35,2,110,24);
    }
    saveToFile();
}
void removeFavorite(Node *&current) /// REMOVING CONTACT FROM FAV
{
    if(current->isFavorite==false)
    {
        headerbox(35,2,110,27);
        gotoxy(114,28);cout << "Already removed from favorite.";
        sleep(a);
        eraseheaderbox(35,2,110,27);
    }
    else
    {
        current->isFavorite = false;
        headerbox(35,2,110,27);
        gotoxy(114,28);cout << "Contact removed from favorite." << endl;
        sleep(a);
        eraseheaderbox(35,2,110,27);
    }
    saveToFile();
}
void editNode(Node *&current) /// EDITING CONTACT INFO OF A PERSON
{
    system("cls");
    int h=20,v=10,H=63,V=3;
    box();
    headerbox(50,5,58,2);
    letter_E(H,V);letter_D(H+4,V);letter_I(H+8,V);letter_T(H+10,V);  letter_C(H+16,V);letter_O(H+20,V);letter_N(H+24,V);letter_T(H+29,V);letter_A(H+32,V);letter_C(H+36,V);letter_T(H+40,V);
    headerbox(75,10,45,15);
    while(1){
            gotoxy(51,17);cout << "Do you want to edit the name (1), phone number (2), or both (3)? " << endl;
            gotoxy(51,18);cout << "Enter number to choose (1/2/3): ";
            int editChoice;
            cin >> editChoice;

            if (editChoice == 1) // editing only name
            {
                gotoxy(51,20);cout << "Enter new name: ";
                string newName;
                cin.ignore();
                getline(cin, newName);
                transform(newName.begin(), newName.end(), newName.begin(), ::toupper);
                current->name = newName;
                headerbox(35,2,65,29);
                gotoxy(70,30); cout << "Contact edited successfully" << endl;
                break;
            }
            else if (editChoice == 2) // editing only phone number
            {
                gotoxy(51,20);cout << "Enter new phone number: ";
                string newPhoneNumber;
                cin.ignore();
                getline(cin, newPhoneNumber);
                current->phoneNumber = newPhoneNumber;
                headerbox(35,2,65,29);
                gotoxy(70,30); cout << "Contact edited successfully" << endl;
                break;
            }
            else if (editChoice == 3) // editing both name and phone number
            {
                gotoxy(51,20);cout << "Enter new name: ";
                string newName;
                cin.ignore();
                getline(cin, newName);
                transform(newName.begin(), newName.end(), newName.begin(), ::toupper);
                current->name = newName;
                gotoxy(51,22);cout << "Enter new phone number: ";
                string newPhoneNumber;
                getline(cin, newPhoneNumber);
                current->phoneNumber = newPhoneNumber;
                headerbox(35,2,65,29);
                gotoxy(70,30); cout << "Contact edited successfully" << endl;
                break;
            }
            else
            {
                gotoxy(51,14);cout << "Invalid choice" << endl;
                sleep(a);
                gotoxy(51,14);cout << "              " << endl;
            }


    }
    sleep(a);
    insertionSort(head);

    saveToFile();
}
void deleteNode(Node *&contact) /// DELETING CONTACT
{
    Node *current = head;
    Node *prev = NULL;
    while (current != NULL)
    {
        if (current == contact) // searching contact through name
        {
            if (prev == NULL)
            {
                head = current->next;
            }
            else
            {
                prev->next = current->next;
            }
            delete current; // node deleted
        }
        prev = current;
        current = current->next;
    }
    headerbox(35,2,110,33);
    gotoxy(117,34);cout << "Contact has been deleted." << endl;
    sleep(a);
    eraseheaderbox(35,2,110,33);
    saveToFile();
}
void contactinfo(Node *&current, int flag)  ///CONTACT INFORMATION
{
    system("cls");
    int h=20,v=10,H=63,V=3,hearth,heartv;
    box();
    headerbox(50,5,58,2);

    letter_C(H,V);letter_O(H+4,V);letter_N(H+8,V);letter_T(H+13,V);letter_A(H+16,V);letter_C(H+20,V);letter_T(H+24,V);   letter_I(H+30,V);letter_N(H+31,V);letter_F(H+35,V);letter_O(H+39,V);

    letter_N(h-18,v);letter_A(h-14,v);letter_M(h-10,v);letter_E(h-6,v);DOT(h-2,v);DOT(h-2,v-1);
    string name = current->name;

    for (int i = 0; i < name.length(); i++)
    {
             if(name[i]=='a'||name[i]=='A')
                letter_A(h+4+i*6, v);

             else if(name[i]=='b'||name[i]=='B')
                letter_B(h+4+i*6, v);

             else if(name[i]=='c'||name[i]=='C')
                letter_C(h+4+i*6, v);

             else if(name[i]=='d'||name[i]=='D')
                letter_D(h+4+i*6, v);

             else if(name[i]=='e'||name[i]=='E')
                letter_E(h+4+i*6, v);

             else if(name[i]=='f'||name[i]=='F')
                letter_F(h+4+i*6, v);

             else if(name[i]=='g'||name[i]=='G')
                letter_G(h+4+i*6, v);

             else if(name[i]=='h'||name[i]=='H')
                letter_H(h+4+i*6, v);

             else if(name[i]=='i'||name[i]=='I')
                letter_I(h+4+i*6, v);

             else if(name[i]=='j'||name[i]=='J')
                letter_J(h+4+i*6, v);

             else if(name[i]=='k'||name[i]=='K')
                letter_K(h+4+i*6, v);

             else if(name[i]=='l'||name[i]=='L')
                letter_L(h+4+i*6, v);

             else if(name[i]=='m'||name[i]=='M')
                letter_M(h+4+i*6, v);

             else if(name[i]=='n'||name[i]=='N')
                letter_N(h+4+i*6, v);

             else if(name[i]=='o'||name[i]=='O')
                letter_O(h+4+i*6, v);

             else if(name[i]=='p'||name[i]=='P')
                letter_P(h+4+i*6, v);

             else if(name[i]=='q'||name[i]=='Q')
                letter_Q(h+4+i*6, v);

             else if(name[i]=='r'||name[i]=='R')
                letter_R(h+4+i*6, v);

             else if(name[i]=='s'||name[i]=='S')
                letter_S(h+4+i*6, v);

             else if(name[i]=='t'||name[i]=='T')
                letter_T(h+4+i*6, v);

             else if(name[i]=='u'||name[i]=='U')
                letter_U(h+4+i*6, v);

             else if(name[i]=='v'||name[i]=='V')
                letter_V(h+4+i*6, v);

             else if(name[i]=='w'||name[i]=='W')
                letter_W(h+4+i*6, v);

             else if(name[i]=='x'||name[i]=='X')
                letter_X(h+4+i*6, v);

             else if(name[i]=='y'||name[i]=='Y')
                letter_Y(h+4+i*6, v);

             else if(name[i]=='z'||name[i]=='Z')
                letter_Z(h+4+i*6, v);
            if(i==name.length()-1)
            {
                i++;
                hearth=h+4+i*6;
                heartv=v+1;
                if(current->isFavorite)
                    heart(hearth,heartv);
            }


    }

    letter_P(h-18,v+4);letter_H(h-14,v+4);letter_O(h-10,v+4);letter_N(h-6,v+4);letter_E(h-2,v+4);  letter_N(h+4,v+4);letter_O(h+8,v+4); DOT(h+12,v+4);DOT(h+13,v+4);DOT(h+13,v+3);
    string phoneNumber = current->phoneNumber;
    for (int i = 0; i < phoneNumber.length(); i++)
    {
        switch (phoneNumber[i]) {
            case '0':
                s0(h+17+i * 6, v+4);
                break;
            case '1':
                s1(h+17+i * 6, v+4);
                break;
            case '2':
                s2(h+17+i * 6, v+4);
                break;
            case '3':
                s3(h+17+i * 6, v+4);
                break;
            case '4':
                s4(h+17+i * 6, v+4);
                break;
            case '5':
                s5(h+17+i * 6, v+4);
                break;
            case '6':
                s6(h+17+i * 6, v+4);
                break;
            case '7':
                s7(h+17+i * 6, v+4);
                break;
            case '8':
                s8(h+17+i * 6, v+4);
                break;
            case '9':
                s9(h+17+i * 6, v+4);
                break;
            default:
                break;
        }
    }
    int position = 1;
    int keypressed = 0;
    while(1)
    {
        gotoxy(5,v+15);arrowhere(1,position); letter_M(h-10,v+14);letter_A(h-6,v+14);letter_R(h-2,v+14);letter_K(h+2,v+14);    letter_A(h+7,v+14);letter_S(h+11,v+14);     letter_F(h+17,v+14);letter_A(h+21,v+14);letter_V(h+25,v+14);letter_O(h+29,v+14);letter_U(h+33,v+14);letter_R(h+37,v+14);letter_I(h+42,v+14);letter_T(h+44,v+14);letter_E(h+48,v+14);

        gotoxy(5,v+18);arrowhere(2,position);letter_R(h-10,v+17);letter_E(h-6,v+17);letter_M(h-2,v+17);letter_O(h+2,v+17);letter_V(h+6,v+17);letter_E(h+10,v+17);   letter_F(h+16,v+17);letter_R(h+19,v+17);letter_O(h+23,v+17);letter_M(h+27,v+17);   letter_F(h+34,v+17);letter_A(h+38,v+17);letter_V(h+42,v+17);letter_O(h+46,v+17);letter_U(h+50,v+17);letter_R(h+54,v+17);letter_I(h+59,v+17);letter_T(h+61,v+17);letter_E(h+65,v+17);

        gotoxy(5,v+21);arrowhere(3,position); letter_E(h-10,v+20);letter_D(h-6,v+20);letter_I(h-2,v+20);letter_T(h,v+20);    letter_C(h+6,v+20);letter_O(h+10,v+20);letter_N(h+14,v+20);letter_T(h+19,v+20);letter_A(h+23,v+20);letter_C(h+27,v+20);letter_T(h+31,v+20);

        gotoxy(5,v+24);arrowhere(4,position);letter_D(h-10,v+23);letter_E(h-6,v+23);letter_L(h-2,v+23);letter_E(h+2,v+23);letter_T(h+6,v+23);letter_E(h+10,v+23);   letter_C(h+16,v+23);letter_O(h+20,v+23);letter_N(h+24,v+23);letter_T(h+29,v+23);letter_A(h+33,v+23);letter_C(h+37,v+23);letter_T(h+41,v+23);

        gotoxy(5,v+27);arrowhere(5,position); letter_B(h-10,v+26);letter_A(h-6,v+26);letter_C(h-2,v+26);letter_K(h+2,v+26);//letter_C(h-10,v+26);letter_O(h-6,v+26);letter_N(h-2,v+26);letter_T(h+3,v+26);letter_A(h+7,v+26);letter_C(h+11,v+26);letter_T(h+15,v+26);   letter_L(h+21,v+26);letter_I(h+25,v+26);letter_S(h+26,v+26);letter_T(h+30,v+26);

        keypressed= getch();
        if(keypressed == 13)
        {
            if(position == 1)
            {
                markAsFavorite(current);
                heart(hearth,heartv);

            }
           else  if(position == 2)
            {
                removeFavorite(current);
                eraseheart(hearth,heartv);
            }
            else  if(position == 3)
            {
                editNode(current);
                contactinfo(current,flag);
                break;
            }

            else if(position == 4)
            {
                deleteNode(current);
                if(flag ==1) contactlist();
                else if(flag==2) favouritelist();
                else if(flag==0) MainMenu();
                break;

            }
            else if(position == 5)
            {
                if(flag ==1) contactlist();
                else if(flag==2) favouritelist();
                else if(flag==0) MainMenu();
                break;
            }
        }
        else if(keypressed == 80 && position != 5)
        {
            position++;
        }
        else if(keypressed == 72 && position != 1)
        {
            position--;
        }
        else
        {
            position = position;
        }

    }
}

void contactlist() ///  DISPLAYING CONTACTS
{
    system("cls");
    int h=20,v=10,H=63,V=3;
    box();
    headerbox(50,5,58,2);
    letter_C(H,V);letter_O(H+4,V);letter_N(H+8,V);letter_T(H+13,V);letter_A(H+16,V);letter_C(H+20,V);letter_T(H+24,V);   letter_L(H+30,V);letter_I(H+34,V);letter_S(H+35,V);letter_T(H+39,V);
    int i, j,HorizontalLines=160,x=3,y=v+3;
    for(i=0; i<=HorizontalLines+1; i++)    // MARGIN
    {
        gotoxy(x+i, y);
        printf("%c",29);
        fflush(stdout);
    }
    letter_S(h,v);DOT(h+4,v);   letter_N(h+5,v);letter_O(h+9,v);
    letter_N(h+19,v);letter_A(h+23,v);letter_M(h+27,v);letter_E(h+31,v);letter_S(h+35,v);
    letter_P(h+50,v);letter_H(h+54,v);letter_O(h+58,v);letter_N(h+62,v);letter_E(h+66,v);  letter_N(h+72,v);letter_O(h+76,v); DOT(h+80,v);
    Node *current = head;
    int position = 1,keypressed = 0;
    while (1)
    {
        current = head;
        int count = 1,f = v+5;
        while (current != NULL)
        {
            gotoxy(15,   f); arrowhere(count, position);
            gotoxy(h+4,  f); cout << count ;
            gotoxy(h+25, f); cout <<  current->name ;
            gotoxy(h+58, f); cout << current->phoneNumber;
            if (current->isFavorite)
            {
                cout << "    \3\3\3"; // "\3" is the heart shape to show its favourite
            }
            cout << endl;
            current = current->next;
            count++;
            f+=2;
        }
        if (head == NULL)
        {
            v=17;h=61;
            headerbox(83,11,42,16);
            letter_N(h+4,v);letter_O(h+8,v);   letter_C(h+14,v);letter_O(h+18,v);letter_N(h+22,v);letter_T(h+26,v);letter_A(h+30,v);letter_C(h+34,v);letter_T(h+38,v);letter_S(h+41,v);
            letter_A(h+9,v+6);letter_V(h+13,v+6);letter_A(h+17,v+6);letter_I(h+21,v+6);letter_L(h+22,v+6);letter_A(h+26,v+6);letter_B(h+30,v+6);letter_L(h+34,v+6);letter_E(h+38,v+6);
            f+=10;
        }
        SetColor(14);gotoxy(62,42);cout << "(PRESS \"ESC\" KEY TO GET BACK TO MAIN MENU)";
        keypressed = getch();
        if (keypressed == 13)
        {
            int flag =1;
            current = head;
            for (int i = 1; i < position; i++)
            {
                current = current->next;
            }
            contactinfo(current,flag); // pass the selected node to contactinfo function
            break;
        }
        else if (keypressed == 80 && position != count - 1)  //arrow down
        {
            position++;
        }
        else if (keypressed == 72 && position != 1) //arrow up
        {
            position--;
        }
        else if (keypressed == 27) // 27 is the ASCII value of the ESC key
        {
            MainMenu();
            break;
        }
        else
        {
            position=position;
        }
    }
}
void favouritelist() /// DISPLAYING FAVOURITE CONTACTS
{

    int h=20,v=10,H=63,V=3;
    box();
    headerbox(56,5,58,2);
    letter_F(H,V);letter_A(H+4,V);letter_V(H+8,V);letter_O(H+12,V);letter_U(H+16,V);letter_R(H+20,V);letter_I(H+25,V);letter_T(H+26,V);letter_E(H+29,V);   letter_L(H+36,V);letter_I(H+40,V);letter_S(H+41,V);letter_T(H+45,V);

    int i, j,HorizontalLines=160,x=3,y=v+3;
    for(i=0; i<=HorizontalLines+1; i++)    // MARGIN
    {
        gotoxy(x+i, y);
        printf("%c",29);
        fflush(stdout);
    }
    letter_S(h,v);DOT(h+4,v);   letter_N(h+5,v);letter_O(h+9,v);
    letter_N(h+19,v);letter_A(h+23,v);letter_M(h+27,v);letter_E(h+31,v);letter_S(h+35,v);
    letter_P(h+50,v);letter_H(h+54,v);letter_O(h+58,v);letter_N(h+62,v);letter_E(h+66,v);  letter_N(h+72,v);letter_O(h+76,v); DOT(h+80,v);
    Node *current = head;
    int position = 1,keypressed = 0;
    while (1)
    {
        current = head;
        bool foundFavorite = false;
        int count = 1,f = 15,i=1;
        Node *arr[100];
        while (current != NULL)
        {
            if(current->isFavorite)
            {
                arr[i]=current;
                gotoxy(15,   f); arrowhere(count, position);
                gotoxy(h+4,  f); cout << count ;
                gotoxy(h+25, f); cout <<  current->name ;
                gotoxy(h+58, f); cout << current->phoneNumber;
                foundFavorite = true;
                count++;
                f+=2;
                i++;
            }
            current = current->next;
        }
        if (!foundFavorite)
        {
            v=17;h=61;
            headerbox(83,11,42,16);
            letter_N(h+4,v);letter_O(h+8,v);   letter_F(h+14,v);letter_A(h+18,v);letter_V(h+22,v);letter_O(h+26,v);letter_U(h+30,v);letter_R(h+34,v);letter_I(h+39,v);letter_T(h+40,v);letter_E(h+44,v);
            letter_A(h+9,v+6);letter_V(h+13,v+6);letter_A(h+17,v+6);letter_I(h+21,v+6);letter_L(h+22,v+6);letter_A(h+26,v+6);letter_B(h+30,v+6);letter_L(h+34,v+6);letter_E(h+38,v+6);
            f+=10;
        }
        SetColor(14);gotoxy(62,42);cout << "(PRESS \"ESC\" KEY TO GET BACK TO MAIN MENU)";
        keypressed = getch();
        if (keypressed == 13)
        {
            int flag = 2,i=1;
            current = head;
            for (i = 1; i < position; i++)
            {
                arr[i] = arr[i]->next;
            }
            contactinfo(arr[i],flag); // pass the selected node to contactinfo function
            break;
        }
        else if (keypressed == 80 && position != count - 1)
        {
            position++;
        }
        else if (keypressed == 72 && position != 1)
        {
            position--;
        }
        else if (keypressed == 27) // 27 is the ASCII value of the ESC key
        {
            system("cls");
            MainMenu();
            break;
        }
        else
        {
            position=position;
        }
    }
}
void addcontact()  /// ADDING CONTACTS
{

    system("cls");
    int h=20,v=10,H=63,V=3;
    box();
    headerbox(50,5,58,2);
    letter_A(H,V);letter_D(H+4,V);letter_D(H+8,V);  letter_C(H+12,V);letter_O(H+16,V);letter_N(H+20,V);letter_T(H+25,V);letter_A(H+28,V);letter_C(H+32,V);letter_T(H+36,V);
    headerbox(75,10,45,15);

                gotoxy(69,17);cout << "---> CONTACT INFORMATION <---";
                gotoxy(51,20);cout << "Enter name: ";
                string name;
                getline(cin, name);
                transform(name.begin(), name.end(), name.begin(), ::toupper);
                gotoxy(51,22);cout << "Enter phone number: ";
                string phoneNumber;
                getline(cin, phoneNumber);
                headerbox(35,2,66,29);
                gotoxy(71,30); cout << "Contact ADDED successfully" << endl;
                addNode(name, phoneNumber);
                saveToFile();
                sleep(a);
                system("cls");
}
void searchNode()  ///  SEARCHING CONTACTS
{
    system("cls");
    box();
    int h=20,v=10,H=57,V=3;
    box();
    headerbox(63,5,52,2);

    letter_S(H,V);letter_E(H+4,V);letter_A(H+8,V);letter_R(H+12,V);letter_C(H+17,V);letter_H(H+21,V);    letter_C(H+28,V);letter_O(H+32,V);letter_N(H+36,V);letter_T(H+41,V);letter_A(H+44,V);letter_C(H+48,V);letter_T(H+52,V);

        headerbox(81,10,42,15);
        gotoxy(66,17);cout << "---> SEARCH CONTACT INFORMATION <---";
        gotoxy(48,23);cout << "(ENTER THE EXACT NAME IN CAPITAL LETTER.)";
        gotoxy(48,20);cout << "Enter name: ";
        string name;
        getline(cin, name);

        Node *current = head;
        bool foundFavorite = false;
        while (current != NULL)
        {
            if (current->name == name) // searching contact through name
            {
                foundFavorite = true;
                headerbox(52,4,56,30);
                gotoxy(61,32);cout << "CONTACT FOUND!! DIRECTING TO CONTACT INFO...";
                sleep(a);
                contactinfo(current,0);
                break;

            }
            current = current->next;
        }
        if(!foundFavorite)
        {
            headerbox(52,4,56,30);
            gotoxy(61,32);cout << "CONTACT NOT FOUND!!! ENTER NAME CORRECTLY...";
            sleep(a);
            system("cls");
        }

}
void deleteAllContacts() /// DELETING ALL CONTACTS
{
    system("cls");
    int h=61,v=14;
    box();
    if (head == NULL)
    {
        headerbox(83,22,42,11);
        letter_N(h+4,v+3);letter_O(h+8,v+3);   letter_C(h+14,v+3);letter_O(h+18,v+3);letter_N(h+22,v+3);letter_T(h+27,v+3);letter_A(h+31,v+3);letter_C(h+35,v+3);letter_T(h+39,v+3);letter_S(h+42,v+3);
        letter_A(h+9,v+9);letter_V(h+13,v+9);letter_A(h+17,v+9);letter_I(h+21,v+9);letter_L(h+22,v+9);letter_A(h+26,v+9);letter_B(h+30,v+9);letter_L(h+34,v+9);letter_E(h+38,v+9);
        sleep(a);
        system("cls");
        return;
    }
    Node *current = head;
    while (current != NULL)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }
    head = NULL;
    saveToFile();

    headerbox(83,22,42,11);
    letter_A(h,v);letter_L(h+4,v);letter_L(h+8,v);   letter_C(h+14,v);letter_O(h+18,v);letter_N(h+22,v);letter_T(h+27,v);letter_A(h+31,v);letter_C(h+35,v);letter_T(h+39,v);letter_S(h+42,v);
    letter_D(h+10,v+6);letter_E(h+13,v+6);letter_L(h+17,v+6);letter_E(h+21,v+6);letter_T(h+25,v+6);letter_E(h+28,v+6);letter_D(h+32,v+6);
    letter_S(h,v+12);letter_U(h+4,v+12);letter_C(h+8,v+12);letter_C(h+12,v+12);letter_E(h+16,v+12);letter_S(h+20,v+12);letter_S(h+24,v+12);letter_F(h+28,v+12);letter_U(h+32,v+12);letter_L(h+36,v+12);letter_L(h+39,v+12);letter_Y(h+42,v+12);
    sleep(a);
    system("cls");
}
void about()    /// ABOUT THE APP AND DEVELOPERS
{
    aboutbox();
    char gem = 4 , smile = 1;
    int side=55,down=2;

    gotoxy(10,11); SetColor(11);printf("The basic program was built using C++ programming language. It is a console based application.");
    gotoxy(10,11+2); SetColor(12);printf("The features of the applications are:");
    gotoxy(13,14+2); SetColor(4); printf("1.");SetColor(7); gotoxy(15,14+2); printf(" CONTACT LIST:          It will display all the contacts and one can select contact to access other accessibilities.");
    gotoxy(13,15+2); SetColor(4); printf("2.");SetColor(7); gotoxy(15,15+2); printf(" ADD CONTACT:           One can add contact to the phonebook by entering the name and phone number.");
    gotoxy(13,15+3); SetColor(4); printf("3.");SetColor(7); gotoxy(15,15+3); printf(" SEARCH CONTACT:        One can search contact by entering EXACT name in CAPITAL LETTER.");
    gotoxy(13,15+4); SetColor(4); printf("4.");SetColor(7); gotoxy(15,15+4); printf(" DELETE CONTACT:        One can delete contact by selecting specific contact.");
    gotoxy(13,15+5); SetColor(4); printf("5.");SetColor(7); gotoxy(15,15+5); printf(" EDIT CONTACT:          One can edit contact's name or phone number by selecting that specific contact");


    gotoxy(10,17+6); SetColor(11); printf("Exceptional feature:");SetColor(7); printf("  Contacts can be marked as favourite which can be seen in FAVOURITE LIST and also marked by heart shape in CONTACT LIST");
    gotoxy(30,17+7); SetColor(7); printf("  and another exceptional feature is one can delete all contacts just by accessing DELETE ALL CONTACTS.");

    gotoxy(32,20+2);
    gotoxy(10,21+5); SetColor(10); printf("DEVELOPED BY:");
    gotoxy(15,26+2); SetColor(14); printf("%c" , gem); SetColor(7); printf("  NAME:"); printf("                Adnan Shamim");
    gotoxy(18,28+2); printf("ORGANIZATION:"); printf("        INTERNATIONAL ISLAMIC UNIVERSITY CHITTAGONG (IIUC)");
    gotoxy(18,30+2); printf("METRIC ID:");    printf("           C231118");
    gotoxy(15,32+2); SetColor(14); printf("%c" , gem); SetColor(7); printf("  NAME:"); printf("                Sazzad Hossen Chowdhury");
    gotoxy(18,34+2); printf("ORGANIZATION:"); printf("        INTERNATIONAL ISLAMIC UNIVERSITY CHITTAGONG (IIUC)");
    gotoxy(18,36+2); printf("METRIC ID:");    printf("           C231113");
    gotoxy(15,38+2); SetColor(14); printf("%c" , gem); SetColor(7); printf("  NAME:"); printf("                Arnab Biswas");
    gotoxy(18,40+2); printf("ORGANIZATION:"); printf("        INTERNATIONAL ISLAMIC UNIVERSITY CHITTAGONG (IIUC)");
    gotoxy(18,42+2); printf("METRIC ID:");    printf("           C223089");

    gotoxy(10,50+4); SetColor(15); printf("Created on:  25th of June 2024.");
    gotoxy(10,54+3); printf("This is our first c++ program which was mainly built for our 3rd semester%cs university project.", 39);
    gotoxy(10,57+2); printf("Hope you all appreciate it.");
    gotoxy(10,59+2); printf("REGARDS %c" , smile);
    gotoxy(56,62+2); SetColor(10); printf("(PRESS %cESC%c TO GO BACK)", 34,34);
    gotoxy(35,64+2); SetColor(14); printf("--------------------------------XXX--------------------------");
    boldletter_A(side,down);boldletter_B(side+10,down);boldletter_O(side+20,down);boldletter_U(side+30,down);boldletter_T(side+40,down);
    gotoxy(10,0);SetColor(9);printf("%c", 196);
    while(1)
    {
        int keypressed =0;
        keypressed = getch();
        if (keypressed == 27) // 27 is the ASCII value of the ESC key
        {
            MainMenu();
            break;
        }
    }
}

void loadFromFile() /// TAKING INFORMATION FROM FILE
{
    ifstream file("contacts.txt"); // opening file to read
    string line;

    while (getline(file, line)) // intializing every line of file in a string called "line".
    {
        size_t commaPos1 = line.find(',');
        size_t commaPos2 = line.find(',', commaPos1 + 1);
        string name = line.substr(0, commaPos1);
        string phoneNumber = line.substr(commaPos1 + 1, commaPos2 - commaPos1 - 1);
        string favoriteStr = line.substr(commaPos2 + 1);
        bool isFavorite = (favoriteStr == "1");

        addNode(name, phoneNumber); // adding informations to node from the file
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->isFavorite = isFavorite;
    }

    file.close();
}
void MainMenu()    ///   MAIN MENU
{
    system("cls");
    box();
    int position = 1,keypressed = 0;
    string name,phoneNumber;
    while(1)
    {
        if(z==1) break;
        gotoxy(45,11);arrowhere(1,position);letter_C(60,10);letter_O(64,10);letter_N(68,10);letter_T(73,10);letter_A(76,10);letter_C(80,10);letter_T(84,10);   letter_L(90,10);letter_I(94,10);letter_S(95,10);letter_T(99,10);
        gotoxy(45,11+3);arrowhere(2,position); letter_F(60,13);letter_A(64,13);letter_V(68,13);letter_O(72,13);letter_U(76,13);letter_R(80,13);letter_I(85,13);letter_T(86,13);letter_E(89,13);   letter_L(95,13);letter_I(99,13);letter_S(100,13);letter_T(104,13);
        gotoxy(45,11+6);arrowhere(3,position); letter_A(60,16);letter_D(64,16);letter_D(68,16);  letter_C(74,16);letter_O(78,16);letter_N(82,16);letter_T(87,16);letter_A(90,16);letter_C(94,16);letter_T(98,16);
        gotoxy(45,11+9);arrowhere(4,position); letter_S(60,19);letter_E(64,19);letter_A(68,19);letter_R(72,19);letter_C(77,19);letter_H(81,19);    letter_C(88,19);letter_O(92,19);letter_N(96,19);letter_T(101,19);letter_A(104,19);letter_C(108,19);letter_T(112,19);
        gotoxy(45,11+12); arrowhere(5,position);  letter_D(60,22);letter_E(63,22);letter_L(67,22);letter_E(71,22);letter_T(75,22);letter_E(78,22);   letter_A(84,22);letter_L(88,22);letter_L(92,22);   letter_C(98,22);letter_O(102,22);letter_N(106,22);letter_T(111,22);letter_A(114,22);letter_C(118,22);letter_T(122,22);
        gotoxy(45,11+15);arrowhere(6,position); letter_A(60,25);letter_B(64,25);letter_O(68,25);letter_U(72,25);letter_T(76,25);
        gotoxy(45,11+18);arrowhere(7,position); letter_E(60,28);letter_X(64,28);letter_I(67,28);letter_T(69,28);
        if(kbhit())
        {
            keypressed= getch();
            if(keypressed == 13)
            {
                if(position == 1)
                {
                    contactlist();
                    break;
                }
                else  if(position == 2)
                {
                    favouritelist();
                    break;
                }
                else  if(position == 3)
                {
                    addcontact();
                }
                else if(position == 4)
                {
                    searchNode();
                }
                else if(position == 5)
                {
                    deleteAllContacts();
                }
                else if(position == 6)
                {
                    about();
                    break;
                }
                else if(position == 7)
                {
                    system("cls");
                    int exitdown = 16,exitside=25;
                    SetColor(11);
                    gotoxy(exitside,exitdown-2);printf("THANKS FOR USING THE APP!!!...");
                    boldletter_G(exitside,exitdown);boldletter_O(exitside+10,exitdown);boldletter_O(exitside+20,exitdown);boldletter_D(exitside+30,exitdown);boldletter_B(exitside+50,exitdown);boldletter_Y(exitside+60,exitdown);boldletter_E(exitside+70,exitdown);
                    exclamation(exitside+80,exitdown);exclamation(exitside+85,exitdown);exclamation(exitside+90,exitdown);
                    SetColor(2);gotoxy(exitside,exitdown+20);printf("PRESS ANY 'KEY' TO EXIT THE CONSOLE...");
                    getch();
                    z=1;
                    system("cls");

                    break;
                }
            }
            else if(keypressed == 80 && position != 7)
            {
                position++;
            }
            else if(keypressed == 72 && position != 1)
            {
                position--;
            }
            else
            {
                position = position;
            }
        }
    }
}
int main()
{
    MaximizeOutputWindow();
    hidecursor();
    PHONEBOOK();
    loadFromFile();
    MainMenu();
    return 0;
}



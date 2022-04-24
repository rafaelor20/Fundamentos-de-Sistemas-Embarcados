/*
References: 
http://en.wikipedia.org/wiki/Morse_code
A   .-
B   -...
C   -.-.
D   -..
E   .
F   ..-.
G   --.
H   ....
I   ..
J   .---
K   -.-
L   .-..
M   --
N   -.
O   ---
P   .--.
Q   --.-
R   .-.
S   ...
T   -
U   ..-
V   ...-
W   .--
X   -..-
Y   -.--
Z   --..
0    -----
1   .----
2   ..---
3   ...--
4   ....-
5   .....
6   -....
7   --...
8   ---..
9   ----.
Fullstop   .-.-.-
Comma   --..--
Query   ..--..
Space /
Period [.]  · - · - · -
Comma [,]   - - · · - -
Question mark [?]   · · - - · ·
Apostrophe [']  · - - - - ·
Exclamation mark [!]    - · - · - -
Slash [/]   - · · - ·
Parentheses ( )     - · - - · -
Ampersand [&]   · ···
Colon [:]   - - - · · ·
Semicolon [;]   - · - · - ·
Double dash [=]     - · · · -
Fraction bar    - · · - ·
Hyphen [-]  - · · · · -
Underscore [_]  · · - - · -
Quotation mark ["]  · - · · - ·
"@" (commat)    · - - · - ·
*/

/*  */

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>

void main()
{
        char str[25],str1[100];

        fflush(stdin);
        printf("Enter any String to Convert into Morse Code :: ");
        gets(str);
        char temp;
        int j=0;
        for(int i=0;i<=strlen(str);i++)
        {
                temp = str[i];
                switch(temp)
                //switch(str[i])
                //{
                //case /* constant-expression */:
                  /* code */
                  //break;
                
                //default:
                  //break;
                //}
                {
                  case 'a':
                  str1[j++]='.';
                  str1[j]='-';
                  break;

                  case 'b':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                  break;

                  case 'c':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                  break;

                  case 'd':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                  break;

                  case 'e':
                  str1[j]='.';
                  break;

                  case 'f':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                  case 'g':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='.';
                  break;

                  case 'h':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                  case 'i':
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                  case 'j':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                  case 'k':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                  case 'l':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                  break;

                  case 'm':
                  str1[j++]='-';
                    str1[j]='-';
                    break;

                  case 'n':
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case 'o':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'p':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case 'q':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'r':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case 's':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case 't':
                  str1[j]='-';
                    break;

                case 'u':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'v':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'w':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'x':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'y':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'z':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                    break;


                  case 'A':
                  str1[j++]='.';
                  str1[j]='-';
                  break;

                  case 'B':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                  break;

                  case 'C':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                  break;

                  case 'D':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                  break;

                  case 'E':
                  str1[j]='.';
                  break;

                  case 'F':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                  case 'G':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='.';
                  break;

                  case 'H':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                   case 'I':
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case 'J':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'K':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'L':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                  break;

                case 'M':
                  str1[j++]='-';
                    str1[j]='-';
                    break;

                case 'N':
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case 'O':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'P':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case 'Q':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'R':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case 'S':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case 'T':
                  str1[j]='-';
                    break;

                case 'U':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'V':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'W':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'X':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'Y':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'Z':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '0':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case '1':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case '2':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case '3':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case '4':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case '5':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '6':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '7':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '8':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '9':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '.':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case ',':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case ':':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '?':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                    break;


                case '-':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case ';':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '"':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '+':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '/':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '&':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '$':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;


                case '@':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '=':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

        case ' ':
                  str1[j]=' ';
                    break;
                }
            j++;
        }
        str1[j-1]='\0';
        puts(str1);
        getch();
 }
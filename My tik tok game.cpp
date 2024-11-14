#include<iostream>
#include<stdlib.h>
using namespace std;
char s[10]={'0','1','2','3','4','5','6','7','8','9'};
int cheakwin();
void board();
int main()
{
    int player=1, i, choise;
    char mark;
    do
    {
        board();
        cout<<"Player : "<<player<<" chose a number - ";
        cin>>choise;
        mark=(player==1)? 'X' : '0';
        player=(player==1)?2:1;
        if(s[1]=='1' && choise==1)
            s[1]=mark;
        else if(s[2]=='2' && choise==2)
            s[2]=mark;
        else if(s[3]=='3' && choise==3)
            s[3]=mark;
        else if(s[4]=='4' && choise==4)
            s[4]=mark;
        else if(s[5]=='5' && choise==5)
            s[5]=mark;
        else if(s[6]=='6' && choise==6)
            s[6]=mark;
        else if(s[7]=='7' && choise==7)
            s[7]=mark;
        else if(s[8]=='8' && choise==8)
            s[8]=mark;
        else if(s[9]=='9' && choise==9)
            s[9]=mark;
        else{
            cout<<"invalid value"<<endl;
            player=(player==1)?1:2;
            }
        i=cheakwin();
    }
    while(i==-1);
    player=(player==1)?2:1;
    board();
    if(i==1)
        cout<<"player  "<<player<<"  Win  ."<<endl;
    else
        cout<<"Game draw"<<endl;

    return 0;
}
void board()
{
    cout<< "\t Tik Tok Game\n\n";
    cout<< "Player(1)-X          Player(2)-)\n"<<endl;
    cout<< "          |     |     \n";
    cout<< "       "<<s[1]<<"  |  "<<s[2]<< "  |  "<<s[3]<<endl;
    cout<< "      ____|_____|_____\n";
    cout<< "          |     |     \n";
    cout<< "       "<<s[4]<<"  |  "<<s[5]<< "  |  "<<s[6]<<endl;
    cout<< "      ____|_____|_____\n";
    cout<< "          |     |     \n";
    cout<< "       "<<s[7]<<"  |  "<<s[8]<< "  |  "<<s[9]<<endl;
    cout<< "          |     |     \n\n\n\n";
}

int cheakwin()
{
    system("cls");
	if (s[1] == s[2] && s[2] == s[3])
		return 1;
	else if (s[4] == s[5] && s[5] == s[6])
		return 1;
	else if (s[7] == s[8] && s[8] == s[9])
		return 1;
	else if (s[1] == s[4] && s[4] == s[7])
		return 1;
	else if (s[2] == s[5] && s[5] == s[8])
		return 1;
	else if (s[3] == s[6] && s[6] == s[9])
		return 1;
	else if (s[1] == s[5] && s[5] == s[9])
		return 1;
	else if (s[3] == s[5] && s[5] == s[7])
		return 1;
	else if (s[1] != '1' && s[2] != '2' && s[3] != '3' && s[4] != '4' && s[5] != '5' && s[6] != '6' && s[7] != '7' && s[8] != '8' && s[9] != '9')
		return 0;
	else
		return -1;
}




























































































#include <bits/stdc++.h>
using namespace std;


int checkwinner(char *blank, int n);
void board(char *blank, int n);
void play(char *blank, int n);


int main()
{
	playagain:
	char blank[] = {'o','1','2','3','4','5','6','7','8','9'};
   	play(blank,10);
   	char binh;
	cout <<"\nYou want to play again(Y/N): ";fflush(stdin);
	cin >> binh;
	if(binh == 'Y' || binh=='y'){
	
		goto playagain;
	}else
		cout <<"\n Have A good day!!" << endl;
    return 0;
}

void play(char *blank, int n)
{
	int tick;
	int number,i;
	int res;
    char s1;
	char s2;
	cout <<"\n1. X";
	cout <<"\n2. O";
    cout <<"\nchoice X or O: ";
    cin >> res;
    do
    {
	    if(res==1){
	    	s1 = 'X';
		}else
			s1 = 'O';
		
        board(blank,n);
        cout << "You enter a number:  ";
        cin >> number;
		switch(number)
		{
			case 1:
			{
				if (blank[1] == '1' && res ==1){
					blank[1] = s1;
					res=2;
				}
				else if(blank[1] == '1' && res ==2){
					blank[1] = s1;
					res=1;
				}
			}break;
			case 2:
			{
				if (blank[2] == '2' && res ==1){
					blank[2] = s1;
					res=2;
				}
				else if(blank[2] == '2' && res ==2){
					blank[2] = s1;
					res=1;
				}
			}break;
			case 3:
			{
				if (blank[3] == '3' && res ==1){
					blank[3] = s1;
					res=2;
				}
				else if(blank[3] == '3' && res ==2){
					blank[3] = s1;
					res=1;
				}
			}break;
			case 4:
			{
				if (blank[4] == '4' && res ==1){
					blank[4] = s1;
					res=2;
				}
				else if(blank[4] == '4' && res ==2){
					blank[4] = s1;
					res=1;
				}
			}break; 
			case 5:
			{
				if (blank[5] == '5' && res ==1){
					blank[5] = s1;
					res=2;
				}
				else if(blank[5] == '5' && res ==2){
					blank[5] = s1;
					res=1;
				}
			}break;
			case 6:
			{
				if (blank[6] == '6' && res ==1){
					blank[6] = s1;
					res=2;
				}
				else if(blank[6] == '6' && res ==2){
					blank[6] = s1;
					res=1;
				}
			}break;
			case 7:
			{
				if (blank[7] == '7' && res ==1){
					blank[7] = s1;
					res=2;
				}
				else if(blank[7] == '7' && res ==2){
					blank[7] = s1;
					res=1;
				}
			}break;
			case 8:
			{
				if (blank[8] == '8' && res ==1){
					blank[8] = s1;
					res=2;
				}
				else if(blank[8] == '8' && res ==2){
					blank[8] = s1;
					res=1;
				}
			}break;
			case 9:
			{
				if (blank[9] == '9' && res ==1){
					blank[9] = s1;
					res=2;
				}
				else if(blank[9] == '9' && res ==2){
					blank[9] = s1;
					res=1;
				}
			}break;
			default:
				cout<<"Invalid move ";
	           	cin.ignore();
	           	cin.get();
	    }
        i=checkwinner(blank,n);
    }while(i==-1);
    board(blank,n);
    if(i==1){
         cout<<"==>\aWINNER is  " << s1  << "!!! Congratulation! "<< endl;
    }else{
		cout<<"==>\aDRAW ";
	}
	cout<<"\n==>\aGAME OVER";
    cin.ignore();
    cin.get();
    system("pause");
}

int checkwinner(char *blank, int n)
{
    if (blank[1] == blank[2] && blank[2] == blank[3])
        return 1;
    else if (blank[4] == blank[5] && blank[5] == blank[6])
        return 1;
    else if (blank[7] == blank[8] && blank[8] == blank[9])
        return 1;
    else if (blank[1] == blank[4] && blank[4] == blank[7])
        return 1;
    else if (blank[2] == blank[5] && blank[5] == blank[8])
        return 1;
    else if (blank[3] == blank[6] && blank[6] == blank[9])
        return 1;
    else if (blank[1] == blank[5] && blank[5] == blank[9])
        return 1;
    else if (blank[3] == blank[5] && blank[5] == blank[7])
        return 1;
    else if (blank[1] != '1' && blank[2] != '2' && blank[3] != '3' 
            && blank[4] != '4' && blank[5] != '5' && blank[6] != '6' 
            && blank[7] != '7' && blank[8] != '8' && blank[9] != '9')
        return 0;
    else
        return -1;
}


void board(char *blank, int n)
{
    system("cls");
    cout << "\tTic Tac Toe\n";
	cout << "\tGAME OF ME\n\n";
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << blank[1] << "  |  " << blank[2] << "  |  " << blank[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << blank[4] << "  |  " << blank[5] << "  |  " << blank[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << blank[7] << "  |  " << blank[8] << "  |  " << blank[9] << endl;
    cout << "     |     |     " << endl << endl;
}


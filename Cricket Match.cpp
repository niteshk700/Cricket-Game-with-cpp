#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//--------------------------------------------------------
string textinput;
int input;
int loss;
string team[2];
int teamscore[2][3]; // run,wicket,over;
int score[8] = {1, 0, 1, 2, 4, 6, 1, 1};
int bowl;

//--------------------------------------------------------
void startgame();
void play();
void playmenu();
void other(int toss, int loss);

void scoreboard(int toss, int loss);

void startgame()
{system("CLS");
system("Color 70");
	int toss = rand() % 2;
	if (toss == 1)
	{
		loss = 0;
	}
	else
	{
		loss = 1;
	}
	cout << "Toss Won > " << team[toss] << endl;
	cout << "Batting : " << team[toss] << " | Bowling : " << team[loss];
	scoreboard(toss, loss);
}
void play()
{system("CLS");
system("Color 70");
	while (input != 2)
	{
		cout << "Welcome to ICC Hackacton" << endl;
		cout << "1. Play" << endl;
		cout << "2. Exit" << endl;
		cin >> input;
		switch (input)
		{
		case 1:
			playmenu();
			break;
		case 2:
			exit(0);
			break;
		}
	}
}
void createteam()
{teamscore[0][0]=0;
 teamscore[0][1]=0;
 teamscore[0][2]=0;
 teamscore[1][0]=0;
 teamscore[1][1]=0;
 teamscore[1][2]=0;
 system("CLS");
 system("Color 70");
	cout << "Team A >";
	cin >> team[0];
	cout << "Team B >";
	cin >> team[1];
}
void playmenu()
{system("CLS");
	while (input != 3)
	{
		cout << "Get Ready to Play" << endl;
		cout << "1. Create Team and Play" << endl;
		cout << "2. Main Menu" << endl;
		cin >> input;
		switch (input)
		{
		case 1:system("CLS");
			createteam();
			cout << "Do you want to change name (Y or N) > ";
			cin >> textinput;
			if (textinput == "Y" || textinput == "y")
			{
				createteam();
			}
			else
			{
				startgame();
			}
			startgame();
			cout << endl;

		case 2:
			play();
			break;
		default:
			cout << "Invalid Choose..";
		}
	}
}

int main()
{
	while (input != 2)
	{system("CLS");
	system("Color 70");
		cout << "Welcome to ICC Hackacton" << endl;
		cout << "1. Play" << endl;
		cout << "2. Exit" << endl;
		cin >> input;
		switch (input)
		{
		case 1:
			playmenu();
			break;
		case 2:
			exit(0);
			break;
		}
	}
}

void scoreboard(int toss, int loss)
{
	int over;
	while (over != 1)
	{
		system("CLS");
		system("Color A0");
		cout << team[toss] << " Score > " << teamscore[toss][0] << " / " << teamscore[toss][1] << "  | Over > " << teamscore[toss][2]/6<<"."<<teamscore[toss][2]%6 << endl;
		
		

		for(int i=1;i<rand()%29;i++){	
		bowl = rand() % 6;}
		if (bowl == 5)
		{
			cout << "Out" << endl;
			teamscore[toss][1] += 1;
			teamscore[toss][2] += 1;
			cout << "Press any key to continue.."<<endl;
			getch();
		}
		else if (bowl == 0)
		{
			cout << "No Ball" << endl;
			teamscore[toss][0] += 1;
			cout << "Press any key to continue.."<<endl;
			getch();
		}
		else
		{
			teamscore[toss][0] += score[bowl];
			teamscore[toss][2] += 1;
			cout<<score[bowl]<<endl;
			cout << "Press any key to continue.."<<endl;
			getch();
		}

		


	if (teamscore[toss][1] == 10 || teamscore[toss][2] == 30)
	{	system("CLS");
	
		cout << team[toss] << " Score > " << teamscore[toss][0] << " / " << teamscore[toss][1] << "  | Over > " << teamscore[toss][2]/6<<"."<<teamscore[toss][2]%6  << endl;
		cout << "Game Over" << endl;
		getch();
		other(toss, loss);
		
		break;
	}
}	}

void other(int toss, int loss)
{
	int over;
	while (over != 1)
	{
		system("CLS");
		cout << team[loss] << " Score > " << teamscore[loss][0] << " / " << teamscore[loss][1] << "  | Over > " << teamscore[loss][2]/6<<"."<<teamscore[loss][2]%6  << endl;
		
		
		for(int i=1;i<rand()%29;i++){	
		bowl = rand() % 6;}
		if (bowl == 5)
		{
			cout << "Out" << endl;
			teamscore[loss][1] += 1;
			teamscore[loss][2] += 1;
			cout << "Press any key to continue.."<<endl;
			getch();
		}
		else if (bowl == 0)
		{
			cout << "No Ball" << endl;
			teamscore[loss][0] += 1;
			cout << "Press any key to continue.."<<endl;
			getch();
		}
		else
		{
			teamscore[loss][0] += score[bowl];
			teamscore[loss][2] += 1;
			cout<<score[bowl]<<endl;
			cout << "Press any key to continue.."<<endl;
			getch();
		}

		

		if (teamscore[toss][0] < teamscore[loss][0])
		{system("CLS");
			cout << team[toss] << " Score > " << teamscore[toss][0] << " / " << teamscore[toss][1] << "  | Over > " << teamscore[toss][2]/6<<"."<<teamscore[toss][2]%6 << endl;
			cout << team[loss] << " Score > " << teamscore[loss][0] << " / " << teamscore[loss][1] << "  | Over > " << teamscore[loss][2]/6<<"."<<teamscore[loss][2]%6 << endl;
			cout << "Winner : " << team[loss]<<endl;
			getch();
			play();
			break;
		}
		else if (teamscore[loss][1] == 10 || teamscore[loss][2] == 30)
		{system("CLS");
			cout << team[toss] << " Score > " << teamscore[toss][0] << " / " << teamscore[toss][1] << "  | Over > " << teamscore[toss][2]/6<<"."<<teamscore[toss][2]%6 << endl;
			cout << team[loss] << " Score > " << teamscore[loss][0] << " / " << teamscore[loss][1] << "  | Over > " << teamscore[loss][2]/6<<"."<<teamscore[loss][2]%6 << endl;
			cout << "Winner : " << team[toss]<<endl;
			getch();
			play();
			break;
		}
	}
}
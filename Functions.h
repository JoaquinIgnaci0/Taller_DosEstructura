#include "GameVariables.h"
#include "minimax.h"
#include <string>
using namespace std;

void newGame(char [ROWS][COLUMNS]);
int PlayCPU(char [ROWS][COLUMNS],int,char);
int PlayPlayer(char [ROWS][COLUMNS],int, char);
void mainMenu();
void SelectDifficulty(int *);
void ScreenScore();
void PlayWithCPU();
void PlayerVsPlayer();
void CopyName(char *, char *);
void SeeScores(std::string player[30], int points[30]);
void NewScore(int ,int );

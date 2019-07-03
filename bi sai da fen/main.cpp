#include<iostream>
#include<fstream>
#include<algorithm>
#define S_NUMBER 5
#define F_NUMBER 5
using namespace std;
struct student{
    char name[10];
    char acdemy[10];
    char sex[10];
    char number[10];
    int score_1;
    int score_2;
    int score_3;
    int score_4;
    int score_5;
    int final_score;
};
struct referee{
    char name[10];
    char sex[10];
    char number[10];
    char mobile_number[11];
};
int main( )
{
    student student[S_NUMBER];
    referee referee[F_NUMBER];
    ifstream player_information("/Users/s20181102932/Desktop/选手信息.txt");
    int i=0;
    for(i=0;i<S_NUMBER;i++)
    {
        player_information>>student[i].number>>student[i].name>>student[i].sex>>student[i].acdemy;
    }
    ifstream referee_information("/Users/s20181102932/Desktop/裁判信息表.txt");
    for(i=0;i<F_NUMBER;i++)
    {
        referee_information>>referee[i].number>>referee[i].name>>referee[i].sex>>referee[i].mobile_number;
    }
    ifstream score_information("/Users/s20181102932/Desktop/裁判打分表.txt");
    for(i=0;i<S_NUMBER;i++)
    {
        score_information>>student[i].score_1>>student[i].score_2>>student[i].score_3>>student[i].score_4>>student[i].score_5;
    }
    return 0;
}

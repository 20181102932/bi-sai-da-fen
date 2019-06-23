#include<iostream>
#include<fstream>
using namespace std;
struct student{
    char number[10];
    char academy[10];
    char name [10];
    int score[7];
    int average;
    int rank;
};
struct referee{
    char name[10];
    double first;
    double second;
    double third;
    double forth;
    double fifth;
    double sixth;
    double seventh;
    double eighth;
    double ninth;
    double tenth;
};
int main()
{
    int number;
    ifstream a{"/Users/s20181102932/Desktop/参赛选手人数.txt"};
    a>>number;
    student student[number];
    ifstream b("/Users/s20181102932/Desktop/选手信息.txt");
    int c=0;
    for(c=0;c<number;c++)
    {
        b>>student[c].number>>student[c].academy>>student[c].name;
    }
    referee referee[7];
    ifstream d("/Users/s20181102932/Desktop/裁判打分表.txt");
    for(c=0;c<7;c++)
{
    d>>referee[c].name>>referee[c].first>>referee[c].second>>referee[c].third>>referee[c].forth>>referee[c].fifth>>referee[c].sixth>>referee[c].seventh>>referee[c].eighth>>referee[c].ninth>>referee[c].tenth;
    }
    int e=0;
    int f=0;
    int g=0;
    int score1[6]={0};
    int score2[6]={0};
    int score3[6]={0};
    int score4[6]={0};
    int score5[6]={0};
    int score6[6]={0};
    int score7[6]={0};
    int score8[6]={0};
    int score9[6]={0};
    int score10[6]={0};
    int ave=0;
    int sum=0;
    for(e=0;e<number;e++)
    {
        for(f=0;f<7;f++)
        {
           if(e==0)
           {
               for(g=0;g<7;g++)
               {
                   score1[g]=referee[g].first;
               }
           }
            if(e==1)
            {
                for(g=0;g<7;g++)
                {
                    score2[g]=referee[g].second;
                }
            }
            if(e==2)
            {
                for(g=0;g<7;g++)
                {
                    score3[g]=referee[g].third;
                }
            }
            if(e==3)
            {
                for(g=0;g<7;g++)
                {
                    score4[g]=referee[g].forth;
                }
            }
            if(e==4)
            {
                for(g=0;g<7;g++)
                {
                    score5[g]=referee[g].fifth;
                }
            }
            if(e==5)
            {
                for(g=0;g<7;g++)
                {
                    score6[g]=referee[g].sixth;
                }
            }
            if(e==6)
            {
                for(g=0;g<7;g++)
                {
                    score7[g]=referee[g].seventh;
                }
            }
            if(e==7)
            {
                for(g=0;g<7;g++)
                {
                    score8[g]=referee[g].eighth;
                }
            }
            if(e==8)
            {
                for(g=0;g<7;g++)
                {
                    score9[g]=referee[g].ninth;
                }
            }
            if(e==9)
            {
                for(g=0;g<7;g++)
                {
                    score10[g]=referee[g].tenth;
                }
            }
        }
    }
    

    return 0;
}

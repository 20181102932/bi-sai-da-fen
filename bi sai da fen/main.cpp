#include<iostream>
#include<fstream>
#include<algorithm>
#define S_NUMBER 10
using namespace std;
struct student{
    char number[10];
    char academy[10];
    char name [10];
    int score[7];
    double average;
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
    student student[S_NUMBER];
    ifstream information("/Users/s20181102932/Desktop/选手信息.txt");
    int c=0;
    for(c=0;c<S_NUMBER;c++)
    {
        information>>student[c].number>>student[c].academy>>student[c].name;
    }
    referee referee[7];
    ifstream table("/Users/s20181102932/Desktop/裁判打分表.txt");
    for(c=0;c<7;c++)
    {
if(S_NUMBER==10)table>>referee[c].name>>referee[c].first>>referee[c].second>>referee[c].third>>referee[c].forth>>referee[c].fifth>>referee[c].sixth>>referee[c].seventh>>referee[c].eighth>>referee[c].ninth>>referee[c].tenth;
if(S_NUMBER==9) table>>referee[c].name>>referee[c].first>>referee[c].second>>referee[c].third>>referee[c].forth>>referee[c].fifth>>referee[c].sixth>>referee[c].seventh>>referee[c].eighth>>referee[c].ninth;
if(S_NUMBER==8) table>>referee[c].name>>referee[c].first>>referee[c].second>>referee[c].third>>referee[c].forth>>referee[c].fifth>>referee[c].sixth>>referee[c].seventh>>referee[c].eighth;
if(S_NUMBER==7) table>>referee[c].name>>referee[c].first>>referee[c].second>>referee[c].third>>referee[c].forth>>referee[c].fifth>>referee[c].sixth>>referee[c].seventh;
if(S_NUMBER==6) table>>referee[c].name>>referee[c].first>>referee[c].second>>referee[c].third>>referee[c].forth>>referee[c].fifth>>referee[c].sixth;
if(S_NUMBER==5) table>>referee[c].name>>referee[c].first>>referee[c].second>>referee[c].third>>referee[c].forth>>referee[c].fifth;
if(S_NUMBER==4) table>>referee[c].name>>referee[c].first>>referee[c].second>>referee[c].third>>referee[c].forth;
if(S_NUMBER==3) table>>referee[c].name>>referee[c].first>>referee[c].second>>referee[c].third;
if(S_NUMBER==2) table>>referee[c].name>>referee[c].first>>referee[c].second;
if(S_NUMBER==1) table>>referee[c].name>>referee[c].first;
    }
    int i=0;
    int j=0;
    int k=0;
    int score1[7]={0};
    int score2[7]={0};
    int score3[7]={0};
    int score4[7]={0};
    int score5[7]={0};
    int score6[7]={0};
    int score7[7]={0};
    int score8[7]={0};
    int score9[7]={0};
    int score10[7]={0};
    for(i=0;i<S_NUMBER;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==0)
            {
                for(k=0;k<7;k++)
                {
                    score1[k]=referee[k].first;
                }
            }
            if(i==1)
            {
                for(k=0;k<7;k++)
                {
                    score2[k]=referee[k].second;
                }
            }
            if(i==2)
            {
                for(k=0;k<7;k++)
                {
                    score3[k]=referee[k].third;
                }
            }
            if(i==3)
            {
                for(k=0;k<7;k++)
                {
                    score4[k]=referee[k].forth;
                }
            }
            if(i==4)
            {
                for(k=0;k<7;k++)
                {
                    score5[k]=referee[k].fifth;
                }
            }
            if(i==5)
            {
                for(k=0;k<7;k++)
                {
                    score6[k]=referee[k].sixth;
                }
            }
            if(i==6)
            {
                for(k=0;k<7;k++)
                {
                    score7[k]=referee[k].seventh;
                }
            }
            if(i==7)
            {
                for(k=0;k<7;k++)
                {
                    score8[k]=referee[k].eighth;
                }
            }
            if(i==8)
            {
                for(k=0;k<7;k++)
                {
                    score9[k]=referee[k].ninth;
                }
            }
            if(i==9)
            {
                for(k=0;k<7;k++)
                {
                    score10[k]=referee[k].tenth;
                }
            }
        }
    }
    sort(score1,score1+7);
    sort(score2,score2+7);
    sort(score3,score3+7);
    sort(score4,score4+7);
    sort(score5,score5+7);
    sort(score6,score6+7);
    sort(score7,score7+7);
    sort(score8,score8+7);
    sort(score9,score9+7);
    sort(score10,score10+7);
    score1[0]=0;score1[6]=0;
    score2[0]=0;score2[6]=0;
    score3[0]=0;score3[6]=0;
    score4[0]=0;score4[6]=0;
    score5[0]=0;score5[6]=0;
    score6[0]=0;score6[6]=0;
    score7[0]=0;score7[6]=0;
    score8[0]=0;score8[6]=0;
    score9[0]=0;score9[6]=0;
    score10[0]=0;score10[6]=0;
    double ave[10];
    double sum[10];
    sum[0]=score1[1]+score1[2]+score1[3]+score1[4]+score1[5];
    sum[1]=score2[1]+score2[2]+score2[3]+score2[4]+score2[5];
    sum[2]=score3[1]+score3[2]+score3[3]+score3[4]+score3[5];
    sum[3]=score4[1]+score4[2]+score4[3]+score4[4]+score4[5];
    sum[4]=score5[1]+score5[2]+score5[3]+score5[4]+score5[5];
    sum[5]=score6[1]+score6[2]+score6[3]+score6[4]+score6[5];
    sum[6]=score7[1]+score7[2]+score7[3]+score7[4]+score7[5];
    sum[7]=score8[1]+score8[2]+score8[3]+score8[4]+score8[5];
    sum[8]=score9[1]+score9[2]+score9[3]+score9[4]+score9[5];
    sum[9]=score10[1]+score10[2]+score10[3]+score10[4]+score10[5]+score10[6]+score10[0];
    for(i=0;i<10;i++)
    {
        ave[i]=sum[i]/5;
        student[i].average=ave[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if (ave[j]<ave[j+1])
            {
                double mid=ave[j];
                ave[j]=ave[j+1];
                ave[j+1]=mid;
            }
        }
    }
    ofstream output("/Users/s20181102932/Desktop/比赛结果.txt");
    k=0;
    for(i=0;i<S_NUMBER;i++)
    {
        for(j=0;j<S_NUMBER;j++)
        {
            if(ave[i]==student[j].average)
            {
                output<<"第"<<i+1<<"名"<<"     "<<"来自"<<student[j].academy<<"的"<<student[j].name<<"平均分为"<<ave[i]<<endl<<endl;
                if(j==0)
                {
                    for(k=0;k<7;k++)
                    {
                        output<<referee[k].name<<" "<<referee[k].first<<" ";
                    }
                    output<<endl;
                }
                if(j==1)
                {
                    for(k=0;k<7;k++)
                    {
                        output<<referee[k].name<<" "<<referee[k].second<<" ";
                    }
                    output<<endl;
                }
                if(j==2)
                {
                    for(k=0;k<7;k++)
                    {
                        output<<referee[k].name<<" "<<referee[k].third<<" ";
                    }
                    output<<endl;
                }
                if(j==3)
                {
                    for(k=0;k<7;k++)
                    {
                        output<<referee[k].name<<" "<<referee[k].forth<<" ";
                    }
                    output<<endl;
                }
                if(j==4)
                {
                    for(k=0;k<7;k++)
                    {
                        output<<referee[k].name<<" "<<referee[k].fifth<<" ";
                    }
                    output<<endl;
                }
                if(j==5)
                {
                    for(k=0;k<7;k++)
                    {
                        output<<referee[k].name<<" "<<referee[k].sixth<<" ";
                    }
                    output<<endl;
                }
                if(j==6)
                {
                    for(k=0;k<7;k++)
                    {
                        output<<referee[k].name<<" "<<referee[k].seventh<<" ";
                    }
                    output<<endl;
                }
                if(j==7)
                {
                    for(k=0;k<7;k++)
                    {
                        output<<referee[k].name<<" "<<referee[k].eighth<<" ";
                    }
                    output<<endl;
                }
                if(j==8)
                {
                    for(k=0;k<7;k++)
                    {
                        output<<referee[k].name<<" "<<referee[k].ninth<<" ";
                    }
                    output<<endl;
                }
                if(j==9)
                {
                    for(k=0;k<7;k++)
                    {
                        output<<referee[k].name<<" "<<referee[k].tenth<<" ";
                    }
                    output<<endl;
                }
                output<<endl;
            }
        }
    }
    return 0;
}

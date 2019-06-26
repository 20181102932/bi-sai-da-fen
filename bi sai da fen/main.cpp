#include<iostream>
#include<fstream>
using namespace std;
struct student{
    char number[10];
    char academy[10];
    char name [10];
    int score[7];
    double average;
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
    for(e=0;e<6;e++)
    {
        for(f=0;f<6;f++)
        {
            if(score1[f]>score1[f+1])
            {
                g=score1[f];
                score1[f]=score1[f+1];
                score1[f+1]=g;
            }
        }
    }
    
    for(e=0;e<8;e++)
    {
        for(f=0;f<8;f++)
        {
            if(score2[f]>score2[f+1])
            {
                g=score2[f];
                score2[f]=score2[f+1];
                score2[f+1]=g;
            }
        }
    }
    for(e=0;e<8;e++)
    {
        for(f=0;f<8;f++)
        {
            if(score3[f]>score3[f+1])
            {
                g=score3[f];
                score3[f]=score3[f+1];
                score3[f+1]=g;
            }
        }
    }
    for(e=0;e<8;e++)
    {
        for(f=0;f<8;f++)
        {
            if(score4[f]>score4[f+1])
            {
                g=score4[f];
                score4[f]=score4[f+1];
                score4[f+1]=g;
            }
        }
    }
    for(e=0;e<8;e++)
    {
        for(f=0;f<8;f++)
        {
            if(score5[f]>score5[f+1])
            {
                g=score5[f];
                score5[f]=score5[f+1];
                score5[f+1]=g;
            }
        }
    }
    for(e=0;e<8;e++)
    {
        for(f=0;f<8;f++)
        {
            if(score6[f]>score6[f+1])
            {
                g=score6[f];
                score6[f]=score6[f+1];
                score6[f+1]=g;
            }
        }
    }
    for(e=0;e<8;e++)
    {
        for(f=0;f<8;f++)
        {
            if(score7[f]>score7[f+1])
            {
                g=score7[f];
                score7[f]=score7[f+1];
                score7[f+1]=g;
            }
        }
    }
    for(e=0;e<8;e++)
    {
        for(f=0;f<8;f++)
        {
            if(score8[f]>score8[f+1])
            {
                g=score8[f];
                score8[f]=score8[f+1];
                score8[f+1]=g;
            }
        }
    }
    for(e=0;e<8;e++)
    {
        for(f=0;f<8;f++)
        {
            if(score9[f]>score9[f+1])
            {
                g=score9[f];
                score9[f]=score9[f+1];
                score9[f+1]=g;
            }
        }
    }
    for(e=0;e<8;e++)
    {
        for(f=0;f<8;f++)
        {
            if(score10[f]>score10[f+1])
            {
                g=score10[f];
                score10[f]=score10[f+1];
                score10[f+1]=g;
            }
        }
    }
    cout<<score1[0]<<endl<<score1[1]<<endl<<score1[2]<<endl<<score1[3]<<endl<<score1[4]<<endl<<score1[5]<<endl<<score1[6]<<endl;
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
    for(e=0;e<10;e++)
    {
        ave[e]=sum[e]/5;
        student[e].average=ave[e];
    }
    for(e=0;e<10;e++)
    {
        for(f=0;f<10;f++)
        {
            if (ave[f]<ave[f+1])
            {
                double z=ave[f];
                ave[f]=ave[f+1];
                ave[f+1]=z;
            }
        }
    }
    ofstream z("/Users/s20181102932/Desktop/比赛结果.txt");
    g=0;
    for(e=0;e<number;e++)
    {
        for(f=0;f<number;f++)
        {
            if(ave[e]==student[f].average)
            {
                z<<"第"<<e+1<<"名"<<student[f].name<<"获得"<<ave[e]<<"的平均分"<<endl<<endl;
                if(f==0)
                {
                    for(g=0;g<7;g++)
                    {
                        z<<referee[g].name<<" "<<referee[g].first<<" ";
                    }
                    z<<endl;
                }
                if(f==1)
                {
                    for(g=0;g<7;g++)
                    {
                        z<<referee[g].name<<" "<<referee[g].second<<" ";
                    }
                    z<<endl;
                }
                if(f==2)
                {
                    for(g=0;g<7;g++)
                    {
                        z<<referee[g].name<<" "<<referee[g].third<<" ";
                    }
                    z<<endl;
                }
                if(f==3)
                {
                    for(g=0;g<7;g++)
                    {
                        z<<referee[g].name<<" "<<referee[g].forth<<" ";
                    }
                    z<<endl;
                }
                if(f==4)
                {
                    for(g=0;g<7;g++)
                    {
                        z<<referee[g].name<<" "<<referee[g].fifth<<" ";
                    }
                    z<<endl;
                }
                if(f==5)
                {
                    for(g=0;g<7;g++)
                    {
                        z<<referee[g].name<<" "<<referee[g].sixth<<" ";
                    }
                    z<<endl;
                }
                if(f==6)
                {
                    for(g=0;g<7;g++)
                    {
                        z<<referee[g].name<<" "<<referee[g].seventh<<" ";
                    }
                    z<<endl;
                }
                if(f==7)
                {
                    for(g=0;g<7;g++)
                    {
                        z<<referee[g].name<<" "<<referee[g].eighth<<" ";
                    }
                    z<<endl;
                }
                if(f==8)
                {
                    for(g=0;g<7;g++)
                    {
                        z<<referee[g].name<<" "<<referee[g].ninth<<" "<<endl<<endl;
                    }
                    z<<endl;
                }
                if(f==9)
                {
                    for(g=0;g<7;g++)
                    {
                        z<<referee[g].name<<" "<<referee[g].tenth<<" ";
                    }
                    z<<endl;
                }
            }
        }
    }
    return 0;
}

#include<iostream>
#include<fstream>
#include<algorithm>
#include<iomanip>
bool cmp(int a,int b){
    return a>b;
}
#define S_NUMBER 8
#define F_NUMBER 7
using namespace std;
struct student{
    char name[20];
    char acdemy[30];
    char sex[20];
    char number[10];
    double score_1;
    double score_2;
    double score_3;
    double score_4;
    double score_5;
    double score_6;
    double score_7;
    double final_score;
};
struct referee{
    char name[10];
    char sex[10];
    char number[10];
    char mobile_number[11];
    char address[20];
};
int main( )
{
    student student[S_NUMBER];
    referee referee[F_NUMBER];
    ifstream player_information("/Users/s20181102932/Desktop/选手信息.txt");
    int i=0;int j=0;
    for(i=0;i<S_NUMBER;i++)
    {
        player_information>>student[i].number>>student[i].name>>student[i].sex>>student[i].acdemy;
    }
    ifstream referee_information("/Users/s20181102932/Desktop/裁判信息表.txt");
    for(i=0;i<F_NUMBER;i++)
    {
        referee_information>>referee[i].number>>referee[i].name>>referee[i].sex>>referee[i].mobile_number>>referee[i].address;
    }
    ifstream score_information("/Users/s20181102932/Desktop/裁判打分表.txt");
    for(i=0;i<S_NUMBER;i++)
    {
        score_information>>student[i].score_1>>student[i].score_2>>student[i].score_3>>student[i].score_4>>student[i].score_5>>student[i].score_6>>student[i].score_7;
    }
    double store_a[7]={0};
    double store_b[S_NUMBER]={0};
    for(i=0;i<S_NUMBER;i++)
    {
        store_a[0]=student[i].score_1;
        store_a[1]=student[i].score_2;
        store_a[2]=student[i].score_3;
        store_a[3]=student[i].score_4;
        store_a[4]=student[i].score_5;
        store_a[5]=student[i].score_6;
        store_a[6]=student[i].score_7;
        sort(store_a,store_a+7);
        store_a[0]=0;
        store_a[6]=0;
        student[i].final_score=(store_a[1]+store_a[2]+store_a[3]+store_a[4]+store_a[5])/5;
        store_b[i]=student[i].final_score;
    }
    sort(store_b,store_b+S_NUMBER,cmp);
    ofstream output("/Users/s20181102932/Desktop/比赛结果.txt");
    output<<"名次"<<" "<<"编号"<<" "<<"性别"<<"  "<<"姓名"<<" "<<"学院"<<" ";
    for(i=0;i<F_NUMBER;i++)
    {
        output<<referee[i].name<<" ";
    }
    output<<"总分       "<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    for(i=0;i<S_NUMBER;i++)
    {
        for(j=0;j<S_NUMBER;j++)
        {
            if(store_b[i]==student[j].final_score)
            {
                output<<i+1<<"   "<<student[j].number<<" "<<student[j].name<<" "<<student[j].sex<<"  "<<student[j].acdemy<<" "<<student[j].score_1<<" "<<student[j].score_2<<" "<<student[j].score_3<<" "<<student[j].score_4<<" "<<student[j].score_5<<" "<<student[j].score_6<<" "<<student[j].score_7<<" "<<student[j].final_score<<endl;
             
              
            }
        }
    }
    return 0;
}

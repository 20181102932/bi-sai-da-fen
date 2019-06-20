#include<iostream>
#include<fstream>
using namespace std;
struct st{
    char bianhao[10];
    char xueyuan[10];
    char name [10];
};
struct cp{
    char name[10];
    double yihao;
    double erhao;
    double sanhao;
};
int main()
{
    ifstream in("/Users/s20181102932/Desktop/xuanshou.txt");
    st b,c,d;
    in>>b.bianhao>>b.xueyuan>>b.name>>c.bianhao>>c.xueyuan>>c.name>>d.bianhao>>d.xueyuan>>d.name;
    ifstream inn("/Users/s20181102932/Desktop/caipan.txt");
    cp e,f,g,h,i,j,k;
 inn>>e.name>>e.yihao>>e.erhao>>e.sanhao>>f.name>>f.yihao>>f.erhao>>f.sanhao>>g.name>>g.yihao>>g.erhao>>g.sanhao>>h.name>>h.yihao>>h.erhao>>h.sanhao>>i.name>>i.yihao>>i.erhao>>i.sanhao>>j.name>>j.yihao>>j.erhao>>j.sanhao>>k.name>>k.yihao>>k.erhao>>k.sanhao;
    double x[7]={e.yihao,f.yihao,g.yihao,h.yihao,i.yihao,j.yihao,k.yihao};
    double y[7]={e.erhao,f.erhao,g.erhao,h.erhao,i.erhao,j.erhao,k.erhao};
    double z[7]={e.sanhao,f.sanhao,g.sanhao,h.sanhao,i.sanhao,j.sanhao,k.sanhao};
    int l,m;
    double n;
    for(l=0;l<6;l++)
    {
        for(m=0;m<6;m++)
        {
            if(x[m]<x[m+1])
            {
                n=x[m];
                x[m]=x[m+1];
                x[m+1]=n;
            }
        }
    }
    for(l=0;l<6;l++)
    {
        for(m=0;m<6;m++)
        {
            if(y[m]<y[m+1])
            {
                n=x[m];
                y[m]=y[m+1];
                y[m+1]=n;
            }
        }
    }
    for(l=0;l<6;l++)
    {
        for(m=0;m<6;m++)
        {
            if(z[m]<z[m+1])
            {
                n=z[m];
                z[m]=z[m+1];
                z[m+1]=n;
            }
        }
    }
    x[0]=0;
    x[6]=0;
    y[0]=0;
    y[6]=0;
    z[0]=0;
    z[6]=0;
    double ave,bve,cve;
    ave=(x[1]+x[2]+x[3]+x[4]+x[5])/5;
    bve=(y[1]+y[2]+y[3]+y[4]+y[5])/5;
    cve=(z[1]+z[2]+z[3]+z[4]+z[5])/5;
    ofstream of("/Users/s20181102932/Desktop/jieguo.txt");
    if(ave>bve&&ave>cve)
    {
        of<<b.name<<" "<<e.yihao<<" "<<f.yihao<<" " <<g.yihao<<" "<<h.yihao<<" "<<i.yihao<<" "<<j.yihao<<" "<<k.yihao<<" "<<ave<<" "<<"1"<<endl;
        if(bve>cve)
        {
            of<<c.name<<" "<<e.erhao<<" "<<f.erhao<<" "<<g.erhao<<" "<<h.erhao<<" "<<i.erhao<<" "<<j.erhao<<" "<<k.erhao<<" "<<bve<<" "<<"2"<<endl<<d.name<<" "<<e.sanhao<<" "<<f.sanhao<<" "<<g.sanhao<<" "<<h.sanhao<<" "<<i.sanhao<<" "<<j.sanhao<<" "<<k.sanhao<<" "<<cve<<" "<<"3"<<endl;
        }
        if(bve<cve)
        {
            of<<d.name<<" "<<e.sanhao<<" "<<f.sanhao<<" "<<g.sanhao<<" "<<h.sanhao<<" "<<i.sanhao<<" "<<j.sanhao<<" "<<k.sanhao<<" "<<cve<<" "<<"2"<<endl<<c.name<<" "<<e.erhao<<" "<<f.erhao<<" "
            <<g.erhao<<" "<<h.erhao<<" "<<i.erhao<<" "<<j.erhao<<" "<<k.erhao<<" "<<bve<<" "<<"3"<<endl;
        }
    }
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int mi[20],vi[20];

    cout<<"1. Upiste bodove za ekipu mi"<<endl;
    cout<<"2. Upiste bodove za ekipu vi"<<endl;
    cout << "Unesite 1. ili 2."<<endl;
    int izbor;
    cin>>izbor;
    int brIgre = 0;
    if( izbror==1)
    {
        cout << "Upisite bodove za ekipu mi"<<endl;
        cin >> mi[brIgre];
        vi[brIgre] = 162 - mi[brIgre];
    }
    else if( izbror==2)
    {
        cout << "Upisite bodove za ekipu vi"<<endl;
        cin >> vi[brIgre];
        mi[brIgre] = 162 - vi[brIgre];
    }
    return 0;
}

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
    if( izbor==1)
    {
        cout << "Upisite bodove za ekipu mi"<<endl;
        cin >> mi[brIgre];
        vi[brIgre] = 162 - mi[brIgre];
        brIgre ++;
    }
    else if( izbor==2)
    {
        cout << "Upisite bodove za ekipu vi"<<endl;
        cin >> vi[brIgre];
        mi[brIgre] = 162 - vi[brIgre];
        brIgre ++;
    }
    return 0;
}

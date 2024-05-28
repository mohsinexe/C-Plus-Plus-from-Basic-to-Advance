#include<iostream>
#include<string.h>
using namespace std;

class FootballTeam {
    string name;
    int shirtNum;
    public:
        void setData(string a, int b) {
            name = a;
            shirtNum = b;
        }

        void getData() {
            cout<<name;
            cout<<" and Kit number is "<<shirtNum<<endl;
        }
};

int main () {
    cout<<"Enter the total number of players in team: ";
    int size;
    cin>>size;
    FootballTeam *ptr = new FootballTeam [size];
    FootballTeam *ptrTemp = ptr;

    string p;
    int i,q;
    for (int i=0; i<size; i++) {
        cout<<"Enter Player Name: ";
        cin>>p;
        cout<<"Enter Kit Number of "<<p<<": ";
        cin>>q;
        ptr->setData(p,q);
        ptr++;
    }

    for (i=0;i<size;i++) {
        cout<<"Player " <<i+1<<" is ";
        ptrTemp -> getData();
        ptrTemp++;
    }
}
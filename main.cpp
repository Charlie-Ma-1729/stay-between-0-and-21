#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int k = 10;
int cn1=15;
int cn2=15;
void correct(int n){
    switch(n){
            case 0:
                k=1;
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                k+=n;
                break;
            case 10:
                k=10;
                break;
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
                k-=n;
                k+=10;
                break;
            case 20:
                k=20;
        }
}

void rw(){
        cout<<"שÝשששששששששששששששששששששששששששששששששß"<<endl;
        cout<<"שר   Your number  שר"<<endl;
        cout<<"שר                שר"<<endl;
        cout<<"שר                שר"<<endl;
        if(k>-1&&k<10){
            cout<<"שר        "<<k<<"       שר"<<endl;
        }
        else if(k>10){
            cout<<"שר       "<<k<<"       שר"<<endl;
        }
        else if(k>-10){
            cout<<"שר       "<<k<<"       שר"<<endl;
        }
        else if(k<-9){
            cout<<"שר      "<<k<<"       שר"<<endl;
        }
        cout<<"שר                שר"<<endl;
        cout<<"שר                שר"<<endl;
        cout<<"שר                שר"<<endl;
        cout<<"שדשששששששששששששששששששששששששששששששששו"<<endl;
        if(k>20||k<1){
            cout<<"Game Over"<<endl;
        }
        else if(cn1==0&&cn2==0){
            cout<<"You Win"<<endl;
        }

}

int main()
{
    srand( time(NULL) );
    int n1,n2;
    char n;
    n1 = rand() % 21;
    n2 = rand() % 21;
    //0=>min, 1~9, 10=>go to 10, 11~19 => -1~-9 , 20 => max
    cout<<"Try to stay between 0 and 21."<<endl;
    cout<<"Win when no cards are left."<<endl;
    cout<<"שÝשששששששששששששששששששששששששששששששששß"<<endl;
        cout<<"שר   Your number  שר"<<endl;
        cout<<"שר                שר"<<endl;
        cout<<"שר                שר"<<endl;
        if(k<10){
            cout<<"שר        "<<k<<"       שר"<<endl;
        }
        else{
            cout<<"שר       "<<k<<"       שר"<<endl;
        }
        cout<<"שר                שר"<<endl;
        cout<<"שר                שר"<<endl;
        cout<<"שר                שר"<<endl;
        cout<<"שדשששששששששששששששששששששששששששששששששו"<<endl;
    while(true){
        cout<<"שÝשששששששששששששששששששששששששששששששששß   שÝשששששששששששששששששששששששששששששששששß"<<endl;
        cout<<"שר   Left number  שר   שר   Right number שר"<<endl;
        cout<<"שר                שר   שר                שר"<<endl;
        cout<<"שר                שר   שר                שר"<<endl;
        if(cn1==0){
             cout<<"שר                שר   ";
        }
        else
        switch(n1){
            case 0:
                cout<<"שר       min      שר   ";
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                cout<<"שר       +"<<n1<<"       שר   ";
                break;
            case 10:
                cout<<"שר       mid      שר   ";
                break;
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
                cout<<"שר       -"<<n1-10<<"       שר   ";
                break;
            case 20:
                cout<<"שר       max      שר   ";
        }
        if(cn2==0){
             cout<<"שר                שר"<<endl;
        }
        else
        switch(n2){
            case 0:
                cout<<"שר       min      שר   "<<endl;
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                cout<<"שר       +"<<n2<<"       שר   "<<endl;
                break;
            case 10:
                cout<<"שר       mid      שר   "<<endl;
                break;
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
                cout<<"שר       -"<<n2-10<<"       שר   "<<endl;
                break;
            case 20:
                cout<<"שר       max      שר   "<<endl;
        }
        cout<<"שר                שר   שר                שר"<<endl;
        if(cn1<10){
            cout<<"שר (card left:"<<cn1<<")  שר   ";
            if(cn2<10){
                cout<<"שר (card left:"<<cn2<<")  שר"<<endl;
            }
            else{
                cout<<"שר (card left:"<<cn2<<") שר"<<endl;
            }
        }
        else{
            cout<<"שר (card left:"<<cn1<<") שר   ";
            if(cn2<10){
                cout<<"שר (card left:"<<cn2<<")  שר"<<endl;
                }
            else{
                cout<<"שר (card left:"<<cn2<<") שר"<<endl;
            }
        }
        cout<<"שר                שר   שר                שר"<<endl;
        cout<<"שדשששששששששששששששששששששששששששששששששו   שדשששששששששששששששששששששששששששששששששו"<<endl;
        while(true){
            cout<<"Press \"a\" to choose the left one, and press \"b\" to choose the right one."<<endl;
            cout<<"Your choice:";
            cin>>n;
            if(n=='a'){
                correct(n1);
                n1 = rand() % 21;
                cn1--;
                if(cn1<1){
                    cn1=0;
                }
                rw();
                if(k>20||k<1){
                    return 0;
                }
                else if(cn1==0&&cn2==0){
                    return 0;
                }
                break;
            }
            else if(n=='b'){
                correct(n2);
                n2 = rand() % 21;
                cn2--;
                if(cn2<1){
                    cn2=0;
                }
                rw();
                if(k>20||k<1){
                    return 0;
                }
                else if(cn1==0&&cn2==0){
                    return 0;
                }
                break;
            }
            else{
                cerr<<"Wrong Answer!\a"<<endl;
            }
        }
    }
    return 0;
}

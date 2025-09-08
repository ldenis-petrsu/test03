#include <iostream>
#include <stdlib.h>
#include <ctime>
#1
using namespace std;

int Poisk(int NL,int kL,int &PL,long int aL[]){
    for (int i=0;i<NL;i++){
        if(aL[i]%(kL*kL*kL)==0){
            PL=1; break;
        }
    }
    return 0;
}


int main()
{ int N,k,P=0; long int a[1000];
  cout << "N= "; cin >> N;
  cout << "k= "; cin >> k;
  srand(time(0));
  for (int i=0;i<N;i++){
    a[i]= rand()%1000;//0-999
  }

Poisk(N,k,P,a);

    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Vec {
    int *v = 0;
    int d=0;
    int IN=0;
    bool END=false;
    void in(int *v1, int d1) {
        if(d > 0)
            cout<<"A sterge inainte de creare.(Eroare 1_1)";
        else if(d1 < 0)
            cout<<"Marimea negativa nu este citat.(Eroare 1_2)";
        v = new int[d1];
        for(int i=0; i<d1; i++) {
            v[i] = v1[i];
        }
        d = d1;
        END=true;
    }

    void DELITE() {
         END;
         if(d!=0)
         {
            delete[] v;
            d=0;
         }
         else
            cout <<"Nu este posibil de a sterge vectorul care nu a fost creat.(Eroare 2_1)"<<endl;
    }

    void InfChange(int *v1, int d1) {
        if(END == true){
            DELITE();
            in(v1,d1);
        }else
            cout <<"Ceea ce nu exista programa nu e in stare sa stearga.(Eroare 2_2)"<<endl;
    }

    void DEMONSTRATION(){
        for(int i=0; i<d; i++){
            cout<<" Vectorul: " << *(v+i) <<endl;}
    }
    int SUMM2VEC (){
         IN=0;
         for(int i=0; i<d; i++)
             if(v[i]<0)
               IN+=v[i];
         cout<<"Suma = "<<IN<<endl;
         return IN;
    }
};
int main()
{
    const int d=4;
    Vec a,b;
    int arra[]={2,-2,8,-8};
    int arr2[]={9,-9,80,-80};
    int arrb[]={2,-20000,70,70};
   a.in(arra,4);
   a.DEMONSTRATION();
   a.InfChange(arr2,4);
   a.SUMM2VEC();
   a.DEMONSTRATION();
   b.in(arrb,4);
   b.SUMM2VEC();
   cout<< (a.SUMM2VEC()+b.SUMM2VEC())<<endl;
   cout << a.v[0]<<endl;
    a.DELITE();
    cout << a.v[3]<<endl;
    getch();
}

#include <iostream>
using namespace std;

int main() {
               float i,s,l,vm;
               i=1;
               s=0;
               while(i<=7)    
               {
                  cout<<"inserire il livello dell'acqua"<<endl;
                  cin>> l;
                  s=s+l;
                  if(l>0)
                  {
                    if(l>10)
                    {
                        cout<<"livello alto"<<endl;
                        cout<<"nel giorno" << i << "acqua supera il livello di 10 cm"<<endl;
                    }
                    else
                    {
                        cout<<"livello alto"<<endl;
                    }
                  }
                  else
                  {
                     cout<<"livello normale"<<endl;
                    
                  }
                  i=i+1;
                  vm=s/7;
                  cout<<"la media del livello acqua è"<< vm <<endl;

               
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md

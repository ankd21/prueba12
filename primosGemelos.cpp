#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

bool esprimo (int n);
int  funcionHBehiler(int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {

int n;

for (int j=0 ;j<45;j++){
n=funcionHBehiler(j);
if (!esprimo(n-1)&& !esprimo(n+1)){
cout<<"___"<<j;

}

}




return 0;

}





bool esprimo(int n ){
int cont,i;
bool bandera;
cont=0;
i=1;
bandera=false;

if (n>0){
    do{
         if (n%i==0){
            cont++;
         }
       i++;
     }while(i<=n && cont <=3);

if (cont==2)

bandera=true;

}



return bandera;

}

int  funcionHBehiler(int n){

return 30*(2*n-27)*(n-15);

}

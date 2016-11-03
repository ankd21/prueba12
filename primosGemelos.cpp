#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

bool esprimo (int n);
int  funcionHBehiler(int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {

int n;

//for (int j=0 ;j<45;j++){
//n=funcionHBehiler(j);
//if (!esprimo(n-1)&& !esprimo(n+1)){
//cout<<"___"<<j;

//}

//}

cout<<"ingrese primo";
cin>>n;

if(esprimo(n)==true){

cout<<"primo";
}else {
cout<<" no primo";

}




return 0;

}





bool esprimo(int n ){
for (int i=2 ; i<n-1;i++){

if(n % i==0 )

return  false;
}

return true;


}

int  funcionHBehiler(int n){

return 30*(2*n-27)*(n-15);

}

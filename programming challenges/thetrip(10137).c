#include <iostream>
#include <cstdio>

using namespace std;

int n;
double media,estudantes[1000],mais,menos,tmp;

int main(){
   cin >> n;
   while(n){
       mais = menos = media = 0;
       for(int i = 0;i<n;i++){
           cin >> estudantes[i];
           media += estudantes[i];
       }
       media = media/n;
       
       for (int i = 0; i<n ;i++){
           tmp = (double)(long)((estudantes[i]-media)*100)/100;
           
           if (tmp > 0){
               mais += tmp;
           }
           else{
               menos -= tmp;
           }
       }
       printf("$%.2f\n",max(mais,menos));
       cin >> n;
   }   
   return 0;
}


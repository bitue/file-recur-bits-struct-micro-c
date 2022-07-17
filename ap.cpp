#include<bits/stdc++.h>

using namespace std ;

int main (){

   int a , b , c ;
   cin>>a >> b >> c;

   int min_num = min(a, min(b, c));
   int max_num = max (a, max(b, c));

   //cout<<min_num <<"<<min " << max_num << "<<  max"<<endl;

   int mid ;

   if(a > min_num && a < max_num ) {
      mid = a ;
   }
   else if ( b > min_num && b < min_num) {
        mid = b ;
   }
   else {
        mid = c ;
   }

   // condition for applying

   int x = max_num - mid ;

   if(a ==0 && b ==0 && c==0) {
     cout<<0<<endl;
     return 0;
   }

   if(min_num -x <=0){
        cout<<-1<<endl ;

   }
   else {
     cout<<max_num<<endl;

   }


}

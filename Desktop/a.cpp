#include <iostream>
using namespace std;

int main() {
   int i,j,k=1;
   int n;std::cin >> n;
   for(i=1;i<=n;i++)
   {
       for(j=0;j<i;j++){
           if(k<10)
           cout<<"  ";
           else  if(k<100)
           cout<<" ";
       cout <<k++<<' ';
       }
       cout<<endl;
   }
    
	return 0;
}

/* #include <iostream>
using namespace std;

int main(){
  int a;
  double d;
  cout<<&a<<" size "<<sizeof(a) <<endl;
  cout<<&d<<" size "<<sizeof(d) <<endl; 
  
  
  int x,*p;
    p=&x;
    x=5;

    cout<< x  <<" "<< *p <<endl;
    cout<< &x <<" "<<  p <<endl;
    cout<< &p <<endl;
   int b=6;
   cout<< x  <<" "<< b << " "<< *p <<endl;
    x++;
   cout<< x  <<" "<< b << " "<< *p <<endl;
    p=&b; *p=2;
  cout<< x  <<" "<< b << " "<< *p <<endl;	
  
   
/*Example Array*/

/*int *ip;
int a[ ] = {31415, 21828};
ip = a;
// alternative:	ip = &a[0];

cout<<a<<endl;			
cout<<ip<<" "<<*ip<<endl;	
  
(*ip)++; 
cout<<a<<" "<<a[0]<<endl;		
cout<<ip<<" "<<*ip<<endl; 	
  
ip++; 
cout<<a<<endl;		
cout<<ip<<" "<<*ip<<endl; 	// print 
 /*the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) 
}*/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    char *pa, *pb, i, temp;
    int SIZE = 100;
    char a[SIZE];

    cout << "Input string: ";
    cin >> a;
    SIZE = strlen(a);
    pa = a;
    pb = a + (SIZE -1);
  
    cout << "Original:";
    for (i = 0; i < SIZE ; i++, pa++) {
        cout << setw(3) << *pa;
    }
    cout<<endl;
  
    cout<<"Reverse:";
    for (i = 0 ; i < SIZE ; i++ , pa++ , pb--) {
        *pa = *pb;
    }
  
  pa = pa-SIZE;
  for (i=0; i<SIZE; i++ ,pa++){
    cout << setw(3) << *pa;
  }
  cout<<endl;
}





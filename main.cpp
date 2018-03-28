#include <iostream>

using namespace std;

int main()
{int num ;
 cin>>num ;
 int x ;
 for(int i=1;i<=num;i++){
    cin>> x ;
    if(x<0){

        cout<< "not allowed -ve numbers " ;
        cout<<"Enter another one : " ;
        cin>>x ;

        }
    if(x==1)
    {
        cout<<x<<"isn't prime"<<endl ;

    }

    else if(x%2!=0||x==2){
        cout<<x<<"is prime" <<endl ;
    }
    else {
           cout<<x<<"isn't prime"<<endl ;
    }
 }


    return 0;
}

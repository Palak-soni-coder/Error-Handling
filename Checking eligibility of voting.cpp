#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    try{
        if(age<18){
            throw age;
        }else{
            cout<<"Your age is :"<< age<<endl;
        }
    }
        catch(int age){
            cout<<"\nERROR! YOU ARE NOT ELIGIBLE FOR VOTING."<<endl;
        }
}

/*Output:-
Enter your age: 
12

ERROR! YOU ARE NOT ELIGIBLE FOR VOTING.
*/

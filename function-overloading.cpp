//Function-overloading means kisi bhi ek function ko multiple kaam ke liye use karna video no:19
//Ek hei function ka naam multiple uses ke liye use kar sakte hai
#include<iostream>
#include<iomanip>
using namespace std;
int sum(int a,int b){
    cout<<"Hello guys"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
    cout<<"good morning friends"<<endl;  //<-----IMP CONCEPT DAMN.

}
//Calculating the volume of a cuboid 
int volume(int l,int b,int h){
    return l*b*h;
    

}
int main()   {
    int a;
    cout<<"The sum of 3 and 3 is :"<<setw(2)<<sum(3,3)<<endl;
    cout<<"The sum of 5 , 8 and 6 is :"<<sum(5,8,6)<<endl;
    cout<<"The volume of a cuboid is:"<<setw(5)<<volume(14,5,2);
    return 0;
}
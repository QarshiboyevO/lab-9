#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
//int output(){
//    int a=16;
//    for(int i=a;i>0;i--){
//        for(int j=i;j>0;j--){
//            cout<<'*';
//        }
//        cout<<endl;
//    }
//}
int gettype(int a) {
    int counter = 0;
    while (a > 0) {
        a /= 10;
        counter++;
    }
    if (counter % 2 == 0) {
        cout << "Even digit integer" << endl;
    } else {
        cout << "Odd digit integer" << endl;
    }
}
int calculatetemp(float temp, float wind){
    float result;
    if(temp<-58 || temp>41 || wind<2){
        cout<<"Wrong parameters"<<endl;
    }
    else{
        result=35.74+0.6215*temp-35.75* pow(wind,0.16)+0.4275*temp*pow(wind,0.16);
        cout<<"The wind chill inde is "<<result<<endl;
    }

}

int main() {
   int a= calculatetemp(5.3,1);
   cout<<a;
    return 0;
}

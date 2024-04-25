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
int countDigitOccurences(int num, int digit){
    cin>>num;

    int counter0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    while(num>0){
        digit=int(num)%10;
        switch(digit){
            case 0:
                counter0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                c5++;
                break;
            case 6:
                c6++;
                break;
            case 7:
                c7++;
                break;
            case 8:
                c8++;
                break;
            case 9:
                c9++;
                break;
        }

        num/=10;
    }
    cout<<"The frequency of 0 = "<<counter0<<endl;
    cout<<"The frequency of 1 = "<<c1<<endl;
    cout<<"The frequency of 2 = "<<c2<<endl;
    cout<<"The frequency of 3 = "<<c3<<endl;
    cout<<"The frequency of 4 = "<<c4<<endl;
    cout<<"The frequency of 5 = "<<c5<<endl;
    cout<<"The frequency of 6 = "<<c6<<endl;
    cout<<"The frequency of 7 = "<<c7<<endl;
    cout<<"The frequency of 8 = "<<c8<<endl;
    cout<<"The frequency of 9 = "<<c9<<endl;
}
int transformer(){
    int num,digit;
    cin>>num;
    while(num>0) {
        digit = int(num) % 10;
        switch (digit) {
            case 0:
                cout << "zero ";
                break;
            case 1:
                cout << "one ";
                break;
            case 2:
                cout << "two ";
                break;
            case 3:
                cout << "three ";
                break;
            case 4:
                cout << "four ";
                break;
            case 5:
                cout << "five ";
                break;
            case 6:
                cout << "six ";
                break;
            case 7:
                cout << "seven ";
                break;
            case 8:
                cout << "eight ";
                break;
            case 9:
                cout << "nine ";
                break;
        }
        num/=10;
    }
}

void solvequadraticequation(double a,double b, double c, double& discriminant, double& r1, double&r2){
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;
    if (discriminant<0){
        cout<<"the equation has no roots";
    }else if(discriminant==0){
        r1=-b/(2*a);
        cout<<r1;
    }else{
        r1=(-b+sqrt(discriminant))/2*a;
        r2=(-b-sqrt(discriminant))/2*a;
        cout<<"root 1 "<<r1<<" root 2 "<<r2<<endl;
    }
}
void solveEquation(double a, double b, double c, double d, double e, double f, double& x, double& y, bool& isSolvable){
    if (a*d-b*c==0){
        isSolvable=false;
        cout<<"The equation has no solution"<<endl;
    }else{
        x=(e*d-b*f)/(a*d-b*c);
        y=(a*f-e*c)/(a*d-b*c);
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }

}
bool areVectorsOrthogonal(double& x1, double& y1, double& x2, double& y2, double& x3, double& y3, double& x4, double& y4){
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    double a;
    a=(x2-x1)*(x4-x3)+(y2-y1)*(y4-y3);
    if (a==0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
int main() {
   bool a= areVectorsOrthogonal(0.0,6.000000,5.0,6.0,3.0,8.0,3.0,2.0);
   cout<<a;
    return 0;
}

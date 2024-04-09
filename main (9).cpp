#include <iostream>
#include <cmath>
using namespace std;

void Mean(double X, double Y, double& AMean, double& GMean) {
    if (X <= 0|| Y <= 0){
       cout<<"Ошибка: необходимо ввести положительное число"<< endl;
        return ;
    }
        AMean = (X + Y)/2;
        GMean = sqrt(X*Y);
}
int main() {
    double A, B, C, D;
    double AMean_AB , GMean_AB; 
    double AMean_AC, GMean_AC; 
    double AMean_AD, GMean_AD; 

    cout<<"Введите положительные числа  ";
    cin>>A>>B>>C>>D;

    if ( A <= 0|| B <= 0|| C <= 0|| D <= 0) {
        cout << " Ошибка: необходимо ввести положительное число"<<endl;
        return 1;
    }
    
    Mean(A, B, AMean_AB , GMean_AB);
    Mean(A, C, AMean_AC, GMean_AC);
    Mean(A, D, AMean_AD , GMean_AD);
    
    cout <<"(A,B):" << AMean_AB <<" /"<< GMean_AB <<endl;
    cout <<"(A,C):" << AMean_AC <<"/"<< GMean_AC << endl;
    cout <<"(A,D):" << AMean_AD <<" /"<< GMean_AD << endl;

    return 0;
}

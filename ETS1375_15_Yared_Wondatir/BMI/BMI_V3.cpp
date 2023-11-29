//BMI CALCULATOR
#include <iostream>
using namespace std;
float malebmi(){
    float height , weight , BMI;
    cout << "Please enter your Height(in METER): ";
    cin>> height;
    cout << "Please enter your Weight(in KG): ";
    cin >> weight;
    BMI = weight/(height*height);
    if(BMI<20.5){
        cout<<"UNDER-WEIGHT"<<endl;
    }
    else if(BMI>=20.5 && BMI<25){
        cout<<"HEALTHY"<<endl;
    }
    else if(BMI>=25 && BMI<30){
        cout<<"OVER-WEIGHT"<<endl;
    }
    else if(BMI>=30 && BMI<40){
        cout<<"OBESE"<<endl;
    }
    else if(BMI>=40){
        cout<<"SEVERE-OBESE, YOU ARE IN DANGER!"<<endl;
    }
    else{
        cout<< "Invalid input, TRY AGAIN!"<<endl;
    }
    return BMI;

}

float femalebmi(){
    float height , weight , BMI;
    cout << "Please enter your Height(in METER): ";
    cin>> height;
    cout << "Please enter your Weight(in KG): ";
    cin >> weight;
    BMI = weight/(height*height);
    if(BMI<18.5){
        cout<<"UNDER-WEIGHT"<<endl;
    }
    else if(BMI>=18.5 && BMI<24){
        cout<<"HEALTHY"<<endl;
    }
    else if(BMI>=24 && BMI<30){
        cout<<"OVER-WEIGHT"<<endl;
    }
    else if(BMI>=30 && BMI<40){
        cout<<"OBESE"<<endl;
    }
    else if(BMI>=40){
        cout<<"SEVERE-OBESE, YOU ARE IN DANGER!"<<endl;
    }
    else{
        cout<< "Invalid input, TRY AGAIN!"<<endl;
    }
    return BMI;

}
int main(){
    float height , weight , BMI ;
    char gender;
    int num;
    cout<<"for how many persons you want to calculate the BMI: ";
    cin>>num;
    while (num>0){
    cout << "Please enter your gender (M FOR MALE AND F FOR FEMALE): ";
    cin>> gender;
    BMI = weight/(height*height);

    switch (gender){
        case 'M' :
        malebmi();
        cout<< "Male"<<endl;
        break;
        case 'F' :
        femalebmi();
        cout<< "Female"<<endl;
        break;
        default:
        cout<< "Invalid input, TRY AGAIN!"<<endl;
        break;

    }
    num-- ;
    
}
return 0;
    
}
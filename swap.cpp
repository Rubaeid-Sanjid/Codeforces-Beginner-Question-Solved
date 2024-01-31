#include <bits/stdc++.h>
using namespace std;

///Answer no. 1
void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int value1 = 2, value2 = 3;

    cout<<"Before swap: "<<value1<<" "<<value2<<endl;

    swap(&value1, &value2);
    cout<<"After swap: "<<value1<<" "<<value2<<endl;


///Answer no. 2

///Swap(int a, int b); function is not sufficient to swap because
///the passing parameter gets copy to the local variable of the function.
///As a result the value remains unchange.
    void swap(int a, int b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    int main()
    {
    int value1 = 2, value2 = 3;

    cout<<"Before swap: "<<value1<<" "<<value2<<endl;

    swap(value1, value2);
    cout<<"After swap: "<<value1<<" "<<value2;

    }
///But when we use pointer we pass the address in parameter.
///So the local variable gets the actual value in address and it swaps the value.


///Answer no. 3

///In question no. 2, we can use the pointer in parameter to swap.
///when we use pointer we pass the address in parameter.
///So the local variable gets the actual value in address and it swaps the value.
void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

///Answer no. 4

int *a;
int n;

cout<<"Please, Enter your array size: ";
cin>>n;

a = new int [n];

for(int i=0; i<n; i++){
    cin>>a[i];
}

for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}

///Answer no. 5

int **a;
a = new int *[5];

for(int i =0; i<5; i++){
    a[i] = new int [i+1];
}

///Answer no. 6

///If variables are declared in private we have to use setter and getter method under public
///to access and change the variables.
class Car{
private:
    double price;
    string color;
public:
    void setPrice(double price){
       this->price = price;
    }
    double getPrice(){
        return price;
    }
     void setColor(string color){
       this->color = color;
    }
    string getColor(){
        return color;
    }
};
int main()
{
    Car c;
    c.setPrice(500000.00);
    cout<<c.getPrice()<<endl;
    c.setColor("Black");
    cout<<c.getColor()<<endl;

}

///Answer no. 9

    string getString;
    getline(cin, getString);
    cout<<getString<<endl;

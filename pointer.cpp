#include <iostream>
#include <vector>
using namespace std;

int Deref(){
    int a,b;
    int *ptr_a = &a;
    int *ptr_b = &b;
    cout<< "What is your first integer?"<<endl;
    cin>> a;
    cout<<endl<< "What is your second integer?";
    cin>> b;
    cout<<endl<< *ptr_a<<endl<< *ptr_b;
        return 0;

}
int max(){
    int arr[] = {12, 42, 7, 32, 14, 1, 27, 21, 2, 10};
    int *max_ptr = arr;
    for (int i = 0; i < 10; i++)
        {
        if(*max_ptr < *arr+i)
            { max_ptr = arr+i;}
        }
    
    cout<< &max_ptr;
    return 0;

}
int length(){
    char string[] = "Hello how are you";
    char * arr = string;
    int i = 0;
    while (true){
        if(*(arr+i) == '\0'){
            cout<<i;
            break;
        }
        else i++;
    }
    return 0;
}
int reverse (){
    char string[] = "Hello how are you";
    char * arr = string;
    int i = 0;
    while (true){
        if(*(arr+i) == '\0'){
            break;
        }
        else i++;
    }
    for (i > 0; i--;)
    {
        cout<< *(arr+i);
    }
    return 0;
}
int main(){
    vector <int> vect= {12, 42, 7, 32, 14, 1, 27, 21, 2, 10};
    int* left = vect.data();
    int* right = vect.data() + vect.size() - 1;
    while(right>left){
        left++;
        right--;
    }
    cout<<*right;
}
// basics of pointers
#include<iostream>
using namespace std;

void passedPointer(int arr[]){
    cout<<endl<<"Passed argument size : "<<sizeof(arr)<<"."<<endl;
    // this will print size of pointer not size of entire array bcoz it is passed as reference.
}

int main()
{
    int a = 5;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Address of a : "<<&a<<endl;
    

    // Creating pointer
    // int *ptr;   // bad way to declate a pointer ths will point to a random memory location which may lead to undefined behaviour.
    int *ptr = NULL;
    ptr = &a;
    double PI = 3.14;
    double *ptr2 = &PI;
    cout<<"Value stored in ptr : "<<ptr<<endl;
    cout<<"We can see that address of a and value stored at ptr is same"<<endl;
    cout<<"Value stored at location pointed by ptr : "<<*ptr<<endl;
    cout<<"Address of ptr : "<<&ptr<<endl;

    cout<<"Size of ptr : "<<sizeof(ptr)<<endl;
    cout<<"Size of ptr2 : "<<sizeof(ptr2)<<endl;

    // pointers with array
    int arr[5] = {100,200,300,400,500};
    // arr = &arr = &arr[0]
    // arr represents the address of first element of the array
    cout<<"Address of first element of the array : "<<arr<<endl;
    cout<<" just trying : "<<&arr<<endl;
    cout<<"Address of first element of the array (using & operator): "<<&arr[0]<<endl;
    cout<<"Value at first memory block : "<<arr[0]<<endl;
    cout<<"(using dereferencing variable)"<<endl;
    cout<<"Value at first memory block : "<<*arr<<endl;
    
    cout<<"Value at 1 index : "<<*(arr + 1)<<endl;
    cout<<"Value plus one   : "<<*(arr) + 1<<endl;

    cout<<endl;
    // different way to access element
    cout<<"Different ways to access elemment from array "<<endl;
    int i = 2;
    cout<<"Second indexed element : "<<i[arr]<<endl;
    cout<<"Second indexed element : "<<*(i + arr)<<endl;
    cout<<"Second indexed element : "<<arr[i]<<endl;

    // scenarioes in sizeof
    int array[10];
    int *pointer = &array[0];
    cout<<"size of array : "<<sizeof(array)<<endl;
    cout<<"size of pointer : "<<sizeof(pointer)<<endl;
    cout<<"size of *pointer : "<<sizeof(*pointer)<<endl;   
    cout<<"size of &pointer : "<<sizeof(&pointer)<<endl;

    cout<<endl;
    
    // symbol table content can't be changed
    // in case of array arr = arr + 1 is not allowed
    // but in case of pointer it can possible
    int num[10] = {1,2,3,4,5,6,7,8,9,0};
    int * ptr1 = num;
    cout<<"pointer : "<<ptr1<<" "<<*ptr1<<endl;
    ptr1 = ptr1 + 1;
    cout<<"pointer changed : "<<ptr1<<" "<<*ptr1<<endl;
    // num = num + 1;// not permitted
    // becoz we try to change  symbol table.
    
    // for difference of char array and int array
    int i1[5] = {1,2,3,4,5};    // size of 5 element
    char c1[6] = "abcde";       // extra one is null character
    
    cout<<"int array : "<<i1<<endl;
    cout<<"char array: "<<c1<<endl; 
    // hence we can see that cout fucntion is implemented differentyl for int array and char array 

    char *c = &c1[0];
    cout<<"try using char pointer : "<<c<<endl; 

    // different implementation in case of char pointer
    // it will not stop until it found null char

    char ap = 'a';
    char *apptr = &ap;
    cout<< ap << endl;
    cout<< apptr << endl;

    int array1[] = {1,2,3,4,5,6,7,8,9,0};
    cout<<"Size of array : "<<sizeof(array1)<<"."<<endl;
    passedPointer(array1);

    return 0;
}
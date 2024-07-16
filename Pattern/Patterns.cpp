// Most of the patterns

// 1
// * * * *
// * * * *
// * * * *
// * * * *

// 2
// 1 1 1
// 2 2 2
// 3 3 3

// 3
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// 4
// 1 2 3
// 4 5 6 
// 7 8 9

// 5
// * 
// * *
// * * *
// * * * *

// 6
// 1 
// 2 2
// 3 3 3
// 4 4 4 4

// 7
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// 8
// 1
// 2 3
// 3 4 5
// 4 5 6 7

// 9
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// 10
// A A A
// B B B
// C C C

// 11
// A B C
// A B C
// A B C

// 12
// A B C
// D E F
// G H I

// 13
// A B C
// B C D
// C D E

// 14
// A
// B B
// C C C

// 15
// A
// B C
// D E F
// G H I J

// 16
// A
// B C
// C D E
// D E F G

// 17
// D
// C D
// B C D
// A B C D

// 18
// A B C
// B C D 
// C D E

// 19
//       *
//     * *
//   * * *
// * * * *

// 20
// * * * *
//   * * *
//     * *
//       *

// 21
// 1 1 1 1
//   2 2 2  
//     3 3 
//       4

// 22
//       1
//     2 2
//   3 3 3
// 4 4 4 4

// 23
// 1 2 3 4
//   2 3 4
//     3 4
//       4

// 24
// 1 2 3 4
//   5 6 7
//     8 9
//       10

// 25
//       1
//     2 3
//   4 5 6
// 7 8 9 10

// 26
//       1 
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

// 27
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include <iostream>
using namespace std;

int main()
{

    {
        // Pattern 1
        cout << "---------- Pattern 1 ----------" << endl;
        int num = 4;
        for (int i = 0; i < num; ++i)
        {
            for (int j = 0; j < num; ++j)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

    {
        // Pattern 2
        cout << "---------- Pattern 2 ----------" << endl;
        int num = 3;
        for (int i = 1; i <= num; ++i)
        {
            for (int j = 1; j <= num; ++j)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    {
        // Pattern 3
        cout << "---------- Pattern 3 ----------" << endl;
        int num = 4;

        for(int i = 1 ; i <= num ; ++i){
            for(int j = 1 ; j <= num ; ++j){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 4
        cout << "---------- Pattern 4 ----------" << endl;
        int num = 3;
        int count = 1;

        for(int i = 0 ; i < num ; ++i){
            for ( int j = 0 ; j < num ; ++j){
                cout<<count++<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 5
        cout << "---------- Pattern 5 ----------" << endl;
        int num = 4;
        for (int i = 0; i < 4 ; i++)
        {       
            for (int j = 0; j <= i ; j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        
    }

    {
        // Pattern 6
        cout << "---------- Pattern 6 ----------" << endl;
        int num = 4;
        for (int i = 0; i < 4 ; i++)
        {       
            for (int j = 0; j <= i ; j++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 7
        cout << "---------- Pattern 7 ----------" << endl;
        int num = 4;
        int count = 1;

        for(int i = 0 ; i < num ; ++i){
            for ( int j = 0 ; j <= i ; ++j){
                cout<<count++<<" ";
            }
            cout<<endl;
        }

    }

    {
        // Pattern 8
        cout << "---------- Pattern 8 ----------" << endl;
        int num = 4;
        int count = 0;
        for(int i = 1 ; i <= num ; ++i){
            count = i;
            for ( int j = 1 ; j <= i ; ++j){
                cout<<count++<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 9
        cout << "---------- Pattern 9 ----------" << endl;
        int num = 4;
        int count = 0;
        for(int i = 1 ; i <= num ; ++i){
            count = i;
            for ( int j = 1 ; j <= i ; ++j){
                cout<<count--<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 10
        cout << "---------- Pattern 10 ----------" << endl;
        int num = 3;
        char ch = 'A';
        for(int i = 0 ; i < num ; ++i){
            for ( int j = 0 ; j < num ; ++j){
                cout<<ch<<" ";
            }
            ch++;
            cout<<endl;
        }
    }

    {
        // Pattern 11
        cout << "---------- Pattern 11 ----------" << endl;
        int num = 3;
        
        for(int i = 0 ; i < num ; ++i){
            char ch = 'A';
            for ( int j = 0 ; j < num ; ++j){
                cout<<ch++<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 12
        cout << "---------- Pattern 12 ----------" << endl;
        int num = 3;
        char ch = 'A';
        for(int i = 0 ; i < num ; ++i){
            
            for ( int j = 0 ; j < num ; ++j){
                cout<<ch++<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 13
        cout << "---------- Pattern 13 ----------" << endl;
        int num = 3;
        char ch = 'A';
        for(int i = 0 ; i < num ; ++i){
                char jch = ch; 
            for ( int j = 0 ; j < num ; ++j){
                cout<<jch++<<" ";
            }
            cout<<endl;
            ch++;
        }
    }

    {
        // Pattern 14
        cout << "---------- Pattern 14 ----------" << endl;
        int num = 3;
        char ch = 'A';
        for(int i = 0 ; i < num ; ++i){
            for ( int j = 0 ; j <= i ; ++j){
                cout<<ch<<" ";
            }
            cout<<endl;
            ch++;
        }
    }

    {
        // Pattern 15
        cout << "---------- Pattern 15 ----------" << endl;
        int num = 4;
        char ch = 'A';
        for(int i = 0 ; i < num ; ++i){
            for ( int j = 0 ; j <= i ; ++j){
                cout<<ch++<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 16
        cout << "---------- Pattern 16 ----------" << endl;
        int num = 4;
        char ch = 'A';
        for(int i = 0 ; i < num ; ++i){
            char jch = ch++;
            for ( int j = 0 ; j <= i ; ++j){
                cout<<jch++<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 17
        cout << "---------- Pattern 17 ----------" << endl;
        int num = 4;
        char ch = 'D';
        for(int i = 0 ; i < num ; ++i){
            char jch = ch--;
            for ( int j = 0 ; j <= i ; ++j){
                cout<<jch++<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 18
        cout << "---------- Pattern 18 ----------" << endl;
        int num = 3;
        char ch = 'A';
        for(int i = 0 ; i < num ; ++i){
            char jch = ch++;
            for ( int j = 0 ; j < num ; ++j){
                cout<<jch++<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 19
        cout << "---------- Pattern 19 ----------" << endl;
        int num = 4;

        for(int i = 0 ; i < num ; ++i)
        {
            for (int j = 0; j < num; j++)
            {
                if(j < num - i - 1){
                    cout<<"  ";
                }  else{
                    cout<<"* ";
                }
            }
            cout<<endl;
        }
    }

    {
        // Pattern 20
        cout << "---------- Pattern 20 ----------" << endl;
        int num = 4;

        for(int i = 0 ; i < num ; ++i)
        {
            for (int j = 0; j < i; j++)
            {
                cout<<"  ";
            }

            for(int j = 0 ; j < num - i ; ++j){
                cout<<"* ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 21
        cout << "---------- Pattern 21 ----------" << endl;
        int num = 4;

        for(int i = 1 ; i <=  num ; ++i)
        {
            for (int j = 1; j < i; j++)
            {
                cout<<"  ";
            }

            for(int j = 0 ; j <= num - i ; ++j){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 22
        cout << "---------- Pattern 22 ----------" << endl;
        int num = 4;

        for(int i = 1 ; i <=  num ; ++i)
        {
            for (int j = 1; j <= num - i; j++)
            {
                cout<<"  ";
            }

            for(int j = 1 ; j <= i ; ++j){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 23
        cout << "---------- Pattern 23 ----------" << endl;
        int num = 4;

        for(int i = 1 ; i <= 4 ; ++i){
            for (int j = 1 ; j < i ; j++)
            {
                cout<<"  ";
            }

            for(int j = i ; j <= 4 ; ++j ){
                cout<<j<<" ";
            }
            cout<<endl;
        } 
    }

    {
        // Pattern 24
        cout << "---------- Pattern 24 ----------" << endl;
        int num = 4;
        int count = 1;

        for(int i = 1 ; i <= 4 ; ++i){
            for (int j = 1 ; j < i ; j++)
            {
                cout<<"  ";
            }

            for(int j = i ; j <= 4 ; ++j ){
                cout<<count++<<" ";
            }
            cout<<endl;
        } 
    }

    {
        // Pattern 25
        cout << "---------- Pattern 25 ----------" << endl;
        int count = 1;

        for(int i = 1 ; i <= 4 ; ++i){
            for(int j = 1 ; j <= 4 - i ; ++j){
                cout<<"  ";
            }

            for(int j = 1 ; j <=i ; ++j){
                cout<<count++<<" ";
            }
            cout<<endl;
        }
    }

    {
        // Pattern 26
        cout << "---------- Pattern 26 ----------" << endl;
        int num = 4;
        int count = 1;

        for(int i = 0 ; i < num ; ++i){
            for(int j = 0 ; j < num - i -1; ++j ){
                cout<<"  ";
            }

            for(int j = 1 ; j <= i + 1 ; ++j){
                cout<<j<<" ";
            }

            for(int j = i ; j > 0 ; --j ){
                cout<<j<<" ";
            }

            cout<<endl;
        }
    }

    return 0;
}

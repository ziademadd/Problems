#include <iostream>
#include <String>

using namespace std;

int main()
{
    string S ;
    cout <<" Enter Any Word " << endl ;
    cin >> S ;

    int A=0, M=0 ;

    for( int i=0 ; i< S.length() ; i++ )
    {
        if (S[i]== 'A')
        {
            A++ ;
        }
        else if (S[i]== 'M')
        {
            M++ ;
        }

    }
    if (A > M)
    {
        cout << A << endl ;
        cout << " Ahmed" << endl ;
    }
    else if (A < M )
    {
        cout << M << endl ;

        cout << "Mostafa" << endl;


    }
    else
    {
        cout<<"Friendship" << endl;
    }

    return 0;
}


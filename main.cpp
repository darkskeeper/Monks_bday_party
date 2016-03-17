#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while ( T-- )
    {
        set <string> s;
        set <string> :: iterator it;
        string str;
        int N;
        cin >> N;
        for ( int i = 0; i < N ; i++ )
        {
            cin >> str;
            if ( !s.count(str) )
            {
                s.insert(str);
            }
        }
        for ( it = s.begin() ; it != s.end() ; ++it )
        {
            cout << *it << endl;
        }
    }
    return 0;
}

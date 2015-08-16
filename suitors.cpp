#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvec;
    int n;
    
    cout << "Enter num of suitors => ";
    cin  >> n;
    myvec.resize(n);
    
    for (int i = 0; i < n; i++)
    {
        myvec.at(i) = i + 1;
    }


    for (int i = 2; myvec.size() > 1; i = (i + 2) % myvec.size())
    {
        myvec.erase(myvec.begin() +  i );
        
        for (int j = 0; j < myvec.size(); j++)
            cout << myvec.at(j);
        cout << endl;
    }
    
    return 0;
}
#include <iostream>
#include <map>
using namespace std;

void MapTest1()
{
    map<int, int>m;
    for (int i = 0; i < 50; i++)
    {
        m.insert(make_pair(i, i + 1));
    }
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) // 不能进行++
    {
        if ( it->first % 2 == 0 )
            m.erase(it); // 迭代器先失效
    }
    for (it = m.begin(); it != m.end();it++)
    {
        cout << it->first << " ";
    }
    cout << endl;
}

void MapTest2()
{
    map<int, int>m;
    for (int i = 0; i < 50; i++)
    {
        m.insert(make_pair(i, i + 1));
    }
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); )
    {
        if ( it->first % 2 == 0 )
            m.erase(it++); // 这句话分三步走，先把iter传值到erase里面，然后iter自增，然后执行erase,所以iter在失效前已经自增了。
        else
            it++;
    }
    for (it = m.begin(); it != m.end();it++)
    {
        cout << it->first << " ";
    }
    cout << endl;
}

int main() {

    //MapTest1(); //
    MapTest2();
    return 0;
}





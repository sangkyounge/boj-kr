//미완성
#include <iostream>
#include<queue>

using namespace std;

int main()
{

    // 입출력 속도 향상 시켜주는 것
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue <int> q;

    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        string str;
        cin >> str;
        if (str == "push") {

            int num;
            cin >> num;
            q.push(num);
        }
        else if (str == "pop")
        {
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }


            else
                cout << -1 << "\n";
        }

        else if (str == "size")
        {
            cout << q.size()<<"\n";

        }

        else if (str == "empty")
        {
            //cout << q.empty() << '\n';
            if (!q.empty())
                cout << 0<< "\n";
            else
                cout << 1<< "\n";
        }
        else if (str == "front")
        {
            if (!q.empty())
                cout << q.front() << "\n";
            else
                cout << -1 << "\n";
        }
        else
        {
            if (!q.empty())
                cout << q.back()<< "\n";
            else
                cout << -1<< "\n";
        }



        
    }
    return 0;
}
//题目链接：https://www.nowcoder.com/practice/9a1e26180e8d48e69df2f54f3ac303dd?tpId=225&tqId=2194255&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225

//#include <iostream>
//#include <deque>
//using namespace std;
//
//class Guest {
//public:
//    string name;
//    bool vip;
//
//    Guest(string name, bool vip) {
//        this->name = name;
//        this->vip = vip;
//    }
//};
//
//int main() {
//
//    Guest guest1("张三", false);
//    Guest guest2("李四", false);
//    Guest vipGuest("王五", true);
//    deque<Guest> deque;
//
//    deque.push_front(vipGuest);
//    deque.push_back(guest1);
//    deque.push_back(guest2);
//
//
//    for (Guest g : deque) {
//        cout << g.name << " ";
//    }
//
//    return 0;
//}

//题目链接：https://www.nowcoder.com/practice/ffaf8888a89a4bbab80767d18b401a26?tpId=225&tqId=2194080&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
#include <iostream>
// write your code here......
#include<set>
using namespace std;

int main() {

    char str[100] = { 0 };
    cin.getline(str, sizeof(str));

    // write your code here......
    set<char> s;
    for (auto e : str)
    {
        if (e != '\0')
            s.insert(e);
        else
            break;
    }

    for (auto e : s)
    {
        cout << e;
    }
    cout << endl;
    return 0;
}

//#include<iostream>
//#include<set>
//using namespace std;
//
//int main()
//{
//    set<int> s;
//    s.insert(1);
//    s.insert(1);
//    for (auto e : s)
//    {
//        cout << e << endl;
//    }
//    return 0;
//}
//上传github
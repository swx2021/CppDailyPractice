////题目链接：https://www.nowcoder.com/practice/ec2a5ab818be4851948d5b0d83a3d8f4?tpId=225&tqId=2194760&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include <iostream>
//// write your code here......
//#include<map>
//
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//    map<char, int> m;
//    for (auto e : str)
//    {
//        if (e == '\0')
//            break;
//        if (isalpha(e))
//        {
//            m[e]++;
//        } 
//    }
//    for (auto e : m)
//        cout << e.first << ":" << e.second << endl;
//
//    return 0;
//}

//////测试键的默认值
//#include<iostream>
//#include<map>
//using namespace std;
//
//int main()
//{
//	map<char,int> m;
//	m['k'];
//    m['d'];
//    m['e'];
//    m['g'];
//    for (auto e : m)
//    {
//        cout << e.first <<":"<<e.second<<endl;
//    }
//	
//	return 0;
//}

//题目链接：https://www.nowcoder.com/practice/0787459e92bc4360ba48b094b7f21577?tpId=225&tqId=2368656&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
////#include<bits/stdc++.h>
//#include<iostream>
//#include<map>
//using namespace std;
//int main() {
//	//write your code here......
//	int n, m,k, x;
//	cin >> n >> m;
//	map<int, bool>mp;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> k;
//		mp[k] = true;
//		//pair<int,bool> p = make_pair(x, true);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> x;
//		if (mp[x])
//			cout << "yes" << endl;
//		else
//			cout << "no" << endl;
//	}
//	
//
//
//
//	return 0;
//}

//题目链接：https://www.nowcoder.com/practice/0f02d35dcd564f0a87865d604eccbe18?tpId=225&tqId=2190741&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
#include <iostream>
using namespace std;

class Cube {

    // write your code here......
    int _length;
    int _width;
    int _height;
public:
    /*Cube(int length, int width, int height)
        :_length(length),
        _width(width),
        _height(height)*/
    void setLength(int length)
    {
        _length = length;
    }

    void setWidth(int width)
    {
        _width = width;
    }

    void setHeight(int height)
    {
        _height = height;
    }

    int getLength()
    {
        return _length;
    }

    int getWidth()
    {
        return _width;
    }

    int getHeight()
    {
        return _height;
    }

    int getArea() 
    {
        return (_length * _width + _length * _height + _width * _height)*2;
    }

    int getVolume()
    {
        return _length * _width * _height;
    }

};

int main() {

    int length, width, height;
    cin >> length;
    cin >> width;
    cin >> height;

    Cube c;
    c.setLength(length);
    c.setWidth(width);
    c.setHeight(height);

    cout << c.getLength() << " "
        << c.getWidth() << " "
        << c.getHeight() << " "
        << c.getArea() << " "
        << c.getVolume() << endl;

    return 0;
}
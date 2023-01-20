//题目链接：https://www.nowcoder.com/practice/6b099f3a8e3745b592203f14e3954411?tpId=225&tqId=2368193&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include<iostream>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	void set(int x, int y) {
//		length = x;
//		width = y;
//	}
//	int getlength() {
//		return length;
//	}
//	int getwidth() {
//		return width;
//	}
//	int area() {
//		return length * width;
//	}
//	// write your code here.....
//
//	void judge()
//	{
//		if (getlength() <= getwidth())
//		{
//			int tmp = length;
//			length = width;
//			width = tmp;
//		}
//		
//	}
//	
//	string cancover(rectangle& r)
//	{
//		judge();
//		r.judge();
//		string s;
//		if (area() >= r.area() && length>=r.length && width >= r.width)
//			s =  "yes";
//		else
//			s =  "no";
//		return s;
//	}
//};
//
//int main() {
//	int l1, w1, l2, w2;
//	cin >> l1 >> w1 >> l2 >> w2;
//	rectangle a, b;
//	a.set(l1, w1);
//	b.set(l2, w2);
//	cout << a.cancover(b);
//	return 0;
//}

//题目链接：https://www.nowcoder.com/practice/2809d720c7024f959b283f8444d9bdc9?tpId=225&tqId=2190803&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Person类
//class Person {
//private:
//    string _name;    // 姓名
//    int _age;    // 年龄
//
//    // write your code here......
//public:
//    Person(string name, int age) :_name(name),_age(age){}
//    void showPerson() {
//        cout << _name << " " << _age << endl;
//    }
//};
//
//int main() {
//
//    string name;
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p(name, age);
//    p.showPerson();
//
//    return 0;
//}

//题目链接：https://www.nowcoder.com/practice/1f36f85726474afbb103f65a24106824?tpId=225&tqId=2368205&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include<iostream>
//using namespace std;
//class Array {
//private:
//	int n;//数组大小 
//	int* a;//数组 
//public:
//	// write your code here......
//	Array()
//	{
//		int x = 0;
//		cin >> n;
//		a = new int[n];
//		for (int i = 0;i<n;i++)
//		{
//			cin >> x;
//			a[i] = x;
//		}
//	}
//
//	~Array() {
//		delete[]a;
//	}
//	void show() {
//		for (int i = 0; i < n; i++) cout << a[i] << ' ';
//	}
//};
//int main() {
//	Array a;
//	a.show();
//	return 0;
//}

//题目链接：https://www.nowcoder.com/practice/535753110cbd4e8987adc2e67f392ab7?tpId=225&tqId=2190866&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include <iostream>
//#include <string.h>
//#pragma warning(disable : 4996)
//using namespace std;
//
//class Person {
//
//public:
//    char* _name; // 姓名
//    int _age;    // 年龄
//
//    Person(const char* name, int age) {
//        _name = new char[strlen(name) + 1];
//        strcpy(_name, name);
//        _age = age;
//    }
//
//    // write your code here......
//    Person(Person& p)
//    {
//        _name = new char[strlen(p._name) + 1];
//        strcpy(_name, p._name);
//        _age = p._age;
//    }
//
//    void showPerson() {
//        cout << _name << " " << _age << endl;
//    }
//
//    ~Person() {
//        if (_name != nullptr) {
//            delete[] _name;
//            _name = nullptr;
//        }
//    }
//
//};
//
//int main() {
//
//    char name[100] = { 0 };
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p1(name, age);
//    Person p2 = p1;
//
//    p2.showPerson();
//
//    return 0;
//}

//题目链接：https://www.nowcoder.com/practice/73014020b7d54622ac5000b06eaaa4ef?tpId=225&tqId=2368208&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
#include<iostream>
using namespace std;
class Array {
private:
	int n;//数组大小 
	int* a;//数组 
public:
	Array() {
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++) cin >> a[i];
	}
	~Array() {
		delete[]a;
	}
	int getlen() {
		return n;
	}
	int get(int i) {
		return a[i];
	}
	// write your code here......
	Array(Array& arr)
	{
		n = arr.n;
		a = new int[n];
		for (int i = 0;i<n;i++)
		{
			a[i] = arr.a[i];
		}
	}

	void show() {
		for (int i = 0; i < n; i++) cout << a[i] << ' ';
	}
};
int main() {
	Array a;
	Array b = a;
	b.show();
	return 0;
}

# include <iostream>
# include <Windows.h>


using namespace std;
//博客代码测试

//class X
//{
//public:
//	int i;
//	X fun() { return X(); }
//	void modify() { ++i; }
//};
//
//
//
//int main(void)
//{
//	X x;
//
//	(x.fun()).modify();
//	// x.fun()返回的是临时对象，如果它是const常量，为什么可以调用非const成员函数？？
//	cout << "程序运行成功" << endl;
//	return 0;
//}

//class Person
//{
//private:
//	int _age;
//	int _id;
//public:
//	int getAge()
//	{
//		return _age;
//	}
//	Person(int age = 10, int id = 200)
//	{
//		_age = age;
//		_id = id;
//	}
//};
//int main()
//{
//	Person p;
//	cout << p.getAge() << endl;
//	return 0;
//}
//Person* p = new Person(15, 20);
//Person* p2 = new Person{ 15,0 };

//题目链接：https://www.nowcoder.com/practice/e717e94202304f34b7ed95b2d31fce6b?tpId=225&tqId=2368411&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // 小时
//    int minutes;    // 分钟
//
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//
//    // write your code here......
//    bool operator<(Time& t)
//    {
//        bool flag = false;
//        if ((hours * 60 + minutes) < (t.hours * 60 + t.minutes))
//            flag = true;
//
//        return flag;
//    }
//
//};
//
//int main() {
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(6, 6);
//
//    if (t1 < t2) cout << "yes"; else cout << "no";
//    return 0;
//}

//题目链接：https://www.nowcoder.com/practice/a4e629b3a82e494d8021a2109da1c438?tpId=225&tqId=2192235&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include <iostream>
//using namespace std;
//
//class Base {
//
//private:
//    int x;
//    int y;
//
//public:
//    Base(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    int getY() {
//        return y;
//    }
//
//};
//
//class Sub : public Base {
//
//private:
//    int z;
//
//public:
//    Sub(int x, int y, int z) :Base(x, y) {
//        // write your code here
//        this->z = z;
//    }
//
//    int getZ() {
//        return z;
//    }
//
//    int calculate() {
//        return Base::getX() * Base::getY() * this->getZ();
//    }
//
//};
//
//int main() {
//
//    int x, y, z;
//    cin >> x;
//    cin >> y;
//    cin >> z;
//    Sub sub(x, y, z);
//    cout << sub.calculate() << endl;
//
//    return 0;
//}

//题目链接：https://www.nowcoder.com/practice/8521afcde7d147bf9975352fc5f3fb7c?tpId=225&tqId=2192345&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include <iostream>
//using namespace std;
//
//class Base {
//
//private:
//    int x;
//    int y;
//
//public:
//    Base(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    int getY() {
//        return y;
//    }
//
//    void calculate() {
//        cout << getX() * getY() << endl;
//    }
//
//};
//
//class Sub : public Base {
//    // write your code here......
//public:
//    Sub(int x, int y) :Base(x, y)
//    {
//
//    }
//    void calculate()
//    {
//        if (getY != 0)
//        {
//            cout << getX() / getY() << endl;
//        }
//        else
//            cout << "Error" << endl;
//        
//    }
//};
//
//int main() {
//
//    int x, y, z;
//    cin >> x;
//    cin >> y;
//    Sub sub(x, y);
//    sub.calculate();
//
//    return 0;
//}

//题目链接：https://www.nowcoder.com/practice/e0d0c9913e8a4087a2a24fa5a9448be0?tpId=225&tqId=2368431&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include<bits/stdc++.h>
#include<iostream>

using namespace std;
class rectangle {
private:
	int length, width;
public:
	rectangle(int x, int y) {
		length = x;
		width = y;
	}
	void set(int x, int y) {
		length = x;
		width = y;
	}
	int area() {
		return length * width;
	}
};
class cuboid :public rectangle {
private:
	int height;
public:
	// write your code here...
	cuboid(int length_, int width_, int height_) :rectangle(length_, width_)
	{
		this->height = height_;
	}

	int getvolume()
	{
		return area() * height;
	}

};
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	cuboid a(x, y, z);
	cout << a.getvolume();
	return 0;
}

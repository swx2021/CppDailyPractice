//题目链接：https://www.nowcoder.com/practice/fdbbd0aaf89f49818e9ee1afb02deb10?tpId=225&tqId=2190767&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include <iostream>
//#include<math.h>
//using namespace std;
//
//// 点类
//class Pointer {
//
//private:
//    int x;  // x 坐标
//    int y;  // y 坐标
//
//public:
//    void setX(int x) {
//        this->x = x;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    void setY(int y) {
//        this->y = y;
//    }
//
//    int getY() {
//        return y;
//    }
//
//};
//
//// 圆类
//class Circle {
//
//private:
//    Pointer center; // 圆心
//    int radius; // 半径
//
//public:
//    void setCenter(int x, int y) {
//        center.setX(x);
//        center.setY(y);
//    }
//
//    void setRadius(int radius) {
//        this->radius = radius;
//    }
//
//    // write your code here......
//    void isPointerInCircle(Pointer& p)
//    {
//        double dis = sqrt((p.getX() - center.getX()) * (p.getX() - center.getX()) + (p.getY() - center.getY()) * (p.getY() - center.getY()));
//        if (dis < 5)
//            cout << "in" << endl;
//        else if (dis == 5)
//            cout << "on" << endl;
//        else
//            cout << "out" << endl;
//    }
//
//
//};
//
//int main() {
//
//    // 键盘输入点的坐标
//    int x, y;
//    cin >> x;
//    cin >> y;
//
//    // 创建一个点
//    Pointer p;
//    p.setX(x);
//    p.setY(y);
//
//    // 创建一个圆
//    Circle c;
//    c.setCenter(5, 0);
//    c.setRadius(5);
//
//    // 判断点和圆的关系
//    c.isPointerInCircle(p);
//
//    return 0;
//}

//题目链接：https://www.nowcoder.com/practice/61e0c4069baf474db635cd492ac9ba9c?tpId=225&tqId=2368169&ru=/exam/oj&qru=/ta/primary-grammar-cpp/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D225
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class rectangle {
private:
	int length, width;
public:
	void set(int x, int y) {
		length = x;
		width = y;
	}
	int getlength() {
		return length;
	}
	int getwidth() {
		return width;
	}
	int area() {
		return length * width;
	}
	void compare(rectangle a) {
		// write your code here......
		if (area() > a.area())
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
};
int main() {
	int l1, w1, l2, w2;
	cin >> l1 >> w1 >> l2 >> w2;
	rectangle a, b;
	a.set(l1, w1);
	b.set(l2, w2);
	a.compare(b);
	return 0;
}

//怎么上传代码到github上又失败了？
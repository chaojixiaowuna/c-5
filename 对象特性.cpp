//利用构造函数和析构函数对 对象进行初始化和清理
//构造函数  类名（） {}
//没有返回值也不写VOID
//函数名与类名相同
//构造函数可以有参数 因此可以重载
//程序在调用对象时会自动调用构造，无须手动调用，而且只会调用一次
//
//析构函数 ~类名() {}
//没有返回值 也不用写void
//函数名与类名相同，在名称前加上符号~
//析构函数不可以有参数，因此不可以发生重载
//程序在对象销毁前会自动调用西沟、无须手动调用，而且只会调用一次
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	person()
//	{
//		cout << "调用函数的构造函数" << endl;
//	}
//	~person()
//	{
//		cout << "调用函数的析构函数" << endl;
//	}
//};
////析构函数和构造函数都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
//void test01()
//{
//	person p;//在栈上的数据 在test01执行完毕后 释放这个对象
//}
//int main()
//{
//	person p;
//	//test01();
//	system("pause");
//	return 0;
//}


//构造函数的分类及调用
//按参数分为 有参构造 无参构造(默认构造)
//按拷贝分类 普通构造 拷贝构造函数
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()//无参构造
//	{
//		cout << "调用函数的无参构造函数" << endl;
//	}
//	Person(int a)//有参构造
//	{
//		age = a;
//		cout << "调用函数的有参构造函数" << endl;
//	}
//	Person(const Person& p)//拷贝构造函数
//	{
//		age = p.age;//将传入的人身上的所有属性，拷贝到我身上
//		cout << "调用函数的拷贝构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "调用函数的析构函数" << endl;
//	}
//
//	int age;
//};
//调用 
//1、括号法
// 
//2、显示法
// 
//3、隐式转换法

//void test01()
//{
//	//一、括号法
//	//Person p1;
//	//Person p2(10);
//	//Person p3(p2);
//	//cout << "p2的年龄为："<< p2.age<< endl;
//	//cout << "p3的年龄为：" <<p3.age<< endl;
//
//	//注意事项1
//	//调用默认构造函数时 不要加（）
//	//因为下面这行代码，编译器会认为是一个函数的声明，不会认为在创建对象
//	//Person p1();
//	//void   p1();
//	//二、显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造 
//	//Person p3 = Person(p2);//拷贝构造
//
//	//Person(10);//匿名对象 特点：当前执行结束后，系统会立即回收匿名对象
//	
//	//cout << "aaaa" << endl;
//	/*注意事项2
//	不要利用拷贝构造函数初始化匿名对象 编译器会认为 Person(p3) == = Person p3;对象定义
//	会导致重定义的错误*/
//	//Person(p2);
//	
//	//3、隐式转换法
//	Person p1;
//	Person p2 = 10;//===Person p2==Person(10);
//	Person p3 = p2;//===Person p3==Person(p2);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//拷贝构造函数调用时机
//1、使用一个已经创建完毕的对象来初始化一个新对象
//2、值传递的方式给函数参数传值
//3、以值方式返回局部对象

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数的调用" << endl;
//	}
//	Person(int a)
//	{
//		m_age = a;
//		cout << "Person有参构造函数的调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person拷贝构造函数的调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
//	}
//	int m_age;
//};
//void younger(Person p)//值传递的方式给函数传值 
//{
//	cout << "我更年轻了！" << endl;
//}
//Person older()//以值方式返回局部对象 
//{
//	Person p3;
//	return p3;
//	cout << "我更老了！" << endl;
//}
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);//使用一个已经创建完毕的对象来初始化一个新对象
//	cout << "p2的年龄是：" <<p2.m_age<<"岁" << endl;
//	younger(p2);
//	older();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//构造函数调用规则
//默认情况下，c++编译器至少给一个类添加三个函数
//1、默认构造函数（无参，函数体为空）
//2、默认析构函数（无参，函数体为空）
//3、默认拷贝构造函数，对属性进行值拷贝
//
//构造函数调用规则如下
//1、如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//2、如果用户定义拷贝构造函数，c++不会再提供其他构造函数

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数的调用" << endl;
//	}
//	Person(int a)
//	{
//		m_age = a;
//		cout << "Person有参构造函数的调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person拷贝构造函数的调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
//	}
//	int m_age;
//};
//void younger(Person p)//值传递的方式给函数传值 
//{
//	cout << "我更年轻了！" << endl;
//}
//Person older()//以值方式返回局部对象 
//{
//	Person p3;
//	return p3;
//	cout << "我更老了！" << endl;
//}
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);//使用一个已经创建完毕的对象来初始化一个新对象
//	cout << "p2的年龄是：" <<p2.m_age<<"岁" << endl;
//	younger(p2);
//	older();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//深拷贝 浅拷贝
//浅拷贝 简单的复制拷贝操作
//深拷贝 在堆区重新申请空间，进行拷贝操作
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数的调用" << endl;
//	}
//	Person(int a,int height)
//	{
//		m_age = a;
//		m_Height = new int(height);
//		cout << "Person有参构造函数的调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		//m_Height = p.m_Height;  系统默认实现就是这行代码
//		m_Height = new int(*p.m_Height);
//		cout << "Person拷贝构造函数的调用" << endl;
//	}
//	~Person()
//	{
//		//析构代码，将堆区开辟数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//		}
//		cout << "Person析构函数的调用" << endl;
//	}
//	int m_age;
//	int* m_Height;
//};
// 
//void test01()
//{
//	Person p1(10,160);//深拷贝
//	cout << "年龄是：" << p1.m_age << "身高是：" <<*p1.m_Height<< endl;
//	Person p2(p1);//浅拷贝
//	cout << "年龄是：" <<p2.m_age<<"身高是：" <<*p2.m_Height << endl;
//	//如果利用编译器提供的拷贝构造函数，会做浅拷贝操作
//	//浅拷贝带来的问题就是堆区的内存重复释放
//	//浅拷贝的问题 要利用深拷贝进行解决
//	//自己实现拷贝构造函数 解决浅拷贝带来的问题
//
//	//如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//初始化列表
//c++提供了初始化列表语法，用来初始化属性
//语法：  构造函数()：属性1（值1），属性2（值2）...{}

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	//传统初始化方法
//	/*Person(int a,int b,int c)
//	{
//		m_a = a;
//		m_b = b;
//		m_c = c;
//	}*/
//	//初始化列表
//	//Person() :m_a(10), m_b(20),m_c(30){}
//
//	Person(int a,int b,int c):m_a(a),m_b(b),m_c(c){}
//	int m_a;
//    int m_b;
//    int m_c;
//};
//int main()
//{
//	//Person p(10, 20, 30);
//	//cout << "a= " << p.m_a << endl;
//	//cout << "b= " << p.m_b << endl;
//	//cout << "c= " << p.m_c << endl;
//
//	Person p(30,20,10);
//	cout << "a= " << p.m_a << endl;
//	cout << "b= " << p.m_b << endl;
//	cout << "c= " << p.m_c << endl;
//	system("pause");
//	return 0;
//}

//类对象作为类成员
//c++类中的成员可以是另一个类的对象，我们称该成员为对象成员
#include<iostream>
using namespace std;
class Phone
{
public:
	Phone(string pname)
	{
		m_pname = pname;
		cout << "Phone构造函数的调用" << endl;
	}
	~Phone()
	{
		cout << "Phone析构函数的调用" << endl;
	}
	string m_pname;
};
class Person
{
	
public:
	//相当于 Phone m_phone=pname  隐式转换法
	Person(string name,string pname) :m_name(name), m_phone(pname) 
	{
		cout << "Person构造函数的调用" << endl;
	}
	~Person()
	{
		cout << "Person析构函数的调用" << endl;
	}
	string m_name;
	Phone m_phone;
};
int main()
{
	Person p("小桀","苹果");
	cout << "姓名：" <<p.m_name << endl;
	cout << "手机：" <<p.m_phone.m_pname << endl;


}
//当其他类对象作为本类成员，构造时先构造类对象，再构造自身，析构的顺序与构造相反
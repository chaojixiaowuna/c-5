//���ù��캯�������������� ������г�ʼ��������
//���캯��  �������� {}
//û�з���ֵҲ��дVOID
//��������������ͬ
//���캯�������в��� ��˿�������
//�����ڵ��ö���ʱ���Զ����ù��죬�����ֶ����ã�����ֻ�����һ��
//
//�������� ~����() {}
//û�з���ֵ Ҳ����дvoid
//��������������ͬ��������ǰ���Ϸ���~
//���������������в�������˲����Է�������
//�����ڶ�������ǰ���Զ����������������ֶ����ã�����ֻ�����һ��
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	person()
//	{
//		cout << "���ú����Ĺ��캯��" << endl;
//	}
//	~person()
//	{
//		cout << "���ú�������������" << endl;
//	}
//};
////���������͹��캯�����Ǳ����е�ʵ�֣���������Լ����ṩ�����������ṩһ����ʵ�ֵĹ��������
//void test01()
//{
//	person p;//��ջ�ϵ����� ��test01ִ����Ϻ� �ͷ��������
//}
//int main()
//{
//	person p;
//	//test01();
//	system("pause");
//	return 0;
//}


//���캯���ķ��༰����
//��������Ϊ �вι��� �޲ι���(Ĭ�Ϲ���)
//���������� ��ͨ���� �������캯��
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()//�޲ι���
//	{
//		cout << "���ú������޲ι��캯��" << endl;
//	}
//	Person(int a)//�вι���
//	{
//		age = a;
//		cout << "���ú������вι��캯��" << endl;
//	}
//	Person(const Person& p)//�������캯��
//	{
//		age = p.age;//������������ϵ��������ԣ�������������
//		cout << "���ú����Ŀ������캯��" << endl;
//	}
//	~Person()
//	{
//		cout << "���ú�������������" << endl;
//	}
//
//	int age;
//};
//���� 
//1�����ŷ�
// 
//2����ʾ��
// 
//3����ʽת����

//void test01()
//{
//	//һ�����ŷ�
//	//Person p1;
//	//Person p2(10);
//	//Person p3(p2);
//	//cout << "p2������Ϊ��"<< p2.age<< endl;
//	//cout << "p3������Ϊ��" <<p3.age<< endl;
//
//	//ע������1
//	//����Ĭ�Ϲ��캯��ʱ ��Ҫ�ӣ���
//	//��Ϊ�������д��룬����������Ϊ��һ��������������������Ϊ�ڴ�������
//	//Person p1();
//	//void   p1();
//	//������ʾ��
//	//Person p1;
//	//Person p2 = Person(10);//�вι��� 
//	//Person p3 = Person(p2);//��������
//
//	//Person(10);//�������� �ص㣺��ǰִ�н�����ϵͳ������������������
//	
//	//cout << "aaaa" << endl;
//	/*ע������2
//	��Ҫ���ÿ������캯����ʼ���������� ����������Ϊ Person(p3) == = Person p3;������
//	�ᵼ���ض���Ĵ���*/
//	//Person(p2);
//	
//	//3����ʽת����
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

//�������캯������ʱ��
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//2��ֵ���ݵķ�ʽ������������ֵ
//3����ֵ��ʽ���ؾֲ�����

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯���ĵ���" << endl;
//	}
//	Person(int a)
//	{
//		m_age = a;
//		cout << "Person�вι��캯���ĵ���" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person�������캯���ĵ���" << endl;
//	}
//	~Person()
//	{
//		cout << "Person���������ĵ���" << endl;
//	}
//	int m_age;
//};
//void younger(Person p)//ֵ���ݵķ�ʽ��������ֵ 
//{
//	cout << "�Ҹ������ˣ�" << endl;
//}
//Person older()//��ֵ��ʽ���ؾֲ����� 
//{
//	Person p3;
//	return p3;
//	cout << "�Ҹ����ˣ�" << endl;
//}
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);//ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//	cout << "p2�������ǣ�" <<p2.m_age<<"��" << endl;
//	younger(p2);
//	older();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//���캯�����ù���
//Ĭ������£�c++���������ٸ�һ���������������
//1��Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
//2��Ĭ�������������޲Σ�������Ϊ�գ�
//3��Ĭ�Ͽ������캯���������Խ���ֵ����
//
//���캯�����ù�������
//1������û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
//2������û����忽�����캯����c++�������ṩ�������캯��

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯���ĵ���" << endl;
//	}
//	Person(int a)
//	{
//		m_age = a;
//		cout << "Person�вι��캯���ĵ���" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person�������캯���ĵ���" << endl;
//	}
//	~Person()
//	{
//		cout << "Person���������ĵ���" << endl;
//	}
//	int m_age;
//};
//void younger(Person p)//ֵ���ݵķ�ʽ��������ֵ 
//{
//	cout << "�Ҹ������ˣ�" << endl;
//}
//Person older()//��ֵ��ʽ���ؾֲ����� 
//{
//	Person p3;
//	return p3;
//	cout << "�Ҹ����ˣ�" << endl;
//}
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);//ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//	cout << "p2�������ǣ�" <<p2.m_age<<"��" << endl;
//	younger(p2);
//	older();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//��� ǳ����
//ǳ���� �򵥵ĸ��ƿ�������
//��� �ڶ�����������ռ䣬���п�������
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯���ĵ���" << endl;
//	}
//	Person(int a,int height)
//	{
//		m_age = a;
//		m_Height = new int(height);
//		cout << "Person�вι��캯���ĵ���" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		//m_Height = p.m_Height;  ϵͳĬ��ʵ�־������д���
//		m_Height = new int(*p.m_Height);
//		cout << "Person�������캯���ĵ���" << endl;
//	}
//	~Person()
//	{
//		//�������룬�����������������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//		}
//		cout << "Person���������ĵ���" << endl;
//	}
//	int m_age;
//	int* m_Height;
//};
// 
//void test01()
//{
//	Person p1(10,160);//���
//	cout << "�����ǣ�" << p1.m_age << "����ǣ�" <<*p1.m_Height<< endl;
//	Person p2(p1);//ǳ����
//	cout << "�����ǣ�" <<p2.m_age<<"����ǣ�" <<*p2.m_Height << endl;
//	//������ñ������ṩ�Ŀ������캯��������ǳ��������
//	//ǳ����������������Ƕ������ڴ��ظ��ͷ�
//	//ǳ���������� Ҫ����������н��
//	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
//
//	//����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//��ʼ���б�
//c++�ṩ�˳�ʼ���б��﷨��������ʼ������
//�﷨��  ���캯��()������1��ֵ1��������2��ֵ2��...{}

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	//��ͳ��ʼ������
//	/*Person(int a,int b,int c)
//	{
//		m_a = a;
//		m_b = b;
//		m_c = c;
//	}*/
//	//��ʼ���б�
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

//�������Ϊ���Ա
//c++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ�����Ա
#include<iostream>
using namespace std;
class Phone
{
public:
	Phone(string pname)
	{
		m_pname = pname;
		cout << "Phone���캯���ĵ���" << endl;
	}
	~Phone()
	{
		cout << "Phone���������ĵ���" << endl;
	}
	string m_pname;
};
class Person
{
	
public:
	//�൱�� Phone m_phone=pname  ��ʽת����
	Person(string name,string pname) :m_name(name), m_phone(pname) 
	{
		cout << "Person���캯���ĵ���" << endl;
	}
	~Person()
	{
		cout << "Person���������ĵ���" << endl;
	}
	string m_name;
	Phone m_phone;
};
int main()
{
	Person p("С��","ƻ��");
	cout << "������" <<p.m_name << endl;
	cout << "�ֻ���" <<p.m_phone.m_pname << endl;


}
//�������������Ϊ�����Ա������ʱ�ȹ���������ٹ�������������˳���빹���෴
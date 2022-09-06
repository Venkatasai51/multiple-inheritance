#include<iostream>
class base1
{
	public:
		void a()
	{
		std::cout<<"a";
	}
};
class base2
{
	public:
		void d()
	{
		std::cout<<"d";
	}
};
class derived:public base1,public base2
{
	public:
		void b()
		{
			std::cout<<"b";
		}
};
int main()
{
	derived obj;
	obj.b();
	obj.a();
	obj.d();
	return 0;
}

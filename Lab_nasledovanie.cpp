#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Harbinger																			
{
private:
	string h_name;
	string CatchPhrase;
	int h_age;
public:
	Harbinger(string name = "", int age = 0) : h_name(name), h_age(age)					
	{}

	Harbinger(string name, int age, string CatchPhrase1)
	{
		h_name = name;
		h_age = age;
		CatchPhrase = CatchPhrase1;
	}

	void setName(string name)															
	{h_name = name;}
	void setAge(int age)
	{h_age = age;}
	void setCatchPhrase(string CatchPhrase1)
	{CatchPhrase = CatchPhrase1;}

	string getCatchPhrase() const														
	{return CatchPhrase;}
	string getName() const
	{return h_name;}
	int getAge() const
	{return h_age;}
};

class Prophet : public Harbinger														
{
private:
	string ph_name;
	string ph_call;
	int ph_age;
	string* MagnumOpus;
public:
	Prophet(string name = "", int age = 0, string call = "") : ph_name(name), ph_age(age), ph_call(call)	
	{
		MagnumOpus = new string[3];
	}

	void findmax()																		
	{
		int b;
		for (size_t i = 0; i < 2; i++)
		{
			b = MagnumOpus[i].length();
			if (b <= MagnumOpus[i + 1].length())
			{
				ph_call = MagnumOpus[i + 1];
			}
		}
	}

	void setMagnumOpus(string MagnumOp[])												
	{
		for (size_t i = 0; i < 3; i++)
		{
			if (MagnumOp[i].length() <= 25)												
			{
				MagnumOpus[i] = MagnumOp[i];
			}
		}
		findmax();
	}

	void setpName(string name)															
	{ph_name = name;}
	void setpAge(int age)
	{ph_age = age;}
	void setpCall(string call)
	{ph_call = call;}

	const string* getMagnumOpus()														
	{return MagnumOpus;}
	string getpName() const																
	{return ph_name;}
	int getpAge() const
	{return ph_age;}
	string getpCall() const
	{return ph_call;}
};

class DeusEx : public Prophet															
{
private:
	string gd_name;
	int gd_year;
public:
	DeusEx(string name = "Budda", int year = 1001) : gd_name(name), gd_year(year)		
	{}

	void setgYear(int year)																
	{gd_year = year;}
	void setgName(string name)
	{gd_name = name;}

	int getgYear() const																
	{return gd_year;}
	string getgName() const
	{return gd_name;}

	void print()																		
	{
		cout << getName() << " v vozraste " << getAge() << " govoril, chto " << getCatchPhrase() << endl;
		cout << "Pervoe prorochestvo: " << getMagnumOpus()[0] << endl;
		cout << "Vtoroe prorochestvo: " << getMagnumOpus()[1] << endl;
		cout << "Glavnoe prorochestvo: " << getpCall() << endl;
		cout << "Tak govoril " << getpName() << " v vozraste " << getpAge() << endl;
		cout << "V god " << gd_year << " prishel " << gd_name << ", kotorogo predrakali " << getName() << " i " << getpName() << endl;
	}
};

class Believer : private DeusEx															
{

private:
	string bv_name;
	int bv_age;
public:
	Believer(string name, int age)												
	{
		bv_name = name;
		bv_age = age;
	}

	void printBeliever(DeusEx deusex, Prophet prophet)																
	{
		cout << "Veruushi " << getbName() << " molitsya " << deusex.getgName() << " imenem " << prophet.getpName() << ". C " << deusex.getgYear() << " i po sei den." << endl;
	}

	void setbAge(int age)																
	{bv_age = age;}
	void setbName(string name)
	{bv_name = name;}

	int getbAge() const																	
	{return bv_age;}
	string getbName() const
	{return bv_name;}
};

int main()
{
	SetConsoleCP(1251);														
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");

	Prophet p;
	DeusEx d("Bogovich", 300);
	Believer b("Veronika", 1);

	d.setCatchPhrase("on poel klubnichki");										
	d.setAge(70);
	d.setName("Harbard");
	d.setpName("Prorokovich");
	d.setpAge(99);
	d.setpCall("babochka");
	p.setpAge(d.getpAge());
	p.setpName(d.getpName());
	d.setgName(d.getgName());
	d.setgYear(d.getgYear());

	string Mass[3] = { "ÊKlubnichka", "Budet", "Ochen vkusnoi" };              
	d.setMagnumOpus(Mass);													

	d.print();																
	b.printBeliever(d, p);												
}


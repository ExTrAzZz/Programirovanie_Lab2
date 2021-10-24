#pragma once
#include <cmath>

class triangle // �����������
{
	double side; // ������� ��������������� ������������
public:

	triangle(double n): side(n) // ����������� ������
	{
			
	}
	
	System::String^ getInfo() // ���������� � �����������
	{
		return "�������� � �������������� �����������: \n 1) ������� ������������ = "+System::Convert::ToString(side)+"\n 2)������ ������������ = " + 
			System::Convert::ToString(height()) + "\n 3) ����������� ������������ = " + System::Convert::ToString(bisector()) + "\n 4) ������� = " + 
			System::Convert::ToString(perimetr())+"\n 5) ������� = "+System::Convert::ToString(square())+"\n";
	}

	double height() // ������ ������������
	{
		return (int)( (sqrt(3.)*side/2. )*100 )/100.;
	}

	double bisector() // ����������� ������������
	{
		return (int)( (sqrt(3.)*2./side)*100 )/100.;
	}

	double perimetr() // �������� ������������
	{
		return side * 3.;
	}

	double square() // ������� ������������
	{
		return (int)( (pow(side,2.0)*sqrt(3.0)/4)*100. )/100;
	}
};

class piramid:triangle
{
	double side, apopheme;
public:
	piramid(double n, double m):triangle(n) // ����������� ������
	{
		side = n; // �������
		apopheme = m; // �������
	}

	double volum() // ����� ��������
	{
		return System::Math::Round(sqrt(apopheme*apopheme-side*side)*square()/3, 2);
	}

	double square() // ������� ��������
	{
		return System::Math::Round(2*side*apopheme + side*side, 2);
	}

	System::String^ getInfo() // ���������� � �����������
	{
		return "�������� � ���������� ��������: \n 1) ������� �������� = "+System::Convert::ToString(side)+"\n 2) ������� = "+System::Convert::ToString(apopheme)+ "\n 3) ������� �������� = " + 
			System::Convert::ToString(square())+"\n 4) ����� �������� = "+System::Convert::ToString(volum())+"\n";
	}


};


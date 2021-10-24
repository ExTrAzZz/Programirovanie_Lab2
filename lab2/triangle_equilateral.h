#pragma once
#include <cmath>

class triangle // Треугольник
{
	double side; // Сторона равностороннего треугольника
public:

	triangle(double n): side(n) // Конструктор класса
	{
			
	}
	
	System::String^ getInfo() // Информация о треугльнике
	{
		return "Сведения о равностороннем треугльнике: \n 1) Сторона треугольника = "+System::Convert::ToString(side)+"\n 2)Высота треугольника = " + 
			System::Convert::ToString(height()) + "\n 3) Биссектриса треугольника = " + System::Convert::ToString(bisector()) + "\n 4) Площадь = " + 
			System::Convert::ToString(perimetr())+"\n 5) Площадь = "+System::Convert::ToString(square())+"\n";
	}

	double height() // Высота треугольника
	{
		return (int)( (sqrt(3.)*side/2. )*100 )/100.;
	}

	double bisector() // Биссектриса треугольника
	{
		return (int)( (sqrt(3.)*2./side)*100 )/100.;
	}

	double perimetr() // Периметр треугольника
	{
		return side * 3.;
	}

	double square() // Площадь треугольника
	{
		return (int)( (pow(side,2.0)*sqrt(3.0)/4)*100. )/100;
	}
};

class piramid:triangle
{
	double side, apopheme;
public:
	piramid(double n, double m):triangle(n) // Конструктор класса
	{
		side = n; // Сторона
		apopheme = m; // Апофема
	}

	double volum() // Объем пирамиды
	{
		return System::Math::Round(sqrt(apopheme*apopheme-side*side)*square()/3, 2);
	}

	double square() // Площаль пирамиды
	{
		return System::Math::Round(2*side*apopheme + side*side, 2);
	}

	System::String^ getInfo() // Информация о треугльнике
	{
		return "Сведения о правильной пирамиде: \n 1) Сторона пирамиды = "+System::Convert::ToString(side)+"\n 2) Апофема = "+System::Convert::ToString(apopheme)+ "\n 3) Площадь пирамиды = " + 
			System::Convert::ToString(square())+"\n 4) Объем пирамиды = "+System::Convert::ToString(volum())+"\n";
	}


};


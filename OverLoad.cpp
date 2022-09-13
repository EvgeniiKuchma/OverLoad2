//Персональный шаблон проекта С++
#include <iostream>
//Когда встроенная функция не работает
//1.Слишком большой обьем фунции
//2.Фунция является рекурсивной
//3.Фунция повторяется в одном и том же выражении нескоько раз
//4.Фунция содержит цикл, switch или if(c функцией void работатет)
using namespace std;
// if (arr[i] < 0 )
// arr[i] = -arr[i]
//Встроенная функция inline не занимает ОП(служит только для оптимизации кода)
inline int sum(int num1, int num2) 
{
	return num1 + num2;
}
//встраимаевая функция перености  свой код  в тело программы
//Так как фунцию не удается встроить она становится обычной фунцией
//На попытки автоматического встраивания функции компилятор тратит много  времени на сборку
inline int sum_AB(int A, int B)

{
	int res = 0;
	for (int i = A; i <= B; i++)
		res += i;
	return res;
}
//Перегрруженная фунция 
//могут выполнять разные действия
int max_val(int num1, int num2)
{
std::cout << "int\n";
return num1 > num2 ? num1 : num2;
}
double	max_val(double num1, double num2)
{
	std::cout << "Double\n";
	return num1 > num2 ? num1 : num2;
}
float 	max_val(float num1, float num2)
{
	std::cout << "float\n";
	return num1 > num2 ? num1 : num2;
}
int max_val(int num1 , int num2 , int num3)
{
	std::cout << "THERE int \n";
	return num1 > (num2 > num3 ? num2 : num3) ?
		num1 : (num2 > num3 ? num2 : num3);//Вложенный тернарный опреатор

}
template <typename T>
//Шаблонная фунция, индефикатор T является определителем параметров фунции
//Ее минус в том что не возможно сделать разные выводы для разных типов данных
// одно тело для разных типов данных в  фунциях
T abs(T num) 
{
	return num < 0 ? -num : num;
}






int main() 
{
	setlocale(LC_ALL, "Russian");
	int n,m;
	
	//std::cout << "Введите 2 числа: ";
	//std::cin >> n >> m;
	//Задача 1 std::cout << sum(n, m) << "\n";
	//Задача 2 std::cout << sum_AB(n, m) << "\n";
	
	//Должны отличатся толко по параматрам пергруженные функции
	//Так же не должны отличатся параметрами по умолчанию
	
	/*std::cout << max_val(4, 6) << "\n";//вызывает фунции с одинаковым названием в зависимости о типа данных
	std::cout << max_val(1.2, 1.1) << "\n";
	std::cout << max_val(5.5f, 5.9f) << "\n";//добавление f к числу позволяют первести в тип данных float, 
	 //15u unsigned,15l - long, 15ll - longlong, '1' - char
	std::cout << max_val(5, 7, 4) << "\n";*/
	
	//Шаблонные фунции

	std::cout << abs(-5) << '\n'; //5
	std::cout << abs(7.4) << '\n';//7.4
	std::cout << abs(-1.1f) << "\n";//1.1

	return 0;

}
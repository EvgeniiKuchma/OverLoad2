//������������ ������ ������� �++
#include <iostream>
//����� ���������� ������� �� ��������
//1.������� ������� ����� ������
//2.������ �������� �����������
//3.������ ����������� � ����� � ��� �� ��������� �������� ���
//4.������ �������� ����, switch ��� if(c �������� void ���������)
using namespace std;
// if (arr[i] < 0 )
// arr[i] = -arr[i]
//���������� ������� inline �� �������� ��(������ ������ ��� ����������� ����)
inline int sum(int num1, int num2) 
{
	return num1 + num2;
}
//������������ ������� ���������  ���� ���  � ���� ���������
//��� ��� ������ �� ������� �������� ��� ���������� ������� �������
//�� ������� ��������������� ����������� ������� ���������� ������ �����  ������� �� ������
inline int sum_AB(int A, int B)

{
	int res = 0;
	for (int i = A; i <= B; i++)
		res += i;
	return res;
}
//�������������� ������ 
//����� ��������� ������ ��������
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
		num1 : (num2 > num3 ? num2 : num3);//��������� ��������� ��������

}
template <typename T>
//��������� ������, ����������� T �������� ������������� ���������� ������
//�� ����� � ��� ��� �� �������� ������� ������ ������ ��� ������ ����� ������
// ���� ���� ��� ������ ����� ������ �  �������
T abs(T num) 
{
	return num < 0 ? -num : num;
}






int main() 
{
	setlocale(LC_ALL, "Russian");
	int n,m;
	
	//std::cout << "������� 2 �����: ";
	//std::cin >> n >> m;
	//������ 1 std::cout << sum(n, m) << "\n";
	//������ 2 std::cout << sum_AB(n, m) << "\n";
	
	//������ ��������� ����� �� ���������� ������������ �������
	//��� �� �� ������ ��������� ����������� �� ���������
	
	/*std::cout << max_val(4, 6) << "\n";//�������� ������ � ���������� ��������� � ����������� � ���� ������
	std::cout << max_val(1.2, 1.1) << "\n";
	std::cout << max_val(5.5f, 5.9f) << "\n";//���������� f � ����� ��������� �������� � ��� ������ float, 
	 //15u unsigned,15l - long, 15ll - longlong, '1' - char
	std::cout << max_val(5, 7, 4) << "\n";*/
	
	//��������� ������

	std::cout << abs(-5) << '\n'; //5
	std::cout << abs(7.4) << '\n';//7.4
	std::cout << abs(-1.1f) << "\n";//1.1

	return 0;

}
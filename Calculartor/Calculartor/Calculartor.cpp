// Calc.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h" 
#include <iostream> 
#include "Functions.h"
using namespace std; 
 
	 int main(int argc, char* argv[]) 
	 { 
		 int count; //  ���������� ��� ������ � switch 
		 double a, b; // ���������� ��� �������� ��������� 
		 cout << "Vvedite pervoe chislo: "; 
		 cin >> a; 
		 cout << "Vvedite vtoroe chislo: "; 
		 cin >> b;
         cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: "; 
          cin >> count; 
 switch (count) // ������ ��������� switch 
	 { 
		 case 1: // ���� count = 1 
	 { 
			 cout << "Sum= " << MySum(a, b) << endl;
			 break; 
	 } 
		 case 2: // ���� count = 2 
		 { 
			 cout << "Sub= " << MySub(a, b) << endl;
			 break; 
		 }
		 case 3: // ���� count = 3 
		 { 
			 cout << "Mul= " << MyMul(a, b) << endl;
			 break; 
		 } 
		 case 4: // ���� count = 4 
		 { 
			 cout << "Div= " << MyDiv(a, b) << endl;
			 break; 
		 } 
		 default: // ���� count ����� ������ ������� ��������
		 cout << "Nepravilni vvod" << endl;
		 }
 system("pause");
 return 0;
 }





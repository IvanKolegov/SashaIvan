// Calc.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h" 
#include <iostream> 
using namespace std; 
 
	 int main(int argc, char* argv[]) 
	 { 
		 int count; //  переменная для выбора в switch 
		 double a, b; // переменные для хранения операндов 
		 cout << "Vvedite pervoe chislo: "; 
		 cin >> a; 
		 cout << "Vvedite vtoroe chislo: "; 
		 cin >> b;
         cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: "; 
          cin >> count; 
 switch (count) // начало оператора switch 
	 { 
		 case 1: // если count = 1 
	 { 
			 
			 break; 
	 } 
		 case 2: // если count = 2 
		 { 
			 
			 break; 
		 }
		 case 3: // если count = 3 
		 { 
			 
			 break; 
		 } 
		 case 4: // если count = 4 
		 { 
			 
			 break; 
		 } 
		 default: // если count равно любому другому значению
		 cout << "Nepravilni vvod" << endl;
		 }
 system("pause");
 return 0;
 }





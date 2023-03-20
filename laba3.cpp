#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;
int main()
{
	char unsigned A(14);
	char unsigned B(178);
	bitset <8> numbera(A);
	bitset <8> numberb(B);
	cout << "1-3. Десятковий формат:\n";
	cout << "A = " << int(A) << endl;
	cout << "B = " << int(B) << endl;
	cout << "Двійковий формат:\n";
	cout << "A = " << numbera << endl;
	cout << "B = " << numberb << endl;
	cout << "4. Введіть значення зсуву від 0 до 8\n";
	int step1, step2, count(0);
	cout << "Вліво для А: \n";
	cin >> step1;
	if (step1 > 8 || step1 < 0) {
		cout << "НАПИСАНО ЛЮДСЬКОЮ МОВОЮ: ВІД 0 ДО 8. А ТИ ШО ВВІВ?\n";
	}
	else {
		numbera = numbera << step1;
		cout << "Значення А після зсуву вліво на " << step1 << endl;
		cout << "У двійковому форматі: " << numbera << endl << "У десятковому форматі: " << numbera.to_ulong() << endl;
	}
	cout << "Вправо для B: \n";
	cin >> step2;
	if (step2 > 8 || step2 < 0) {
		cout << "НАПИСАНО ЛЮДСЬКОЮ МОВОЮ: ВІД 0 ДО 8. А ТИ ШО ВВІВ?\n";
	}
	else {
		numberb = numberb << step2;
		cout << "Значення В після зсуву вправо на " << step2 << endl;
		cout << "У двійковому форматі: " << numberb << endl << "У десятковому форматі: " << numberb.to_ulong() << endl;
	}
	signed C;
	cout << "5-6. Введіть від'ємне значення С: \n";
	cin >> C;
	bitset <32> numberc(C);
	if (C >= 0) {
		cout << "НАПИСАНО ЛЮДСЬКОЮ МОВОЮ: ВІД'ЄМНЕ. А ТИ ШО ВВІВ?\n";
	}
	else {
		cout << "Десятковий формат:\n";
		cout << "C = " << C << endl;
		cout << "Двійковий формат:\n";
		cout << "C = " << numberc << endl;
	}
	cout << "Введіть значення зсуву вправо від 1 до 7\n";
	int step3;
	cin >> step3;
	if (step3 > 7 || step3 < 1) {
		cout << "НАПИСАНО ЛЮДСЬКОЮ МОВОЮ: ВІД 1 ДО 7. А ТИ ШО ВВІВ?\n";
	}
	else {
		numberc = numberc >> step3;
		cout << "Значення C після зсуву на " << step3 << endl;
		cout << "У двійковому форматі: " << numberc << endl << "У десятковому форматі: " << numberc.to_ulong() << endl;
	}
	int noC(~C);
	cout << "7. Значення С при при запереченні: " << noC << endl;
	int uni11(A | B), uni12(A & B), uni13(A ^ B);
	cout << "8. У десятковому форматі: \nA | B = " << uni11 << endl << "A & B = " << uni12 << endl << "A ^ B = " << uni13 << endl;
	cout << "У двійковому форматі: \nA | B = " << bitset <8>(uni11) << endl << "A & B = " << bitset <8>(uni12) << endl << "A ^ B = " << bitset <8>(uni13) << endl;
	int num11(A || B), num12(A && B);
	cout << "9. З використанням логічних операцій\n" << "У десятковому форматі: \nA || B = " << num11 << endl << "A && B = " << num12 << endl;
	cout << "У двійковому форматі: \nA || B = " << bitset <8>(num11) << endl << "A && B = " << bitset <8>(num12) << endl;
	cout << "10. Який біт замінити на 1 в А (введіть значення від 0 до 8)?\n";
	int choose;
	cin >> choose;
	numbera = numbera.set(choose);
	if (choose > 8 || choose < 0) {
		cout << "НАПИСАНО ЛЮДСЬКОЮ МОВОЮ: ВІД 0 ДО 8. А ТИ ШО ВВІВ?\n";
	}
	else {
		cout << "A із заміною " << choose << "-го біту = " << numbera << endl << "В десятковому форматі: " << numbera.to_ulong() << endl;
	}
	cout << "11. Який біт замінити на 0 в В (введіть значення від 0 до 8)?\n";
	int choose2;
	cin >> choose2;
	numberb = numberb.reset(choose);
	if (choose2 > 8 || choose2 < 0) {
		cout << "НАПИСАНО ЛЮДСЬКОЮ МОВОЮ: ВІД 0 ДО 8. А ТИ ШО ВВІВ?\n";
	}
	else {
		cout << "В із заміною " << choose2 << "-го біту = " << numberb << endl << "В десятковому форматі: " << numberb.to_ulong() << endl;
	}
	cout << "12. Який біт замінити на протилежний в С (введіть значення від 0 до 32)?\n";
	int choose3;
	cin >> choose3;
	numberc = numberc.flip(choose);
	if (choose3 > 32 || choose3 < 0) {
		cout << "НАПИСАНО ЛЮДСЬКОЮ МОВОЮ: ВІД 0 ДО 32. А ТИ ШО ВВІВ?\n";
	}
	else {
		cout << "С із заміною " << choose3 << "-го біту = " << numberc << endl << "В десятковому форматі: " << numberc.to_ulong() << endl;
	}
	cout << "13. Кількість нулів та одиниць у A та B\n";
	int amountnulla(numbera.size() - numbera.count());
	int amountonea(numbera.count());
	int amountnullb(numberb.size() - numberb.count());
	int amountoneb(numberb.count());
	cout << "Кількість одиниць в А: " << amountonea << "; Кількість нулів в А: " << amountnulla << endl;
	cout << "Кількість одиниць в B: " << amountoneb << "; Кількість нулів в B: " << amountnullb << endl;
	cout << "14. Кінцеві значення A i B:\nА в десятковому форматі: " << numbera.to_ulong() << "; B в десятковому форматі: " << numberb.to_ulong() << endl;
}	

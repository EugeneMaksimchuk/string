#include <iostream>
#include <time.h>
#include <string>
#define вивід cout
using namespace std;

//string GetDateFromFile() 
//{ 
//	return "Data from file"; 
//}
//string GetDateFromWebServer() 
//{ 
//	return "Data from web server"; 
//}
//string GetDaraFromDB() 
//{
//	return "Data from DB";
//}
//void showInfo(string(*PFunc)())
//{
//	cout << PFunc() << endl;
//}


void main() 
{
	/*string(*PFunc)() = GetDateFromWebServer;
	showInfo(PFunc);*/

	int a = 5;
	вивід << a;

	//string str="123abc123123";
	////getline(cin, str);// ввід масиву
	////cout << str << endl;
	////cout << size(str) << endl;// скільки елементів у масиві
	////int index = str.find('a');
	////cout << index << endl;
	////if (str.empty()) 
	////{
	////	cout << "STR"<<str << endl;
	////}
	////str += "wneiog" + '1';
	////str.push_back('1');
	////cout << str << endl;
	//string str2;
	////cout << str2 << endl;
	////str2 = str.substr(2, 5); // копіює певні елементи з str y str2 якщо, не вказуємо index то копіює до кінця

	////cout << str2 << endl;
	////int index = str.find_last_of('c');

	////str.erase(index, 3); // видалити під індеком a; b - кількість
	//int index;
	//cout << str << endl;
	///*if (index != string::npos)
	//{
	//	cout << "OK" << endl;
	//}*/
	//while (true)
	//{
	//	int index = str.find_last_of('2');
	//	if (index != string::npos)
	//	{
	//		cout << "index=" << index << endl;
	//		str.erase(index, 1);//Видалення
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}
	//cout << str << endl;






	/*string str;
	cout << "1 str -> " << endl;
	getline(cin, str);
	string str1;
	cout << "2 str -> " << endl;
	getline(cin, str1);
	string str2;
	str2 += str + str1;
	cout << str2 << endl;*/


	/*string str;
	cout << "Enter -> " << endl;
	getline(cin, str);
	int count = 0;
	int count1 = 0;
	while (true)
	{
		int index = str.find('a');
		if (index != string::npos)
		{
			str.erase(index, 1);
			count++;
		}
		else
		{
			break;
		}
	}
	while (true)
	{
		int index1 = str.find('o');
		if (index1 != string::npos)
		{
			str.erase(index1, 1);
			count1++;
		}
		else
		{
			break;
		}
	}
	cout << "Count of a -> "<<count << endl;
	cout << "Count of o -> "<<count1 << endl;*/





	//islower()//isupper()//toupper()//tolower()


	/*string str;
	cout << "Enter string-> " << endl;
	getline(cin, str);
	for (int i = 0; i < size(str); i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		else if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
	}
	cout << str << endl;*/



























}
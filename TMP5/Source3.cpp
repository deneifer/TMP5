//#include <iostream>
//#include <fstream>
//#include <conio.h>
//using namespace std;
//int empty(char* str)
//{
//	char ss[1];
//	ifstream file(str);
//	file >> ss[0];
//	if (ss[0] == '\0')
//		return 1;
//	return 0;
//}
//
//void show(const char* str)
//{
//	int mas[100];
//	ifstream file(str);
//	int i = 0;
//	while (!file.eof())
//	{
//		file >> mas[i];
//		if (!file.eof())
//		{
//			cout << mas[i] << " ";
//			i++;
//		}
//	}
//	file.close();
//	cout << endl;
//}
//
//void write(const char* str, int* mas, int& size)
//{
//	ofstream file(str, ios::app);
//	int v = 0;
//	while (v < size)
//	{
//		file << mas[v] << "  ";
//		v++;
//	}
//	file.close();
//}
//
//void sort(int* mas, int& i)
//{
//	int j = 0, temp, izm = 1, hod = 0;
//	while ((hod < i) && (izm != 0))
//	{
//		izm = 0;
//		j = 0;
//		while (j < (i - 1))
//		{
//			if (mas[j] > mas[j + 1])
//			{
//				temp = mas[j];
//				mas[j] = mas[j + 1];
//				mas[j + 1] = temp;
//				izm = 1;
//			}
//			j++;
//		}
//		hod++;
//	}
//}
//
//int main()
//{
//	ofstream file2("A.txt");
//	file2 << "";
//	file2.close();
//	ofstream file3("B.txt");
//	file3 << "";
//	file3.close();
//	ofstream file4("C.txt");
//	file4 << "";
//	file4.close();
//	ofstream file5("D.txt");
//	file5 << "";
//	file5.close();
//	//clrscr();
//	//char *str, *str1, *str2;
//	int const S = 2;
//	int i = 0, mas[S], CurrentFile = 1, flag = 0;
//	//cout << " Enter a way and file name: "; cin >> str;
//	//cout << " Enter a way and file name for file A: "; cin >> str2;
//	//cout << " Enter a way and file name for file B: "; cin >> str3;
//	ifstream file("111.txt");
//	while (!file.eof())
//	{
//		i = 0;
//		while ((flag != 1) && (i < S))
//		{
//			file >> mas[i];
//			flag = (!file.eof()) ? 0 : 1;
//			if (flag != 1)
//				i++;
//			else
//				break;
//		}
//
//		if (flag != 1)
//		{
//			int j;
//			sort(mas, i);
//			if (CurrentFile == 1)
//			{
//				write("A.txt", mas, i);
//				CurrentFile = 0;
//			}
//			else
//			{
//				write("B.txt", mas, i);
//				CurrentFile = 1;
//			}
//		}
//
//		if ((flag == 1) && (i != 0))
//		{
//			int j;
//			sort(mas, i);
//			if (CurrentFile == 1)
//			{
//				write("A.txt", mas, i);
//				CurrentFile = 0;
//			}
//			else
//			{
//				write("B.txt", mas, i);
//				CurrentFile = 1;
//			}
//		}
//	}
//	cout << "File: ";
//	show("111.txt");
//	cout << "A: ";
//	show("A.txt");
//	cout << "B: ";
//	show("B.txt");
//	//////////////////////////////////////////////////////////////////////////
//
//
//	int Size = S;
//	int Input = 1;//, Input2=2;
//	ifstream InputFile1("A.txt");
//	ifstream InputFile2("B.txt");
//	int CurrentOutput = 3;
//
//	int change = 1;
//	while (change != 0)
//	{
//		change = 0;
//		int const razm = Size + 2;//Size*2;
//		int const r = (Size / 2) + 2;
//		int* mas1 = new int[r], * mas2 = new int[r], * masres = new int[razm], fl = 0, fl2 = 0;
//		int ch = 0;
//		while ((!InputFile1.eof()) && (!InputFile2.eof()))
//		{
//			ch++;
//			int i, j;
//			if (fl != 1)
//			{
//				i = 0;
//				while (i < (Size / 2))
//				{
//					InputFile1 >> mas1[i];
//					fl = (!InputFile1.eof()) ? 0 : 1;
//					if (fl != 1)
//						i++;
//					else
//					{
//						j = 0;
//						while (fl2 != 1)
//						{
//							InputFile2 >> mas2[j];
//							fl2 = (!InputFile2.eof()) ? 0 : 1;
//							if (fl2 != 1)
//								j++;
//						}
//						break;
//					}
//				}
//			}
//			if (fl2 != 1)
//			{
//				j = 0;
//				while (j < (Size / 2))
//				{
//					InputFile2 >> mas2[j];
//					fl2 = (!InputFile2.eof()) ? 0 : 1;
//					if (fl2 != 1)
//						j++;
//					else
//					{
//						//i=0;
//						while (fl != 1)
//						{
//							InputFile1 >> mas1[i];
//							fl = (!InputFile1.eof()) ? 0 : 1;
//							if (fl != 1)
//								i++;
//						}
//						break;
//					}
//				}
//			}
//
//			int size = i + j;
//			memcpy(masres, mas1, i * sizeof(int));
//			memcpy(&masres[i], mas2, j * sizeof(int));
//			sort(masres, size);
//
//
//
//
//
//			if (CurrentOutput == 1)				// if A
//			{
//				write("A.txt", masres, size);
//				if (ch == 2)
//				{
//					CurrentOutput = 2; 		// then B
//					ch = 0;
//				}
//			}
//			else
//			{
//				if (CurrentOutput == 2)		// if B
//				{
//					//change=1;
//					write("B.txt", masres, size);
//					if (ch == 2)
//					{
//						CurrentOutput = 1; 	// then A
//						//change=1;
//						ch = 0;
//					}
//				}
//				else
//				{
//					if (CurrentOutput == 3)		// if C
//					{
//						write("C.txt", masres, size);
//						if (ch == 2)
//						{
//							CurrentOutput = 4; // then D
//							ch = 0;
//						}
//					}
//					else
//					{
//						if (CurrentOutput == 4)		// if D
//						{
//							//change=1;
//							write("D.txt", masres, size);
//							if (ch == 2)
//							{
//								CurrentOutput = 3;  // then C
//								//change=1;
//								ch = 0;
//							}
//						}
//					}
//				}
//			}
//		}
//
//		delete[]mas1;
//		delete[]mas2;
//		delete[]masres;
//		InputFile1.close();
//		InputFile2.close();
//
//		if (CurrentOutput == 1)
//		{
//			if (empty("B.txt") != 1)
//				change = 1;
//		}
//		else
//		{
//			if (empty("D.txt") != 1)
//				change = 1;
//		}
//
//
//		if (change == 0)
//		{
//			if (CurrentOutput == 1)
//			{
//				//if(empty("B.txt")==1)
//				 //{
//				cout << "A: ";
//				show("A.txt");
//				cout << "B: ";
//				show("B.txt");
//				//}
//				//else change=1;
//			}
//			else
//			{
//				//if(empty("D.txt")==1)
//				//{
//				cout << "C: ";
//				show("C.txt");
//				cout << "D: ";
//				show("D.txt");
//				//}
//				//else change=1;
//			}
//		}
//
//
//		Size *= 2;
//		if (change != 0)
//		{
//			if (Input == 1)
//			{
//				Input = 3;
//				CurrentOutput = 1;
//				ofstream file("A.txt");
//				file << "";
//				file.close();
//				ofstream file2("B.txt");
//				file2 << "";
//				file2.close();
//				fl = 0;fl2 = 0;
//				cout << "C: ";
//				show("C.txt");
//				cout << "D: ";
//				show("D.txt");
//				InputFile1.open("C.txt");
//				InputFile2.open("D.txt");
//			}
//			else
//			{
//				Input = 1;
//				CurrentOutput = 3;
//				ofstream file("C.txt");
//				file << "";
//				file.close();
//				ofstream file2("D.txt");
//				file2 << "";
//				file2.close();
//				fl = 0;fl2 = 0;
//				cout << "A: ";
//				show("A.txt");
//				cout << "B: ";
//				show("B.txt");
//				InputFile1.open("A.txt");
//				InputFile2.open("B.txt");
//			}
//		}
//	}
//
//	system("PAUSE");
//	return 0;
//}
////}
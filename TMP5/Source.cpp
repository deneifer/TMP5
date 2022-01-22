//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <conio.h>
//#include <cstdio> 
//#include <ctime>
//
//using namespace std;
//
//void merge(int *A,int first, int last)
//{
//	int middle, start=first, end, j;
//	int* mas = new int[100];
//	middle = (first + last) / 2;
//	end = middle + 1;
//	for (j = first;j <= last;j++)
//		if ((start <= middle) && ((end > last) || (A[start] < A[end])))
//		{
//			mas[j] = A[start];
//			start++;
//	    }
//		else
//		{
//			mas[j] = A[end];
//			end++;
//		}
//
//	for (j = first;j <= last;j++)
//	{
//		A[j] = mas[j];
//	}
//	delete[] mas;
//};
//
//void mergesort(int* A, int first, int last)
//{
//	{
//		if (first < last)
//		{
//			mergesort(A, first, (first + last) / 2);
//			mergesort(A, (first + last) / 2 + 1, last);
//			merge(A, first, last);
//		}
//	}
//};
//
//int CountLine(string filename)
//{
//	ifstream F(filename, ios::in);
//	if (!F)
//	{
//		return -1;
//	}
//	int count = 0;
//	char buffer[1000];
//	while (!F.eof())
//	{
//		count++;
//		F.getline(buffer, 1000);
//	}
//	F.close();
//	return count;
//};
//
//int getstring(int* mas,string filename, char** lines = nullptr)
//{
//	//char** lines;
//	int n = CountLine(filename);
//	if (n == -1)return - 1;
//	ifstream F(filename);
//	if (!F)return -1;
//	try
//	{
//		lines = new char* [n];
//	}
//	catch (bad_alloc e)
//	{
//		cout << e.what() << endl;
//		F.close();
//		return -1;
//	}
//            ofstream FA;
//			FA.open("C:\\Users\\lepeh\\source\\repos\\TMP5\\TMP5\\FA.txt");
//			if (!FA)
//				exit(1);
//			ofstream FB;
//			FB.open("C:\\Users\\lepeh\\source\\repos\\TMP5\\TMP5\\FB.txt");
//			if (!FB)
//				exit(1);
//			ofstream FC;
//			FC.open("C:\\Users\\lepeh\\source\\repos\\TMP5\\TMP5\\FC.txt");
//			if (!FC)
//				exit(1);
//	int len;
//	char buffer[1000];
//	for (int i = 0;i < n;i++)
//	{
//		F.getline(buffer, 1000);
//		for (len = 0;buffer[len] != '\0';len++);
//		
//		lines[i] = new char[len + 1];
//
//		for (int j = 0;j < len;j++)
//		{
//			
//			lines[i][j] = buffer[j];
//			lines[i][len] = '\0';
//		}
//		
//		//cout << lines[i] << endl;
//		
//			//int a = atoi(lines[i]);
//			//int b= atoi(lines[i+1]);
//		
//			if (FA.is_open() && FB.is_open())
//			{
//				if(i%2==0)
//			    {
//				FA <<lines[i]<< endl;
//			    }
//			    else
//			    {
//				FB << lines[i] << endl;
//			    }
//			}
//
//			
//		
//		
//	}
//
//
//            FA.close();
//			FB.close();
//	F.close();
//	//_lines = lines;
//	return n;
//
//};
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	const char* file = "5lab1.txt";
//	int count, count1= CountLine(file);
//	char** lines = nullptr;
//	int *mas = new int[count1+1];
//	count = getstring(mas,file, lines);
//	if (count < 0)
//	{
//		cout<<"Error"<<endl;
//		return -1;
//	}
//	cout << "Изначальный массив:" << endl;
//	//for (int i = 1;i < count1+1;i++)
//	//{
//	//	cout << mas[i] << endl;
//	//}
//
//	mergesort(mas,1,count1);
//	cout << "Массив после сортировки:" << endl;
//	/*for (int i = 1;i < count1+1;i++)
//	{
//		cout << mas[i] << endl;
//	}*/
//
//	//ofstream FA;
//	//FA.open("C:\\Users\\lepeh\\source\\repos\\TMP5\\TMP5\\FA.txt");
//	///*if (!file)
//	//	exit(1);*/
//	//if (FA.is_open())
//	//{
//	//	for (int i = 1;i < count1 + 1;i++)
//	//	{
//	//		FA << mas[i] << endl;
//	//	}
//	//}
//
//	//FA.close();
//	
//	if (lines != nullptr)
//	{
//		for (int i = 0;i < count;i++)
//		{
//			delete lines[i];
//		}
//	}
//	if (lines != nullptr)
//	{
//		delete[] lines;
//		delete[] mas;
//	}
//	
//	system("PAUSE");
//	return 0;
//}
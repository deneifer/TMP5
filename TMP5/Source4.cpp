#include "polyPhaseMerge.h"
#include "testsHelper.h"



void polyPhaseMerge(std::string filename)
{
	int count = 6;	// Êîëè÷åñòâî ñîçäàâàåìûõ ôàéëîâ
	FileManager manager(1, count - 1);
	std::fstream file;
	file.open(filename, std::ios::in);
	firstDistrib(file, manager);	// Íà÷àëüíîå ðàñïðåäåëåíèå
	file.close();

	/* Ñëèâàåì ïóñòûå ñåðèè*/
	int min = manager.output[0].idleSeries;
	for (int i = 1; i < count - 1; i++)
	{
		if (min > manager.output[i].idleSeries)
		{
			min = manager.output[i].idleSeries;
		}
	}
	for (int i = 0; i < count - 1; i++)
	{
		manager.output[i].idleSeries -= min;
	}
	manager.input[0].idleSeries += min;

	manager.swap(); // Ìåíÿåì ôàéëû
	merge(manager); // Ñîðòèðóåì

	/* Çàïèñûâàåì ðåçóëüòàò â ôàéë*/
	manager.swap();
	std::fstream result;
	result.open(filename.insert(filename.length() - 4, "(sorted)"), std::ios::out); //create result file
	int len = manager.read(0);
	for (int i = 0; i < len; i++)
	{
		result << " " << manager.read(0);
	}
	result.close();
}



int main()
{
	setlocale(LC_ALL, "Russian");
	
	polyPhaseMerge("poly.txt");
	
		system("PAUSE");
	return 0;
}
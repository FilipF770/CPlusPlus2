#pragma once
class clsTaskManager
{
	// Konstruktor
	clsTaskManager(void);

	// Destruktor
	~clsTaskManager(void);

	// Funkce pro p�id�n� Tasku
	int AddTask();

	// Funkce, kter� Manager spust�
	bool Run();

	// Funkce, kter� Manager zastav�
	bool Stop();
};


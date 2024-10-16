#pragma once

#include <Windows.h>

// Pointer na task funkc�
//void (*p_TaskFce)(void);

typedef void (*p_TaskStack)(void);

class clsTaskManager
{
private:
	p_TaskStack p_Tasks[10];
public:
	// Konstruktor
	clsTaskManager(void);

	// Destruktor
	~clsTaskManager(void);

	// Funkce pro p�id�n� Tasku
	int AddTask(void (*p_Task)(void));

	// Funkce, kter� Manager spust�
	bool Run(void (*p_TaskFce)(void));

	// Funkce, kter� Manager zastav�
	bool Stop();
};


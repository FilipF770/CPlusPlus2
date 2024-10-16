#pragma once

#include <Windows.h>

// Pointer na task funkcí
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

	// Funkce pro pøidání Tasku
	int AddTask(void (*p_Task)(void));

	// Funkce, která Manager spustí
	bool Run(void (*p_TaskFce)(void));

	// Funkce, která Manager zastaví
	bool Stop();
};


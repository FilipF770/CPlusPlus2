#pragma once
class clsTaskManager
{
	// Konstruktor
	clsTaskManager(void);

	// Destruktor
	~clsTaskManager(void);

	// Funkce pro pøidání Tasku
	int AddTask();

	// Funkce, která Manager spustí
	bool Run();

	// Funkce, která Manager zastaví
	bool Stop();
};


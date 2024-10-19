#include "clsTaskManager.h"

clsTaskManager::clsTaskManager(void)
{
	for (int i = 0; i < 10; i++)
	{
		p_Tasks[i] = NULL;
	}
}

clsTaskManager::~clsTaskManager(void)
{

}

int clsTaskManager::AddTask(void (*p_Task)(void))
{
	
		for(int i = 0; i < 10; i++)
		{
			if (p_Tasks[i] == NULL)
			{
				p_Tasks[i] = p_Task;
				break;
			}
			
		}
		return true;
}

//--------------------------------------------
// Spuštìní Manageru úloh
//--------------------------------------------
bool clsTaskManager::Run(void (*p_TaskFce)(void))
{
	do
	{
		// Poastavit
		Sleep(1000);

		for (int i = 0; i < 10; i++)
		{
			if (p_Tasks[i] != NULL)
			{
				p_Tasks[i]();
			}
		}

	} while (true);
}

bool clsTaskManager::Stop()
{
	return true;
}
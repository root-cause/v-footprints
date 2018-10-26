#include "Header.hpp"

BOOL APIENTRY DllMain(HMODULE hInstance, DWORD reason, LPVOID lpReserved)
{
	switch (reason)
	{
		case DLL_PROCESS_ATTACH:
			scriptRegister(hInstance, ScriptInit);
			break;

		case DLL_PROCESS_DETACH:
			scriptUnregister(hInstance);
			break;
	}

	return TRUE;
}
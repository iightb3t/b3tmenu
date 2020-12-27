#include "hooking.hpp"
#include "natives.hpp"
#include "gta/joaat.hpp"

namespace big
{
	void hooks::error_screen(char* entryHeader, char* entryLine1, int instructionalKey, char* entryLine2, BOOL p4, Any p5, Any* p6, Any* p7, BOOL background)
	{
		if (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME() == RAGE_JOAAT("shop_controller"))
		{
			return;
		}
		return g_hooking->m_error_screen_hook.get_original<decltype(&error_screen)>()(entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, background);
	}
}
#include "RE/C/CombatProjectileAimController.h"

namespace RE
{
	void CombatProjectileAimController::CalculateAim(Actor* target)
	{
#ifdef ENABLE_SKYRIM_VR
		if (REL::Module::IsVR()) {
			return;  // VR id/offset not verified - no-op rather than mis-resolve.
		}
#endif
		using func_t = decltype(&CombatProjectileAimController::CalculateAim);
		static REL::Relocation<func_t> func{ RELOCATION_ID(43174, 44396) };
		func(this, target);
	}
}

#include "RE/C/CombatAimController.h"

namespace RE
{
	uint32_t CombatAimController::CalculatePriority(PRIORITY priority)
	{
#ifdef ENABLE_SKYRIM_VR
		if (REL::Module::IsVR()) {
			return 0;  // VR id/offset not verified - no-op rather than mis-resolve.
		}
#endif
		using func_t = decltype(&CombatAimController::CalculatePriority);
		static REL::Relocation<func_t> func{ RELOCATION_ID(43137, 44356) };
		return func(this, priority);
	}

	void CombatAimController::ClearAim()
	{
#ifdef ENABLE_SKYRIM_VR
		if (REL::Module::IsVR()) {
			return;  // VR id/offset not verified - no-op rather than mis-resolve.
		}
#endif
		using func_t = decltype(&CombatAimController::ClearAim);
		static REL::Relocation<func_t> func{ RELOCATION_ID(43136, 44355) };
		func(this);
	}

	bool CombatAimController::HasTargetLOS() const
	{
#ifdef ENABLE_SKYRIM_VR
		if (REL::Module::IsVR()) {
			return false;  // VR id/offset not verified - no-op rather than mis-resolve.
		}
#endif
		using func_t = decltype(&CombatAimController::HasTargetLOS);
		static REL::Relocation<func_t> func{ RELOCATION_ID(43139, 44358) };
		return func(this);
	}

	void CombatAimController::SetAim(const NiPoint3& P)
	{
#ifdef ENABLE_SKYRIM_VR
		if (REL::Module::IsVR()) {
			return;  // VR id/offset not verified - no-op rather than mis-resolve.
		}
#endif
		using func_t = decltype(&CombatAimController::SetAim);
		static REL::Relocation<func_t> func{ RELOCATION_ID(43135, 44354) };
		func(this, P);
	}
}

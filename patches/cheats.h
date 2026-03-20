#ifndef __PATCH_CHEATS_H__
#define __PATCH_CHEATS_H__

#include "patch_helpers.h"

DECLARE_FUNC(s32, recomp_get_moonjump);
DECLARE_FUNC(s32, recomp_get_always_max_bomb);
DECLARE_FUNC(s32, recomp_get_always_max_fire);
DECLARE_FUNC(s32, recomp_get_always_have_remote_bombs);
DECLARE_FUNC(s32, recomp_get_always_have_red_bombs);
DECLARE_FUNC(s32, recomp_get_infinite_credits);
DECLARE_FUNC(s32, recomp_get_infinite_lives);

#endif // __PATCH_CHEATS_H__

// not zelda anymore, but i dont feel like changing the convention...

#ifndef __ZELDA_CHEATS_H__
#define __ZELDA_CHEATS_H__

#include "zelda_config.h"

namespace zelda64 {
    void reset_cheats_settings();

    zelda64::GenericOnOffOption get_moonjump();
    void set_moonjump(zelda64::GenericOnOffOption mode);
    zelda64::GenericOnOffOption get_always_max_bomb();
    void set_always_max_bomb(zelda64::GenericOnOffOption mode);
    zelda64::GenericOnOffOption get_always_max_fire();
    void set_always_max_fire(zelda64::GenericOnOffOption mode);
    zelda64::GenericOnOffOption get_always_have_remote_bombs();
    void set_always_have_remote_bombs(zelda64::GenericOnOffOption mode);
    zelda64::GenericOnOffOption get_always_have_red_bombs();
    void set_always_have_red_bombs(zelda64::GenericOnOffOption mode);
    zelda64::GenericOnOffOption get_infinite_credits();
    void set_infinite_credits(zelda64::GenericOnOffOption mode);
    zelda64::GenericOnOffOption get_infinite_lives();
    void set_infinite_lives(zelda64::GenericOnOffOption mode);
};

#endif // __ZELDA_CHEATS_H__
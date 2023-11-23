#include "audio/external.h"
#include "game/save_file.h"

void bhv_luggy_loop() {
    if (o->oDistanceToMario < 250) {
        if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_FRONT, DIALOG_FLAG_NONE, CUTSCENE_DIALOG, DIALOG_170)) {
            play_puzzle_jingle();
            save_file_set_flags(SAVE_FLAG_UNLOCKED_LOUIS);
            u8 gNumPlayers = 2;
            o->oAnimState = 2;
        }
    }
}
#include <switch_min.h>

#include <stdint.h>

#include "useful/const_value_table.h"
#include "useful/raygun_printer.h"
#include "useful/useful.h"

#include "acmd_wrapper.h"

using namespace lib;
using namespace app::sv_animcmd;
using namespace app::sv_math;
using namespace app::sv_kinetic_energy;
using namespace app::sv_battle_object;
using namespace app::sv_module_access;
using namespace app::FL_sv_module_access;
using namespace app::sv_system;
using namespace app::lua_bind;

ACMD acmd_objs[] = {
    ACMD("BATTLE_OBJECT_CATEGORY_FIGHTER", "FIGHTER_KIND_LUCINA", "special_air_hi", "game_specialairhi", [] (ACMD* acmd) -> void { 
                
                acmd->frame(1);
                if (acmd->is_excute()) {
                acmd->wrap((void (*)(u64))notify_event_msc_cmd, { L2CValue((u64)0x2127e37c07), L2CValue(GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES) });
                }
                
                
                
                
                acmd->frame(5);
                if (acmd->is_excute()) {
                        
                acmd->ATTACK(/*ID*/ 2, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 11.0, /*Angle*/ 361, /*KBG*/ 74, /*FKB*/ 0, /*BKB*/ 70, /*Size*/ 4.0, /*X*/ 0.0, /*Y*/ 8.0, /*Z*/ 8.0, /*Hitlag*/ 1.0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_POS, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_L, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
                        
                acmd->ATTACK(/*ID*/ 3, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 11.0, /*Angle*/ 74, /*KBG*/ 74, /*FKB*/ 0, /*BKB*/ 70, /*Size*/ 4.0, /*X*/ 0.0, /*Y*/ 8.0, /*Z*/ 4.0, /*Hitlag*/ 1.0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_POS, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_L, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

                WorkModule::on_flag(acmd->module_accessor, /*Flag*/ FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_SPECIAL_HI_SET_LR);

                WorkModule::on_flag(acmd->module_accessor, /*Flag*/ FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_TRANS_MOVE);
                }
                acmd->frame(6);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("sword1"), /*Damage*/ 70.0, /*Angle*/ 361, /*KBG*/ 90, /*FKB*/ 0, /*BKB*/ 20, /*Size*/ 5.0, /*X*/ 0.0, /*Y*/ 0.0, /*Z*/ 4.5, /*Hitlag*/ 0.9, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_POS, /*SetWeight*/ false, /*ShieldDamage*/ 10, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
                        
                acmd->ATTACK(/*ID*/ 1, /*Part*/ 0, /*Bone*/ hash40("sword1"), /*Damage*/ 70.0, /*Angle*/ 74, /*KBG*/ 90, /*FKB*/ 0, /*BKB*/ 20, /*Size*/ 5.0, /*X*/ 0.0, /*Y*/ 0.0, /*Z*/ -1.5, /*Hitlag*/ 0.9, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_POS, /*SetWeight*/ false, /*ShieldDamage*/ 10, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
                }
                acmd->frame(7);
                if (acmd->is_excute()) {

                AttackModule::clear(acmd->module_accessor, /*ID*/ 2, 0);

                AttackModule::clear(acmd->module_accessor, /*ID*/ 3, 0);

                
                
                }
                acmd->frame(12);
                if (acmd->is_excute()) {

                AttackModule::clear_all(acmd->module_accessor);
                }
    })
};



/*
acmd->wrap((void (*)(u64))notify_event_msc_cmd, { L2CValue((u64)0x2127e37c07), L2CValue(GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES) });

Vector2f pos = Vector2f{.x = 10, .y = 20};
AttackModule::set_vec_target_pos(acmd->module_accessor, 1, hash40("top"), &pos, 10, false);

AttackModule::clear(acmd->module_accessor,  2, 0);
*/


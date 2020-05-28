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
    ACMD("BATTLE_OBJECT_CATEGORY_FIGHTER", "FIGHTER_KIND_LUCINA", "attack_air_n", "game_attackairn", 
    [] (ACMD* acmd) -> void { 
        acmd->frame(2);
        if (acmd->is_excute()) {
                
        WorkModule::on_flag(acmd->module_accessor, /*Flag*/ FIGHTER_STATUS_ATTACK_AIR_FLAG_ENABLE_LANDING);
        }
        acmd->frame(6);
        if (acmd->is_excute()) {
                
        acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("sword1"), /*Damage*/ 34.2, /*Angle*/ 75, /*KBG*/ 0, /*FKB*/ 0, /*BKB*/ 1, /*Size*/ 103.8, /*X*/ 1.0, /*Y*/ -1.3, /*Z*/ 1.6, /*Hitlag*/ 0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_ON, /*FacingRestrict*/ ATTACK_LR_CHECK_POS, /*SetWeight*/ true, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_S, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

        acmd->ATTACK(/*ID*/ 1, /*Part*/ 0, /*Bone*/ hash40("armr"), /*Damage*/ 34.2, /*Angle*/ 80, /*KBG*/ 0, /*FKB*/ 0, /*BKB*/ 1, /*Size*/ 104.0, /*X*/ -1.5, /*Y*/ 1.0, /*Z*/ -1.5, /*Hitlag*/ 0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_ON, /*FacingRestrict*/ ATTACK_LR_CHECK_POS, /*SetWeight*/ true, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_S, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

        acmd->ATTACK(/*ID*/ 2, /*Part*/ 0, /*Bone*/ hash40("sword1"), /*Damage*/ 34.2, /*Angle*/ 90, /*KBG*/ 0, /*FKB*/ 0, /*BKB*/ 1, /*Size*/ 103.3, /*X*/ 1.0, /*Y*/ -1.3, /*Z*/ 7.2, /*Hitlag*/ 0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_ON, /*FacingRestrict*/ ATTACK_LR_CHECK_POS, /*SetWeight*/ true, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_S, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
        }
        acmd->wait(2);
        if (acmd->is_excute()) {

        AttackModule::clear_all(acmd->module_accessor);
        }
        acmd->frame(15);
        if (acmd->is_excute()) {

        acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("sword1"), /*Damage*/ 34.2, /*Angle*/ 361, /*KBG*/ 0, /*FKB*/ 0, /*BKB*/ 1, /*Size*/ 103.8, /*X*/ 1.2, /*Y*/ -1.1, /*Z*/ 1.5, /*Hitlag*/ 0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_ON, /*FacingRestrict*/ ATTACK_LR_CHECK_POS, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

        acmd->ATTACK(/*ID*/ 1, /*Part*/ 0, /*Bone*/ hash40("armr"), /*Damage*/ 34.2, /*Angle*/ 361, /*KBG*/ 0, /*FKB*/ 0, /*BKB*/ 1, /*Size*/ 104.0, /*X*/ -2.0, /*Y*/ 1.0, /*Z*/ -1.6, /*Hitlag*/ 0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_ON, /*FacingRestrict*/ ATTACK_LR_CHECK_POS, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

        acmd->ATTACK(/*ID*/ 2, /*Part*/ 0, /*Bone*/ hash40("sword1"), /*Damage*/ 34.2, /*Angle*/ 361, /*KBG*/ 0, /*FKB*/ 0, /*BKB*/ 1, /*Size*/ 103.4, /*X*/ 0.8, /*Y*/ -1.1, /*Z*/ 7.0, /*Hitlag*/ 0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_ON, /*FacingRestrict*/ ATTACK_LR_CHECK_POS, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
        }
        acmd->wait(7);
        if (acmd->is_excute()) {

        AttackModule::clear_all(acmd->module_accessor);
        }
        acmd->frame(47);
        if (acmd->is_excute()) {

        WorkModule::off_flag(acmd->module_accessor, /*Flag*/ FIGHTER_STATUS_ATTACK_AIR_FLAG_ENABLE_LANDING);
        }
    }),

        ACMD("BATTLE_OBJECT_CATEGORY_FIGHTER", "FIGHTER_KIND_LUCINA", "attack_air_f", "game_attackairf", 
    [] (ACMD* acmd) -> void { 
            if (acmd->is_excute()) {
            WorkModule::on_flag(acmd->module_accessor, /*Flag*/ FIGHTER_STATUS_ATTACK_AIR_FLAG_ENABLE_LANDING);
            }
            acmd->frame(6);
            if (acmd->is_excute()) {
                    
            acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("sword1"), /*Damage*/ 50.5, /*Angle*/ 361, /*KBG*/ 77, /*FKB*/ 0, /*BKB*/ 40, /*Size*/ 13.0, /*X*/ 1.0, /*Y*/ 0.0, /*Z*/ 3.5, /*Hitlag*/ 1.0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_ON, /*FacingRestrict*/ ATTACK_LR_CHECK_F, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

            acmd->ATTACK(/*ID*/ 1, /*Part*/ 0, /*Bone*/ hash40("armr"), /*Damage*/ 50.5, /*Angle*/ 361, /*KBG*/ 77, /*FKB*/ 0, /*BKB*/ 40, /*Size*/ 13.8, /*X*/ 1.0, /*Y*/ 0.0, /*Z*/ 0.0, /*Hitlag*/ 1.0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_ON, /*FacingRestrict*/ ATTACK_LR_CHECK_F, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
                    
            acmd->ATTACK(/*ID*/ 2, /*Part*/ 0, /*Bone*/ hash40("sword1"), /*Damage*/ 50.5, /*Angle*/ 361, /*KBG*/ 77, /*FKB*/ 0, /*BKB*/ 40, /*Size*/ 13.0, /*X*/ 1.0, /*Y*/ 0.0, /*Z*/ 7.5, /*Hitlag*/ 1.0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_ON, /*FacingRestrict*/ ATTACK_LR_CHECK_F, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
            }
            acmd->wait(3);
            if (acmd->is_excute()) {

            AttackModule::clear_all(acmd->module_accessor);
            }
            acmd->frame(36);
            if (acmd->is_excute()) {

            WorkModule::off_flag(acmd->module_accessor, /*Flag*/ FIGHTER_STATUS_ATTACK_AIR_FLAG_ENABLE_LANDING);
            }
    }),
            ACMD("BATTLE_OBJECT_CATEGORY_FIGHTER", "FIGHTER_KIND_LINK", "special_air_hi", "game_specialairhi", [] (ACMD* acmd) -> void { 
                acmd->frame(8);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 4.0, /*Angle*/ 367, /*KBG*/ 100, /*FKB*/ 107, /*BKB*/ 0, /*Size*/ 6.0, /*X*/ 0.0, /*Y*/ 10.0, /*Z*/ 14.5, /*X2*/ 0.0, /*Y2*/ 10.0, /*Z2*/ 8.0, /*Hitlag*/ 1.0, /*SDI*/ 0.3, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_F, /*SetWeight*/ true, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_S, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

                AttackModule::set_no_damage_fly_smoke_all(acmd->module_accessor, true, false);
                }
                acmd->wait(2);
                if (acmd->is_excute()) {

                AttackModule::clear_all(acmd->module_accessor);
                }
                acmd->frame(12);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 1, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 2.0, /*Angle*/ 145, /*KBG*/ 100, /*FKB*/ 95, /*BKB*/ 0, /*Size*/ 5.0, /*X*/ 0.0, /*Y*/ 11.5, /*Z*/ -12.0, /*X2*/ 0.0, /*Y2*/ 11.0, /*Z2*/ -9.0, /*Hitlag*/ 1.0, /*SDI*/ 0.3, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_B, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_S, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

                AttackModule::set_vec_target_pos(acmd->module_accessor, 1, hash40("top"), &Vector2f{.x = 10, .y = 20}, 10, false);

                AttackModule::set_no_damage_fly_smoke_all(acmd->module_accessor, true, false);
                }
                acmd->wait(2);
                if (acmd->is_excute()) {

                AttackModule::clear_all(acmd->module_accessor);

                acmd->wrap(notify_event_msc_cmd, { L2CValue(hash40("0x2127e37c07")), L2CValue(GROUND_CLIFF_CHECK_KIND_ALWAYS) });
                }
                acmd->frame(16);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 2.0, /*Angle*/ 367, /*KBG*/ 100, /*FKB*/ 107, /*BKB*/ 0, /*Size*/ 6.0, /*X*/ 0.0, /*Y*/ 6.0, /*Z*/ 15.0, /*X2*/ 0.0, /*Y2*/ 7.5, /*Z2*/ 8.0, /*Hitlag*/ 1.0, /*SDI*/ 0.3, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_F, /*SetWeight*/ true, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_S, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

                AttackModule::set_no_damage_fly_smoke_all(acmd->module_accessor, true, false);
                }
                acmd->wait(2);
                if (acmd->is_excute()) {

                AttackModule::clear_all(acmd->module_accessor);
                }
                acmd->frame(19);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 1, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 2.0, /*Angle*/ 145, /*KBG*/ 100, /*FKB*/ 95, /*BKB*/ 0, /*Size*/ 5.0, /*X*/ 0.0, /*Y*/ 11.5, /*Z*/ -12.5, /*X2*/ 0.0, /*Y2*/ 11.0, /*Z2*/ -9.0, /*Hitlag*/ 1.0, /*SDI*/ 0.3, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_B, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_S, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

                AttackModule::set_vec_target_pos(acmd->module_accessor, 1, hash40("top"), &Vector2f{.x = 10, .y = 20}, 10, false);  

                AttackModule::set_no_damage_fly_smoke_all(acmd->module_accessor, true, false);
                }
                acmd->wait(2);
                if (acmd->is_excute()) {

                AttackModule::clear_all(acmd->module_accessor);
                }
                acmd->frame(22);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 2.0, /*Angle*/ 83, /*KBG*/ 100, /*FKB*/ 71, /*BKB*/ 0, /*Size*/ 6.0, /*X*/ 0.0, /*Y*/ 10.0, /*Z*/ 15.0, /*X2*/ 0.0, /*Y2*/ 10.5, /*Z2*/ 8.0, /*Hitlag*/ 1.0, /*SDI*/ 0.3, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_F, /*SetWeight*/ true, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

                AttackModule::set_no_damage_fly_smoke_all(acmd->module_accessor, true, false);
                }
                acmd->wait(2);
                if (acmd->is_excute()) {

                AttackModule::clear_all(acmd->module_accessor);
                }
                acmd->frame(26);
                if (acmd->is_excute()) {

                JostleModule::set_status(acmd->module_accessor, false);

                acmd->ATTACK(/*ID*/ 1, /*Part*/ 0, /*Bone*/ hash40("sword2"), /*Damage*/ 2.0, /*Angle*/ 150, /*KBG*/ 100, /*FKB*/ 95, /*BKB*/ 0, /*Size*/ 5.0, /*X*/ 2.0, /*Y*/ 0.0, /*Z*/ 0.0, /*X2*/ 5.5, /*Y2*/ 0.0, /*Z2*/ 0.0, /*Hitlag*/ 1.0, /*SDI*/ 0.3, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_B, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
                AttackModule::set_vec_target_pos(acmd->module_accessor, 1, hash40("top"), &Vector2f{.x = 10, .y = 20}, 10, false);

                AttackModule::set_no_damage_fly_smoke_all(acmd->module_accessor, true, false);
                }
                acmd->wait(2);
                if (acmd->is_excute()) {

                AttackModule::clear_all(acmd->module_accessor);
                }
                acmd->frame(31);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 2.0, /*Angle*/ 69, /*KBG*/ 100, /*FKB*/ 62, /*BKB*/ 0, /*Size*/ 7.0, /*X*/ 0.0, /*Y*/ 14.0, /*Z*/ 12.5, /*X2*/ 0.0, /*Y2*/ 12.5, /*Z2*/ 8.0, /*Hitlag*/ 1.0, /*SDI*/ 0.3, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_F, /*SetWeight*/ true, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

                AttackModule::set_no_damage_fly_smoke_all(acmd->module_accessor, true, false);
                }
                acmd->wait(2);
                if (acmd->is_excute()) {

                AttackModule::clear_all(acmd->module_accessor);

                acmd->wrap(notify_event_msc_cmd, { L2CValue(hash40("0x2127e37c07")), L2CValue(GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES) });
                }
                acmd->frame(38);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 1, /*Part*/ 0, /*Bone*/ hash40("sword2"), /*Damage*/ 2.0, /*Angle*/ 160, /*KBG*/ 100, /*FKB*/ 95, /*BKB*/ 0, /*Size*/ 5.0, /*X*/ 2.0, /*Y*/ 0.0, /*Z*/ 0.0, /*X2*/ 5.5, /*Y2*/ 0.0, /*Z2*/ 0.0, /*Hitlag*/ 1.0, /*SDI*/ 0.3, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_B, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_M, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
                AttackModule::set_vec_target_pos(acmd->module_accessor, 1, hash40("top"), &Vector2f{.x = 10, .y = 20}, 10, false);

                AttackModule::set_no_damage_fly_smoke_all(acmd->module_accessor, true, false);
                }
                acmd->wait(2);
                if (acmd->is_excute()) {

                AttackModule::clear_all(acmd->module_accessor);
                }
                acmd->frame(47);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 4.0, /*Angle*/ 361, /*KBG*/ 200, /*FKB*/ 0, /*BKB*/ 30, /*Size*/ 7.5, /*X*/ 0.0, /*Y*/ 7.5, /*Z*/ 14.0, /*X2*/ 0.0, /*Y2*/ 9.5, /*Z2*/ 7.5, /*Hitlag*/ 2.0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_F, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_L, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
                }
                acmd->frame(48);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 4.0, /*Angle*/ 361, /*KBG*/ 200, /*FKB*/ 0, /*BKB*/ 30, /*Size*/ 7.5, /*X*/ 0.0, /*Y*/ 13.0, /*Z*/ 15.5, /*X2*/ 0.0, /*Y2*/ 12.5, /*Z2*/ 7.5, /*Hitlag*/ 2.0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_F, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_L, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);

                WorkModule::on_flag(acmd->module_accessor, /*Flag*/ FIGHTER_LINK_STATUS_RSLASH_FLAG_RESET_SPEED_MAX_X);
                }
                acmd->frame(49);
                if (acmd->is_excute()) {

                acmd->ATTACK(/*ID*/ 0, /*Part*/ 0, /*Bone*/ hash40("top"), /*Damage*/ 4.0, /*Angle*/ 361, /*KBG*/ 200, /*FKB*/ 0, /*BKB*/ 30, /*Size*/ 7.5, /*X*/ 0.0, /*Y*/ 19.0, /*Z*/ 12.5, /*X2*/ 0.0, /*Y2*/ 14.0, /*Z2*/ 7.5, /*Hitlag*/ 2.0, /*SDI*/ 1.0, /*Clang/Rebound*/ ATTACK_SETOFF_KIND_OFF, /*FacingRestrict*/ ATTACK_LR_CHECK_F, /*SetWeight*/ false, /*ShieldDamage*/ 0, /*Trip*/ 0.0, /*Rehit*/ 0, /*Reflectable*/ false, /*Absorbable*/ false, /*Flinchless*/ false, /*DisableHitlag*/ false, /*Direct/Indirect*/ true, /*Ground/Air*/ COLLISION_SITUATION_MASK_GA, /*Hitbits*/ COLLISION_CATEGORY_MASK_ALL, /*CollisionPart*/ COLLISION_PART_MASK_ALL, /*FriendlyFire*/ false, /*Effect*/ hash40("collision_attr_cutup"), /*SFXLevel*/ ATTACK_SOUND_LEVEL_L, /*SFXType*/ COLLISION_SOUND_ATTR_CUTUP, /*Type*/ ATTACK_REGION_SWORD);
                }
                acmd->frame(50);
                if (acmd->is_excute()) {

                AttackModule::clear_all(acmd->module_accessor);

                JostleModule::set_status(acmd->module_accessor, true);
                }
    })
};






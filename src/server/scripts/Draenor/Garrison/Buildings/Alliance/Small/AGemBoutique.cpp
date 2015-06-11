////////////////////////////////////////////////////////////////////////////////
//
//  MILLENIUM-STUDIO
//  Copyright 2014-2015 Millenium-studio SARL
//  All Rights Reserved.
//
////////////////////////////////////////////////////////////////////////////////
#include "AGemBoutique.hpp"
#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "ScriptedGossip.h"
#include "GameObjectAI.h"
#include "Spell.h"
#include "GarrisonMgr.hpp"

namespace MS { namespace Garrison 
{
    //////////////////////////////////////////////////////////////////////////
    /// 77356 - Costan Highwall                                           ////
    //////////////////////////////////////////////////////////////////////////
    namespace npc_CostanHighwallAIData
    {
        InitSequenceFunction FnLevel1 = [](GarrisonNPCAI * p_This, Creature * p_Me)
        {

        };

        InitSequenceFunction FnLevel2 = [](GarrisonNPCAI * p_This, Creature * p_Me)
        {

        };

        InitSequenceFunction FnLevel3 = [](GarrisonNPCAI * p_This, Creature * p_Me)
        {

        };

        char ScriptName[] = "npc_CostanHighwall_Garr";

        std::vector<SkillNPC_RecipeEntry> Recipes
        {
            { 170701, 28179 },
            { 170706,     0 },
            { 170705,     0 },
            { 170704,     0 },
            { 170709,     0 },
            { 170708,     0 },
            { 170707,     0 },
            { 170712,     0 },
            { 170711,     0 },
            { 170710,     0 },
            { 170724, 28179 },
            { 170723, 28179 },
            { 170722, 28179 },
            { 170721, 28179 },
            { 170720, 28179 },
            { 170719, 28179 },
            { 170715, 28180 },
            { 170714, 28180 },
            { 170713, 28180 },
            { 170718, 28180 },
            { 170717, 28180 },
            { 170716, 28180 }
        };
    }

    //////////////////////////////////////////////////////////////////////////
    /// 77775 - Kaya Solasen                                              ////
    //////////////////////////////////////////////////////////////////////////
    namespace npc_KayaSolasenAIData
    {
        InitSequenceFunction FnLevel1 = [](GarrisonNPCAI* p_This, Creature* p_Me)
        {

        };

        InitSequenceFunction FnLevel2 = [](GarrisonNPCAI* p_This, Creature* p_Me)
        {

        };

        InitSequenceFunction FnLevel3 = [](GarrisonNPCAI* p_This, Creature* p_Me)
        {

        };

        char ScriptName[] = "npc_KayaSolasen_Garr";
    }

}   ///< namespace Garrison
}   ///< namespace MS
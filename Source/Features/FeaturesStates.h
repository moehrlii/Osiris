#pragma once

#include "Combat/TriggerBot/TriggerBotState.h"
#include "Combat/SniperRifles/NoScopeInaccuracyVis/NoScopeInaccuracyVisState.h"
#include "Hud/HudFeaturesStates.h"
#include "Misc/ChatTranslate/ChatTranslateState.h"
#include "Visuals/VisualFeaturesStates.h"

struct FeaturesStates {
    HudFeaturesStates hudFeaturesStates;
    VisualFeaturesStates visualFeaturesStates;
    NoScopeInaccuracyVisState noScopeInaccuracyVisState;
    TriggerBotState triggerBotState;
    ChatTranslateState chatTranslateState;
};

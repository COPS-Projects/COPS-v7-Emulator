/**
 * ****** Faith Emulator - Closed Source ******
 * Copyright (C) 2012 - 2013 Jean-Philippe Boivin
 *
 * Please read the WARNING, DISCLAIMER and PATENTS
 * sections in the LICENSE file.
 */

#include "advancedentity.h"

AdvancedEntity :: AdvancedEntity(uint32_t aUID)
    : Entity(aUID)
{
    mName = "Unknown";

    mLevel = 1;

    mCurHP = 0;
    mMaxHP = 0;

    mMinAtk = 0;
    mMaxAtk = 0;
    mDefense = 0;
    mMAtk = 0;
    mMDef = 0;
    mDexterity = 0;
    mDodge = 0;

    mPose = POSE_STANDBY;
}

AdvancedEntity :: ~AdvancedEntity()
{

}

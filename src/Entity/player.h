/**
 * ****** Faith Emulator - Closed Source ******
 * Copyright (C) 2012 - 2013 Jean-Philippe Boivin
 *
 * Please read the WARNING, DISCLAIMER and PATENTS
 * sections in the LICENSE file.
 */

#ifndef _FAITH_EMULATOR_PLAYER_H
#define _FAITH_EMULATOR_PLAYER_H

#include "common.h"
#include "advancedentity.h"
#include "client.h"
#include <string>
#include <deque>

class Player : public AdvancedEntity
{
    friend class Database; // the database can manipulate the Player data...

    PROHIBIT_COPY(Player); // constant UID, should be unique...

public:
    static const uint16_t LOOK_HUMAN_MALE       = 1;
    static const uint16_t LOOK_HUMAN_FEMALE     = 2;
    static const uint16_t LOOK_ELF_MALE         = 3;
    static const uint16_t LOOK_ELF_FEMALE       = 4;
    static const uint16_t LOOK_DARKELF_MALE     = 5;
    static const uint16_t LOOK_DARKELF_FEMALE   = 6;

    static const uint16_t FACE_INTERN   = 1;
    static const uint16_t FACE_NORMAL   = 101;
    static const uint16_t FACE_VETERAN  = 201;

    static const uint16_t HAIR_FIRST     = 101;
    static const uint16_t HAIR_LAST      = 101; // 107 (XY)

    static const uint8_t PROFESSION_MAGE    = 10;
    static const uint8_t PROFESSION_WARRIOR = 20;
    static const uint8_t PROFESSION_ARCHER  = 30;

public:
    Player(Client& aClient, uint32_t aUID);
    virtual ~Player();

public:
    void enterMap();
    bool move(uint16_t aX, uint16_t aY, uint8_t);

    /** Send the entity spawn msg. */
    virtual void sendShow(const Player& aPlayer) const;

    /** Called when the timer elapse. */
    virtual void timerElapsed(time_t aTime);

    void allot(uint8_t aForce, uint8_t aHealth, uint8_t aDexterity, uint8_t aSoul);

    void sendSysMsg(const char* aFmt, ...) const;
    void processTick(int32_t aClientTime, uint32_t aMsgCount);

    inline void send(Msg* aMsg) const { mClient.send(aMsg); }
    inline void send(uint8_t* aBuf, size_t aLen) const { mClient.send(aBuf, aLen); }

public:
    const char* getMate() const { return mMate.c_str(); }

    uint16_t getHair() const { return mHair; }

    uint8_t getProfession() const { return mProfession; }
    uint8_t getMetempsychosis() const { return mMetempsychosis; }
    int32_t getExp() const { return mExp; }

    uint16_t getForce() const { return mForce; }
    uint16_t getDexterity() const { return mDexterity; }
    uint16_t getHealth() const { return mHealth; }
    uint16_t getSoul() const { return mSoul; }
    uint16_t getAddPoints() const { return mAddPoints; }

    uint16_t getCurMP() const { return mCurMP; }
    uint16_t getMaxMP() const { return mMaxMP; }

    int32_t getMoney() const { return mMoney; }
    int16_t getPkPoints() const { return mPkPoints; }
    int32_t getVirtue() const { return mVirtue; }

    uint8_t getEnergy() const { return mEnergy; }
    uint8_t getXP() const { return mXP; }

    uint16_t getMercenaryExp() const { return mMercenaryExp; }
    uint16_t getMercenaryLevel() const { return mMercenaryLevel; }

private:
    Client& mClient;

    std::string mMate;

    uint16_t mHair;

    uint8_t mProfession;
    uint8_t mMetempsychosis;
    uint32_t mExp;

    uint16_t mForce;
    uint16_t mDexterity;
    uint16_t mHealth;
    uint16_t mSoul;
    uint16_t mAddPoints;

    uint16_t mCurMP;
    uint16_t mMaxMP;

    int32_t mMoney;
    int16_t mPkPoints;
    int32_t mVirtue;

    uint8_t mEnergy;
    uint8_t mXP;

    uint16_t mMercenaryExp;
    uint16_t mMercenaryLevel;

    uint16_t mPrevMap;
    uint16_t mPrevX;
    uint16_t mPrevY;


    // MsgTick protection
    uint32_t mMsgCount;
    int32_t mFirstClientTick;
    int32_t mLastClientTick;
    int32_t mLastRcvClientTick;
    int32_t mFirstServerTick;
    int32_t mLastServerTick;
    std::deque<int32_t> mServerTicks;
};

#endif // _FAITH_EMULATOR_PLAYER_H

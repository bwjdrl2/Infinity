//
//  Unit_Base.h
//  Chess
//
//  Created by 정 기호 on 13. 3. 14..
//
//

#ifndef __Chess__Unit_Base__
#define __Chess__Unit_Base__

#include "cocos2d.h"

using namespace cocos2d;

class Match_Map;
class Match_User;

class Unit_Base : public CCNode
{
public:
    Unit_Base();
    virtual ~Unit_Base();
    CREATE_FUNC(Unit_Base);
    virtual bool init();
public:
    void SetUser(Match_User* user);
    void SetParent(CCNode* parent);
    void SetMapIndex(int index){curMapIndex = index;}
    virtual void SetSelected(Match_Map* curMap);
    virtual void setPosition(const cocos2d::CCPoint &var);
public:
    bool Process_TouchMove(Match_Map* curMap, const CCPoint& touchPos);
public:
    CCRect boundingBox(void);
protected:
    CCSprite* sprite;
    Match_User* user;
    float scal_X,scal_Y;
    int curMapIndex = -1;
protected:
    virtual void Delegate_FinishMove(CCNode* node);
    virtual void Real_TouchMove(const CCPoint& movePos){}
};

#endif /* defined(__Chess__Unit_Base__) */

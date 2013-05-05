//
//  Facebook_Account.h
//  Chess
//
//  Created by 정 기호 on 13. 3. 21..
//
//

#ifndef __Chess__Facebook_Account__
#define __Chess__Facebook_Account__

#include "cocos2d.h"
using namespace cocos2d;

class Facebook_Account : public CCNode
{
public:
    CREATE_FUNC(Facebook_Account);
    bool init()
    {
        name = fbID = NULL;
        win = lose = 0;
        isPlayGame = false;
        return true;
    }
public:
    CCString* name;
    CCString* fbID;
    int win;
    int lose;
    bool isPlayGame;
};

#endif /* defined(__Chess__Facebook_Account__) */

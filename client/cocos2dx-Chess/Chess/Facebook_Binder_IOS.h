//
//  Facebook_Binder_IOS.h
//  Chess
//
//  Created by 정 기호 on 13. 3. 21..
//
//

#ifndef __Chess__Facebook_Binder_IOS__
#define __Chess__Facebook_Binder_IOS__


#include "Facebook_Binder_Base.h"

class Facebook_Binder_IOS : public Facebook_Binder_Base
{
public:
    virtual void Login();
    virtual void GetPicture(cocos2d::CCString *fbID);
    virtual void Post();
};

#endif /* defined(__Chess__Facebook_Binder_IOS__) */

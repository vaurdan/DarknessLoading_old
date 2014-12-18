#ifndef __KeyboardHandler_H__
#define __KeyboardHandler_H__

#include "cocos2d.h"

using namespace cocos2d;

class KeyboardHandler
{
public:

	virtual void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);

	virtual void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);

};

#endif // __KeyboardHandler_H__


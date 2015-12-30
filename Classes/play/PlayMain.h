

#ifndef __Jigsaw_PlayMain_
#define __Jigsaw_PlayMain_

#include "PlayShared.h"
#include "PlayDisplay.h"
#include "GameState.h"

class PlayMain : public cocos2d::Layer, public GameStateListener
{
public:
	PlayMain();
	virtual ~PlayMain() override;

    static Scene* createScene();

private:
	CREATE_FUNC(PlayMain);
    
	virtual bool init() override;

    virtual void onStateChanged(GameState gs) override;

    void initJigPanel();
private:
    cocos2d::Node* load_csd();

    void onClickPrelook(Ref* sender);
    void onClickFinish(Ref* sender);
    void onClickReturnMenu(Ref* sender);

private:
    Layout* m_panel_start;
    Layout* m_game_panel;
    
    PlayDisplay* m_display;

    float m_usedTime;
};

#endif


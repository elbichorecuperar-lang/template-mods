#include <Geode/Geode.include>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    void handleButton(bool down, int button, bool isPlayer1) {
        PlayLayer::handleButton(down, button, isPlayer1);

        if (down && m_isPracticeMode) {
            this->addCheckpoint();
        }
    }
};

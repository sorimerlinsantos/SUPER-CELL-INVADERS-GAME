#pragma once
#include "Boss.h"


class NewBoss : public Boss {
    private:
        float shootAngleOffset = 0.0; // Keep track of the shooting angle offset for the spiral pattern
        ofPoint shootingPoint;

        vector<ofPoint> possiblePositions;
        int switchPosIndex;
        int switchPosTimer;
        int bulletsShot = 0;

    public:
        NewBoss(int xpos, int ypos, string name);
        void update(const ofPoint& playerPos) override;
        void draw() override;
        void shoot() override;

};

#pragma once

#include "../logging/GLDebug.hpp"

using namespace std;

class Player {
    public:
        Player();
        Player(float x, float y, float dx, float dy, float angle);
        ~Player();
        void printLocation();
        void logLocation(GLDebugContext *debugContext);

        float x;
        float y;
        float dx;
        float dy;
        float angle;
};

Player::Player(){};

Player::Player(float x, float y, float dx, float dy, float angle) {
    this->x = x;
    this->y = y;
    this->dx = dx;
    this->dy = dy;
    this->angle = angle;
};

Player::~Player() {};

void Player::printLocation() {
    cout << "Player Position: (" << to_string(this->x) << "," << to_string(this->y) << ")" << endl;
};

void Player::logLocation(GLDebugContext *debugContext) {
    debugContext->logAppInfo(string("Player Position: (" + to_string(this->x) + "," + to_string(this->y) +")"));
};
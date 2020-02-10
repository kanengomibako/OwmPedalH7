#ifndef USER_MAIN_HPP
#define USER_MAIN_HPP

#include "common.h"

void mainInit();

void mainLoop();

void touchProcess(uint16_t x, uint16_t y, uint8_t a);
void loadData();
void saveData();

#endif // USER_MAIN_HPP

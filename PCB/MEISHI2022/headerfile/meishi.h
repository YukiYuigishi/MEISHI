/* 
 * Yuki Yuigishi MEISHI v1.0 library
 * MIT LICENSE
 */
#pragma once
#include <stdio.h>

/*
 * MEISHI v1.0には、GPIOが9ピン存在します。
 *
 * IO0
 * 5V 3.3V GND A0 B0 C0
 *
 * A0---IO14(GPIO14)
 * B0---IO12(GPIO12)
 * C0---IO13(GPIO13)
 *
 * IO1
 * 3.3V 5V GND A1 B1 C1
 *
 * A1---IO15(GPIO15)
 * B1---IO16(GPIO16)
 * C1---IO17(GPIO17)
 *
 * IO2
 * 3.3V 5V GND A2 B2 C2
 *
 * A2---IO18(GPIO18)
 * B2---IO19(GPIO19)
 * C2---IO21(GPIO21)
 *
 * MOTOR1 IO33(GPIO33)
 * MOTOR2 IO25(GPIO25)
 *
 * BUSSER IO26(GPIO26)
 * AC_EN  IO27(GPIO27)
 */

#define IO_A0 14
#define IO_B0 12
#define IO_C0 13

#define IO_A1 15
#define IO_B1 16
#define IO_C1 17

#define IO_A2 18
#define IO_B2 19
#define IO_C2 21

#define MOTOR1 33
#define MOTOR2 25

#define BUSSER 26
#define AC_EN 27

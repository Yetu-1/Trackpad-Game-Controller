/*
 * ew_bsp_usb.h
 *
 *  Created on: Jun 26, 2021
 *      Author: User
 */

#ifndef INC_EW_BSP_USB_H_
#define INC_EW_BSP_USB_H_

#include "usbd_hid.h"

extern USBD_HandleTypeDef hUsbDeviceFS;


void up();
void down();
void left();
void right();
void keyA();
void keyB();
void keyY();
void keyX();
void release();

void test();

#endif /* INC_EW_BSP_USB_H_ */

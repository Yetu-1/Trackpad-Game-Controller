#include "ew_bsp_usb.h"
uint8_t HID_buffer[4] = { 0 };
void up(){
	HID_buffer[3] = 0;
	USBD_HID_SendReport(&hUsbDeviceFS, HID_buffer, 4);
}
void down(){
	HID_buffer[3] = 2;
	USBD_HID_SendReport(&hUsbDeviceFS, HID_buffer, 4);
}
void left(){
	HID_buffer[3] = 3;
	USBD_HID_SendReport(&hUsbDeviceFS, HID_buffer, 4);
}
void right(){
	HID_buffer[3] = 1;
	USBD_HID_SendReport(&hUsbDeviceFS, HID_buffer, 4);
}
void keyA(){
	HID_buffer[3] = 40;
	USBD_HID_SendReport(&hUsbDeviceFS, HID_buffer, 4);
}
void keyB(){
	HID_buffer[3] = 72;
	USBD_HID_SendReport(&hUsbDeviceFS, HID_buffer, 4);
}
void keyY(){
	HID_buffer[3] = 136;
	USBD_HID_SendReport(&hUsbDeviceFS, HID_buffer, 4);
}
void keyX(){
	HID_buffer[3] = 24;
	USBD_HID_SendReport(&hUsbDeviceFS, HID_buffer, 4);
}
void release(){
	HID_buffer[3] = 8;
	USBD_HID_SendReport(&hUsbDeviceFS, HID_buffer, 4);
}
void test(){
	 keyY();
	 HAL_Delay(700);
	 release();
	 HAL_Delay(700);

	 keyB();
	 HAL_Delay(700);
	 release();
	 HAL_Delay(700);

	 keyA();
	 HAL_Delay(700);
	 release();
	 HAL_Delay(700);

	 keyX();
	 HAL_Delay(700);
	 release();
	 HAL_Delay(700);

	 up();
	 HAL_Delay(700);
	 release();
	 HAL_Delay(700);

	 right();
	 HAL_Delay(700);
	 release();
	 HAL_Delay(700);

	 down();
	 HAL_Delay(700);
	 release();
	 HAL_Delay(700);

	 left();
	 HAL_Delay(700);
	 release();
	 HAL_Delay(700);
}

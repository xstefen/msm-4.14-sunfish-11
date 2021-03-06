#ifndef VCMFIRMWARE_H_
#define VCMFIRMWARE_H_

#include "cam_sensor_cmn_header.h"

/* Temperature parameters version E for B4S4 LTCFW*/
struct cam_sensor_i2c_reg_array VCM_LC898219_Temp_Params_verE[] = {
	{0x14, 0x69, 0, 0},
	{0x3F, 0x09, 0, 0},
	{0x70, 0x00, 0, 0},
	{0x71, 0x50, 0, 0},
	{0x72, 0x06, 0, 0},
	{0x73, 0x00, 0, 0},
	{0x74, 0x07, 0, 0},
	{0x75, 0xFF, 0, 0},
	{0x76, 0xA8, 0, 0},
	{0x77, 0x4A, 0, 0},
};

/* Temperature parameters version H */
struct cam_sensor_i2c_reg_array VCM_LC898219_Temp_Params_verH[] = {
	{0x14, 0x69, 0, 0},
	{0x3F, 0x09, 0, 0},
	{0x70, 0x00, 0, 0},
	{0x71, 0x50, 0, 0},
	{0x72, 0x06, 0, 0},
	{0x73, 0x00, 0, 0},
	{0x74, 0x07, 0, 0},
	{0x75, 0xFF, 0, 0},
	{0x76, 0xA8, 0, 0},
	{0x77, 0x4A, 0, 0},
};

#endif /* #ifndef VCMFIRMWARE_H_ */

ifndef ADXL345_H_
#define ADXL345_H_

#include <stdint.h>

void ADXL345_Init();
uint8_t ADXL345_ReadRegister(uint8_t reg);
void ADXL345_WriteRegister(uint8_t reg, uint8_t value);

#endif /* ADXL345_H_ */

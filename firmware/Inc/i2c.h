
#ifndef I2C_H_
#define I2C_H_

void I2C1_Init(void);

void I2C1_Start(void);
void I2C1_Stop(void);

void I2C1_WriteAddress(uint8_t address);
void I2C1_WriteData(uint8_t data);
uint8_t I2C1_ReadData_ACK(void);
uint8_t I2C1_ReadData_NACK(void);


#endif /* I2C_H_ */


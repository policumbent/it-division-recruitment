
// *hi2c: Pointer to the I2C handle structure: hi2c1 in your case.
// DevAddress: 7-bit or 10-bit I2C device address.
// MemAddress: Memory address within the device to read from or write to.
// MemAddSize: Size of the memory address (I2C_MEMADD_SIZE_8 or I2C_MEMADD_SIZE_16).
// pData: Pointer to the data buffer to read from or write to.
// Size: Number of bytes to read or write.
// Timeout: Timeout duration in milliseconds.
// Returns: HAL_OK on success, HAL_ERROR on failure, or HAL_BUSY if the I2C bus is busy.
HAL_StatusTypeDef HAL_I2C_Mem_Write(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress,uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);

// This function reads data from a specific memory address of an I2C device.
// Parameters:
// *hi2c: Pointer to the I2C handle structure: hi2c1 in your case.
// DevAddress: 7-bit or 10-bit I2C device address.
// MemAddress: Memory address within the device to read from or write to.
// MemAddSize: Size of the memory address (I2C_MEMADD_SIZE_8 or I2C_MEMADD_SIZE_16).
// pData: Pointer to the data buffer to read from or write to.
// Size: Number of bytes to read or write.
// Timeout: Timeout duration in milliseconds.
// Returns: HAL_OK on success, HAL_ERROR on failure, or HAL_BUSY if the I2C bus is busy.
HAL_StatusTypeDef HAL_I2C_Mem_Read(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress,uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);

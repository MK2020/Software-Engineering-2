################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../RAII.cpp \
../Update_function.cpp \
../catching_right_exceptions.cpp \
../catching_various.cpp \
../operator[].cpp \
../order_matter.cpp 

OBJS += \
./RAII.o \
./Update_function.o \
./catching_right_exceptions.o \
./catching_various.o \
./operator[].o \
./order_matter.o 

CPP_DEPS += \
./RAII.d \
./Update_function.d \
./catching_right_exceptions.d \
./catching_various.d \
./operator[].d \
./order_matter.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



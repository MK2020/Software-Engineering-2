################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Lab2notes_1.cpp \
../lessthan_op.cpp \
../points_def2.cpp \
../testingmain2.cpp 

OBJS += \
./Lab2notes_1.o \
./lessthan_op.o \
./points_def2.o \
./testingmain2.o 

CPP_DEPS += \
./Lab2notes_1.d \
./lessthan_op.d \
./points_def2.d \
./testingmain2.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



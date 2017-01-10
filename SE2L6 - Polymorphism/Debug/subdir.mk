################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../counter.cpp \
../device_collection.cpp \
../device_collection_ITERATORS.cpp \
../modulocounter_sub.cpp \
../notes6_1_main.cpp 

OBJS += \
./counter.o \
./device_collection.o \
./device_collection_ITERATORS.o \
./modulocounter_sub.o \
./notes6_1_main.o 

CPP_DEPS += \
./counter.d \
./device_collection.d \
./device_collection_ITERATORS.d \
./modulocounter_sub.d \
./notes6_1_main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



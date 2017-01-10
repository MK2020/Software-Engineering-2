################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../STLlist.cpp \
../algorithm_smallest.cpp \
../iterators_function.cpp \
../myswap_main.cpp \
../point_def.cpp \
../smallest_int.cpp \
../smallest_int_points.cpp 

OBJS += \
./STLlist.o \
./algorithm_smallest.o \
./iterators_function.o \
./myswap_main.o \
./point_def.o \
./smallest_int.o \
./smallest_int_points.o 

CPP_DEPS += \
./STLlist.d \
./algorithm_smallest.d \
./iterators_function.d \
./myswap_main.d \
./point_def.d \
./smallest_int.d \
./smallest_int_points.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



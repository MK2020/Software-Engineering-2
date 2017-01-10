################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Lab5.cpp \
../counter.cpp \
../modulocounter_composition.cpp \
../modulocounter_sub.cpp \
../modulocounter_subclass.cpp \
../notes6_1_main.cpp \
../point_def.cpp \
../stopwatch_withoutrepetition.cpp \
../stopwatch_withrepetition.cpp \
../triangle_defn.cpp \
../triangle_main.cpp 

OBJS += \
./Lab5.o \
./counter.o \
./modulocounter_composition.o \
./modulocounter_sub.o \
./modulocounter_subclass.o \
./notes6_1_main.o \
./point_def.o \
./stopwatch_withoutrepetition.o \
./stopwatch_withrepetition.o \
./triangle_defn.o \
./triangle_main.o 

CPP_DEPS += \
./Lab5.d \
./counter.d \
./modulocounter_composition.d \
./modulocounter_sub.d \
./modulocounter_subclass.d \
./notes6_1_main.d \
./point_def.d \
./stopwatch_withoutrepetition.d \
./stopwatch_withrepetition.d \
./triangle_defn.d \
./triangle_main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



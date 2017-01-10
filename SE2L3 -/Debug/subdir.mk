################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Duplicate_Points.cpp \
../Notes3.cpp \
../NotesReferences.cpp \
../point_def.cpp \
../points_member.cpp 

OBJS += \
./Duplicate_Points.o \
./Notes3.o \
./NotesReferences.o \
./point_def.o \
./points_member.o 

CPP_DEPS += \
./Duplicate_Points.d \
./Notes3.d \
./NotesReferences.d \
./point_def.d \
./points_member.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



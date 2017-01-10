################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Lab4_1.cpp \
../intvector_defn.cpp \
../intvector_main_pointers.cpp \
../intvector_main_references.cpp \
../notes_main1.cpp \
../notes_main2.cpp \
../point_def.cpp 

OBJS += \
./Lab4_1.o \
./intvector_defn.o \
./intvector_main_pointers.o \
./intvector_main_references.o \
./notes_main1.o \
./notes_main2.o \
./point_def.o 

CPP_DEPS += \
./Lab4_1.d \
./intvector_defn.d \
./intvector_main_pointers.d \
./intvector_main_references.d \
./notes_main1.d \
./notes_main2.d \
./point_def.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Farthestpoint.cpp \
../classpoint.cpp \
../point_defn.cpp \
../pointsandlines.cpp \
../triangle.cpp \
../triangle_defn.cpp 

OBJS += \
./Farthestpoint.o \
./classpoint.o \
./point_defn.o \
./pointsandlines.o \
./triangle.o \
./triangle_defn.o 

CPP_DEPS += \
./Farthestpoint.d \
./classpoint.d \
./point_defn.d \
./pointsandlines.d \
./triangle.d \
./triangle_defn.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



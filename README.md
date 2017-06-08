Samsung Android/Linux kernel 4.4

Extracted from SM-G950F_NN_Opensource.zip from Samsung Opensource center

Jun 8, 2017

daveti

################################################################################

1. How to Build
	- get Toolchain
		From android git server , codesourcery and etc ..
		 - arm-eabi-4.9
		
	- edit Makefile
		edit "CROSS_COMPILE" to right toolchain path(You downloaded).
		  EX)  CROSS_COMPILE= $(android platform directory you download)/android/prebuilts/gcc/linux-x86/arm/arm-eabi-4.9/bin/arm-eabi-
		  Ex)  CROSS_COMPILE=/usr/local/toolchain/arm-eabi-4.9/bin/arm-eabi-		// check the location of toolchain
  	
        - to Build
          $ make ARCH=arm64 exynos8895-dreamlte_eur_open_defconfig
          $ make ARCH=arm64

2. Output files
	- Kernel : arch/arm/boot/zImage
	- module : drivers/*/*.ko

3. How to Clean	
		$ make clean
################################################################################

export AS_BUILD_MODE := BuildAndTransfer
export AS_SYSTEM_PATH := C:/BRAutomation/AS/System
export AS_BIN_PATH := C:/BRAutomation/AS412/bin-en
export AS_INSTALL_PATH := C:/BRAutomation/AS412
export AS_PATH := C:/BRAutomation/AS412
export AS_VC_PATH := C:/BRAutomation/AS412/AS/VC
export AS_GNU_INST_PATH := C:/BRAutomation/AS412/AS/gnuinst/V4.1.2
export AS_STATIC_ARCHIVES_PATH := C:/Users/km_2/Desktop/PLC\ Projekty/soft_bellows_plc/Temp/Archives/Config1/4PPC70_0702_20B
export AS_CPU_PATH := C:/Users/km_2/Desktop/PLC\ Projekty/soft_bellows_plc/Temp/Objects/Config1/4PPC70_0702_20B
export AS_CPU_PATH_2 := C:/Users/km_2/Desktop/PLC Projekty/soft_bellows_plc/Temp/Objects/Config1/4PPC70_0702_20B
export AS_TEMP_PATH := C:/Users/km_2/Desktop/PLC\ Projekty/soft_bellows_plc/Temp
export AS_BINARIES_PATH := C:/Users/km_2/Desktop/PLC\ Projekty/soft_bellows_plc/Binaries
export AS_PROJECT_CPU_PATH := C:/Users/km_2/Desktop/PLC\ Projekty/soft_bellows_plc/Physical/Config1/4PPC70_0702_20B
export AS_PROJECT_CONFIG_PATH := C:/Users/km_2/Desktop/PLC\ Projekty/soft_bellows_plc/Physical/Config1
export AS_PROJECT_PATH := C:/Users/km_2/Desktop/PLC\ Projekty/soft_bellows_plc
export AS_PROJECT_NAME := basic_pneu_stand
export AS_PLC := 4PPC70_0702_20B
export AS_TEMP_PLC := 4PPC70_0702_20B
export AS_USER_NAME := km_2
export AS_CONFIGURATION := Config1
export AS_COMPANY_NAME := \ 
export AS_VERSION := 4.12.2.93
export AS_WORKINGVERSION := 4.12


default: \
	$(AS_CPU_PATH)/Visu.br \
	vcPostBuild_Visu \



include $(AS_CPU_PATH)/Visu/Visu.mak

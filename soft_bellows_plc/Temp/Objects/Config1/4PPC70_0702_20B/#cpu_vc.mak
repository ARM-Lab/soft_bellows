export AS_SYSTEM_PATH := C:/Program\ Files/BRAutomationStudio4_4_4/AS/System
export AS_BIN_PATH := C:/Program Files/BRAutomationStudio4_4_4/AS49/bin-en
export AS_INSTALL_PATH := C:/Program\ Files/BRAutomationStudio4_4_4/AS49
export AS_PATH := C:/Program Files/BRAutomationStudio4_4_4/AS49
export AS_VC_PATH := C:/Program\ Files/BRAutomationStudio4_4_4/AS49/AS/VC
export AS_GNU_INST_PATH := C:/Program\ Files/BRAutomationStudio4_4_4/AS49/AS/gnuinst/V4.1.2
export AS_STATIC_ARCHIVES_PATH := D:/Projekty/pneu_aktuatory/plc/peristhaltic_selecter/Temp/Archives/Config1/4PPC70_0702_20B
export AS_CPU_PATH := D:/Projekty/pneu_aktuatory/plc/peristhaltic_selecter/Temp/Objects/Config1/4PPC70_0702_20B
export AS_CPU_PATH_2 := D:/Projekty/pneu_aktuatory/plc/peristhaltic_selecter/Temp/Objects/Config1/4PPC70_0702_20B
export AS_TEMP_PATH := D:/Projekty/pneu_aktuatory/plc/peristhaltic_selecter/Temp
export AS_BINARIES_PATH := D:/Projekty/pneu_aktuatory/plc/peristhaltic_selecter/Binaries
export AS_PROJECT_CPU_PATH := D:/Projekty/pneu_aktuatory/plc/peristhaltic_selecter/Physical/Config1/4PPC70_0702_20B
export AS_PROJECT_CONFIG_PATH := D:/Projekty/pneu_aktuatory/plc/peristhaltic_selecter/Physical/Config1
export AS_PROJECT_PATH := D:/Projekty/pneu_aktuatory/plc/peristhaltic_selecter
export AS_PROJECT_NAME := selecter
export AS_PLC := 4PPC70_0702_20B
export AS_TEMP_PLC := 4PPC70_0702_20B
export AS_USER_NAME := MartinV
export AS_CONFIGURATION := Config1
export AS_COMPANY_NAME := \ 
export AS_VERSION := 4.9.2.46
export AS_WORKINGVERSION := 4.9


default: \
	$(AS_CPU_PATH)/Visu.br \
	vcPostBuild_Visu \



include $(AS_CPU_PATH)/Visu/Visu.mak

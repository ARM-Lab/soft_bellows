SHELL := cmd.exe
CYGWIN=nontsec
export PATH := C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files\Microsoft SQL Server\Client SDK\ODBC\110\Tools\Binn\;C:\Program Files (x86)\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\Microsoft SQL Server\120\DTS\Binn\;C:\Program Files (x86)\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\MATLAB\R2021b\bin;C:\Program Files\dotnet\;C:\Users\MartinV\AppData\Local\Microsoft\WindowsApps;C:\Users\MartinV\AppData\Local\Programs\Microsoft VS Code\bin;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;C:\Users\MartinV\AppData\Local\Microsoft\WindowsApps;C:\Users\MartinV\AppData\Local\Programs\Microsoft VS Code\bin;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en\4.9;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en\4.8;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en\4.7;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en\4.6;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en\4.5;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en\4.4;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en\4.3;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en\4.2;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en\4.1;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en\4.0;C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en
export AS_BUILD_MODE := Build
export AS_VERSION := 4.9.2.46
export AS_WORKINGVERSION := 4.9
export AS_COMPANY_NAME :=  
export AS_USER_NAME := MartinV
export AS_PATH := C:/Program Files/BRAutomationStudio4_4_4/AS49
export AS_BIN_PATH := C:/Program Files/BRAutomationStudio4_4_4/AS49/Bin-en
export AS_PROJECT_PATH := C:/Users/MartinV/OneDrive\ -\ Technicka\ univerzita\ v Kosiciach/projekty/Testovaci_pneu_stand/plc/testovaci_pneu_stan
export AS_PROJECT_NAME := basic_pneu_stand
export AS_SYSTEM_PATH := C:/Program\ Files/BRAutomationStudio4_4_4/AS/System
export AS_VC_PATH := C:/Program\ Files/BRAutomationStudio4_4_4/AS49/AS/VC
export AS_TEMP_PATH := C:/Users/MartinV/OneDrive\ -\ Technicka\ univerzita\ v Kosiciach/projekty/Testovaci_pneu_stand/plc/testovaci_pneu_stan/Temp
export AS_CONFIGURATION := Config1
export AS_BINARIES_PATH := C:/Users/MartinV/OneDrive\ -\ Technicka\ univerzita\ v Kosiciach/projekty/Testovaci_pneu_stand/plc/testovaci_pneu_stan/Binaries
export AS_GNU_INST_PATH := C:/Program\ Files/BRAutomationStudio4_4_4/AS49/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH := C:/Program\ Files/BRAutomationStudio4_4_4/AS49/AS/GnuInst/V4.1.2/4.9/bin
export AS_GNU_INST_PATH_SUB_MAKE := C:/Program Files/BRAutomationStudio4_4_4/AS49/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH_SUB_MAKE := C:/Program Files/BRAutomationStudio4_4_4/AS49/AS/GnuInst/V4.1.2/4.9/bin
export AS_INSTALL_PATH := C:/Program\ Files/BRAutomationStudio4_4_4/AS49
export WIN32_AS_PATH := "C:\Program Files\BRAutomationStudio4_4_4\AS49"
export WIN32_AS_BIN_PATH := "C:\Program Files\BRAutomationStudio4_4_4\AS49\Bin-en"
export WIN32_AS_PROJECT_PATH := "C:\Users\MartinV\OneDrive - Technicka univerzita v Kosiciach\projekty\Testovaci_pneu_stand\plc\testovaci_pneu_stan"
export WIN32_AS_SYSTEM_PATH := "C:\Program Files\BRAutomationStudio4_4_4\AS\System"
export WIN32_AS_VC_PATH := "C:\Program Files\BRAutomationStudio4_4_4\AS49\AS\VC"
export WIN32_AS_TEMP_PATH := "C:\Users\MartinV\OneDrive - Technicka univerzita v Kosiciach\projekty\Testovaci_pneu_stand\plc\testovaci_pneu_stan\Temp"
export WIN32_AS_BINARIES_PATH := "C:\Users\MartinV\OneDrive - Technicka univerzita v Kosiciach\projekty\Testovaci_pneu_stand\plc\testovaci_pneu_stan\Binaries"
export WIN32_AS_GNU_INST_PATH := "C:\Program Files\BRAutomationStudio4_4_4\AS49\AS\GnuInst\V4.1.2"
export WIN32_AS_GNU_BIN_PATH := "$(WIN32_AS_GNU_INST_PATH)\\bin" 
export WIN32_AS_INSTALL_PATH := "C:\Program Files\BRAutomationStudio4_4_4\AS49"

.suffixes:

ProjectMakeFile:

	@'$(AS_BIN_PATH)/4.9/BR.AS.AnalyseProject.exe' '$(AS_PROJECT_PATH)/basic_pneu_stand.apj' -t '$(AS_TEMP_PATH)' -c '$(AS_CONFIGURATION)' -o '$(AS_BINARIES_PATH)'   -sfas -buildMode 'Build'   


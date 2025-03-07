#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 8
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 100
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_HOOK_USING_FUNC_PTR
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 1024

/* kservice optimization */

#define RT_DEBUG
#define RT_DEBUG_COLOR
// #define RT_DEBUG_INIT_CONFIG
// #define RT_DEBUG_INIT 1

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_SMALL_MEM
#define RT_USING_SMALL_MEM_AS_HEAP
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 256
#define RT_KPRINTF_USING_LONGLONG
#define RT_CONSOLE_DEVICE_NAME "console"
#define RT_VER_NUM 0x40100

/* RT-Thread Components */
#define ARCH_CPU_64BIT
// #define RT_USING_COMPONENTS_INIT
// #define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 4096
#define RT_MAIN_THREAD_PRIORITY 10
#define RT_USING_MSH
#define RT_USING_FINSH
#define FINSH_USING_MSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_CMD_SIZE 80
#define MSH_USING_BUILT_IN_COMMANDS
#define FINSH_USING_DESCRIPTION
#define FINSH_ARG_MAX 10
// #define RT_USING_DFS
// #define DFS_USING_POSIX
// #define DFS_USING_WORKDIR
// #define DFS_FILESYSTEMS_MAX 4
// #define DFS_FILESYSTEM_TYPES_MAX 4
// #define DFS_FD_MAX 16
// #define RT_USING_DFS_ELMFAT

/* elm-chan's FatFs, Generic FAT Filesystem Module */

// #define RT_DFS_ELM_CODE_PAGE 437
// #define RT_DFS_ELM_WORD_ACCESS
// #define RT_DFS_ELM_USE_LFN_3
// #define RT_DFS_ELM_USE_LFN 3
// #define RT_DFS_ELM_LFN_UNICODE_0
// #define RT_DFS_ELM_LFN_UNICODE 0
// #define RT_DFS_ELM_MAX_LFN 255
// #define RT_DFS_ELM_DRIVES 2
// #define RT_DFS_ELM_MAX_SECTOR_SIZE 512
// #define RT_DFS_ELM_REENTRANT
// #define RT_DFS_ELM_MUTEX_TIMEOUT 3000
// #define RT_USING_DFS_DEVFS

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_USING_SERIAL
#define RT_USING_SERIAL_V1
#define RT_SERIAL_USING_DMA
#define RT_SERIAL_RB_BUFSZ 64

/* Using USB */


/* C/C++ and POSIX layer */

#define RT_LIBC_DEFAULT_TIMEZONE 8

/* POSIX (Portable Operating System Interface) layer */


/* Interprocess Communication (IPC) */


/* Socket is in the 'Network' category */


/* Network */


/* Utilities */


/* RT-Thread Utestcases */


/* RT-Thread online packages */

/* IoT - internet of things */


/* Wi-Fi */

/* Marvell WiFi */


/* Wiced WiFi */


/* IoT Cloud */


/* security packages */


/* language packages */

/* JSON: JavaScript Object Notation, a lightweight data-interchange format */


/* XML: Extensible Markup Language */


/* multimedia packages */

/* LVGL: powerful and easy-to-use embedded GUI library */


/* u8g2: a monochrome graphic library */


/* PainterEngine: A cross-platform graphics application framework written in C language */


/* tools packages */


/* system packages */

/* enhanced kernel services */


/* POSIX extension functions */


/* acceleration: Assembly language or algorithmic acceleration packages */


/* CMSIS: ARM Cortex-M Microcontroller Software Interface Standard */


/* Micrium: Micrium software products porting for RT-Thread */

// #define PKG_USING_GUIENGINE
// #define PKG_USING_GUIENGINE_LATEST_VERSION
// #define PKG_USING_RGB888_PIXEL_BITS_32
// #define PKG_USING_RGB888_PIXEL_BITS 32
// #define GUIENGINE_CMD_STRING_MAX 16
// #define GUIENGINE_USING_FONT16
// #define GUIENGINE_USING_FONT12
// #define GUIENGINE_USING_PNG
// #define GUIENGINE_IMAGE_LODEPNG
// #define GUIENGINE_IMAGE_CONTAINER
// #define GUIENGINE_USING_DEMO
// #define GUIENGINE_NAME_MAX 16

/* peripheral libraries and drivers */


/* AI packages */


/* miscellaneous packages */

/* project laboratory */

/* samples: kernel and components samples */


/* entertainment: terminal games and other interesting software packages */

#define SOC_SIMULATOR
#include "rtconfig_project.h"

#endif

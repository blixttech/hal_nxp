#Description: USB Host MSD; user_visible: True
include_guard(GLOBAL)
message("middleware_usb_host_msd component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/host/class/usb_host_msd.c
    ${CMAKE_CURRENT_LIST_DIR}/host/class/usb_host_msd_ufi.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/host/class
)

#OR Logic component
if(${MCUX_DEVICE} STREQUAL "MIMXRT1166_cm7")
    include(middleware_usb_host_stack_MIMXRT1166_cm7)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1052")
    include(middleware_usb_host_stack_MIMXRT1052)
endif()
if(${MCUX_DEVICE} STREQUAL "MK22F12810")
    include(middleware_usb_host_stack_MK22F51212)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT633S_cm33")
    include(middleware_usb_host_stack_MIMXRT685S_cm33)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1064")
    include(middleware_usb_host_stack_MIMXRT1064)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC5526")
    include(middleware_usb_host_stack_LPC55S28)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54607")
    include(middleware_usb_host_stack_LPC54628)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S016")
    include(middleware_usb_host_stack_LPC54S018)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54606")
    include(middleware_usb_host_stack_LPC54628)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54616")
    include(middleware_usb_host_stack_LPC54628)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54016")
    include(middleware_usb_host_stack_LPC54S018)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54018")
    include(middleware_usb_host_stack_LPC54S018)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54628")
    include(middleware_usb_host_stack_LPC54628)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC5512")
    include(middleware_usb_host_stack_LPC55S16)
endif()
if(${MCUX_DEVICE} STREQUAL "MK22F51212")
    include(middleware_usb_host_stack_MK22F51212)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1173_cm4")
    include(middleware_usb_host_stack_MIMXRT1176_cm4)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1173_cm7")
    include(middleware_usb_host_stack_MIMXRT1176_cm7)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC5516")
    include(middleware_usb_host_stack_LPC55S16)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54605")
    include(middleware_usb_host_stack_LPC54628)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1051")
    include(middleware_usb_host_stack_MIMXRT1052)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54618")
    include(middleware_usb_host_stack_LPC54628)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1021")
    include(middleware_usb_host_stack_MIMXRT1021)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT555S_cm33")
    include(middleware_usb_host_stack_MIMXRT595S_cm33)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54018M")
    include(middleware_usb_host_stack_LPC54S018M)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC5514")
    include(middleware_usb_host_stack_LPC55S16)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S16")
    include(middleware_usb_host_stack_LPC55S16)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1062")
    include(middleware_usb_host_stack_MIMXRT1062)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S018")
    include(middleware_usb_host_stack_LPC54S018)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1042")
    include(middleware_usb_host_stack_MIMXRT1042)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1176_cm4")
    include(middleware_usb_host_stack_MIMXRT1176_cm4)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1176_cm7")
    include(middleware_usb_host_stack_MIMXRT1176_cm7)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1175_cm4")
    include(middleware_usb_host_stack_MIMXRT1176_cm4)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1175_cm7")
    include(middleware_usb_host_stack_MIMXRT1176_cm7)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S018M")
    include(middleware_usb_host_stack_LPC54S018M)
endif()
if(${MCUX_DEVICE} STREQUAL "MK22F25612")
    include(middleware_usb_host_stack_MK22F51212)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1061")
    include(middleware_usb_host_stack_MIMXRT1062)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC5528")
    include(middleware_usb_host_stack_LPC55S28)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1165_cm7")
    include(middleware_usb_host_stack_MIMXRT1166_cm7)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S66_cm33_core0")
    include(middleware_usb_host_stack_LPC55S69_cm33_core0)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S005")
    include(middleware_usb_host_stack_LPC54S018)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S69_cm33_core0")
    include(middleware_usb_host_stack_LPC55S69_cm33_core0)
endif()
if(${MCUX_DEVICE} STREQUAL "K32L2A31A")
    include(middleware_usb_host_stack_K32L2A41A)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1024")
    include(middleware_usb_host_stack_MIMXRT1024)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1011")
    include(middleware_usb_host_stack_MIMXRT1011)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54005")
    include(middleware_usb_host_stack_LPC54S018)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S28")
    include(middleware_usb_host_stack_LPC55S28)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT533S_cm33")
    include(middleware_usb_host_stack_MIMXRT595S_cm33)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S14")
    include(middleware_usb_host_stack_LPC55S16)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S26")
    include(middleware_usb_host_stack_LPC55S28)
endif()
if(${MCUX_DEVICE} STREQUAL "K32L2A41A")
    include(middleware_usb_host_stack_K32L2A41A)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54608")
    include(middleware_usb_host_stack_LPC54628)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT685S_cm33")
    include(middleware_usb_host_stack_MIMXRT685S_cm33)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT595S_cm33")
    include(middleware_usb_host_stack_MIMXRT595S_cm33)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1015")
    include(middleware_usb_host_stack_MIMXRT1015)
endif()
if(${MCUX_DEVICE} STREQUAL "MK64F12")
    include(middleware_usb_host_stack_MK64F12)
endif()
if(${MCUX_DEVICE} STREQUAL "MK66F18")
    include(middleware_usb_host_stack_MK66F18)
endif()


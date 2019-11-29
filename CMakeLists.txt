cmake_minimum_required(VERSION 3.15)
project(imapsync_ui)

set(CMAKE_CXX_STANDARD 17)

find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})

add_executable(imapsync_ui main.cpp MainFrame.cpp VersionFinder.cpp VersionFinder.h ImapSyncCommand.cpp ImapSyncCommand.h MainFrameHandlers.cpp MainFrameHandlers.h)
target_link_libraries(imapsync_ui ${wxWidgets_LIBRARIES})

IF (APPLE)
    SET ( APP_LOCATION "$<TARGET_FILE:imapsync_ui>" )
    SET(CPACK_PACKAGE_EXECUTABLES "imapsync_ui" "The executable")

    SET ( CPACK_BUNDLE_NAME "ImapSync UI" )

    SET ( CPACK_GENERATOR "Bundle" )
    SET ( CPACK_BUNDLE_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/resources/Info.plist)
    SET ( CPACK_BUNDLE_ICON ${CMAKE_CURRENT_SOURCE_DIR}/resources/imapsync-ui.icns )
    SET ( CPACK_PACKAGE_ICON ${CMAKE_CURRENT_SOURCE_DIR}/resources/imapsync-ui.icns)
    SET ( CPACK_BUNDLE_STARTUP_COMMAND ${CMAKE_BINARY_DIR}/imapsync_ui )
ENDIF ()

INCLUDE ( CPack )
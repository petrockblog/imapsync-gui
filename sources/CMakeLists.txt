# Typically you don't care so much for a third party library's tests to be
# run from your own project's code.
set(JSON_BuildTests OFF CACHE INTERNAL "")

# If you only include this third party in PRIVATE source files, you do not
# need to install it when your main project gets installed.
set(JSON_Install OFF CACHE INTERNAL "")

# Don't use include(nlohmann_json/CMakeLists.txt) since that carries with it
# unintended consequences that will break the build.  It's generally
# discouraged (although not necessarily well documented as such) to use
# include(...) for pulling in other CMake projects anyways.
add_subdirectory(../libs/json ../cmake-build-${CMAKE_BUILD_TYPE})

find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})

add_executable(imapsync_ui main.cpp MainFrame.cpp VersionFinder.cpp VersionFinder.h ImapSyncCommand.cpp ImapSyncCommand.h MainFrameHandlers.cpp MainFrameHandlers.h)
target_link_libraries(imapsync_ui PRIVATE ${wxWidgets_LIBRARIES})
target_link_libraries(imapsync_ui PRIVATE nlohmann_json::nlohmann_json)

IF (APPLE)
    SET ( APP_LOCATION "$<TARGET_FILE:imapsync_ui>" )
    SET(CPACK_PACKAGE_EXECUTABLES "imapsync_ui" "The executable")

    SET ( CPACK_BUNDLE_NAME "ImapSync UI" )

    SET ( CPACK_GENERATOR "Bundle" )
    SET ( CPACK_BUNDLE_PLIST ../resources/Info.plist)
    SET ( CPACK_BUNDLE_ICON ../resources/imapsync-ui.icns)
    SET ( CPACK_PACKAGE_ICON ../resources/imapsync-ui.icns)
    SET ( CPACK_BUNDLE_STARTUP_COMMAND ${CMAKE_BINARY_DIR}/imapsync_ui )
ENDIF ()

INCLUDE ( CPack )
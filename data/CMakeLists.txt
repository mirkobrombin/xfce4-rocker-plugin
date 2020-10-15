### CMakeLists automatically created with AutoVala
### Do not edit

SET(DBUS_PREFIX ${CMAKE_INSTALL_PREFIX})
IF(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/rocker-applications.menu)
	install(DIRECTORY
		${CMAKE_CURRENT_SOURCE_DIR}/rocker-applications.menu
	DESTINATION
		/etc/xdg/menus
	)
ELSE()
	install(FILES
		${CMAKE_CURRENT_SOURCE_DIR}/rocker-applications.menu
	DESTINATION
		/etc/xdg/menus
	)
ENDIF()

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/rocker-launcher.desktop DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/xfce4/panel/plugins/)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/pm.mirko.rocker.remotecontrol.service ${CMAKE_CURRENT_BINARY_DIR}/pm.mirko.rocker.remotecontrol.service)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/pm.mirko.rocker.remotecontrol.service DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/dbus-1/services/)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/pm.mirko.rocker.remotecontrol.service.base ${CMAKE_CURRENT_BINARY_DIR}/pm.mirko.rocker.remotecontrol.service)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/pm.mirko.rocker.remotecontrol.service DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/dbus-1/services/)
include(GSettings)
add_schema(pm.mirko.rocker.gschema.xml)

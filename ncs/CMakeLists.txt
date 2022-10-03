if(CONFIG_GREETER)
  add_subdirectory(".." greeter)
  target_link_libraries(greeter PUBLIC zephyr_interface)

  zephyr_interface_library_named(greeter_interface)
  target_link_libraries(greeter_interface INTERFACE greeter)
endif()


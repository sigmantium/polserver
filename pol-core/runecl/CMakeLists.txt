set(ex_name runecl)

# define source files
include(CMakeSources.cmake)

add_executable(${ex_name}
  ${${ex_name}_sources}
)    
 
set_compile_flags(${ex_name} 1)

target_link_libraries(${ex_name} PUBLIC
  bscript
  clib
  plib
  tinyxml
  pthread
)

dist(${ex_name} scripts)

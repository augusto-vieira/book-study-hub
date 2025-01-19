# Versão mínima dp cmake para compilar o projeto.
cmake_minimum_required(VERSION 3.7.0)

# Nomeamos o projeto como Hexagonal.
project (hexagonal)

# Configuramos as flags para compilação.
set (CMAKE_C_FLAGS "-D_GNU_SOURCE -Wall -std=c99")

# Configuramos o diretório para os binários.
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Definimos o perfil de compilação como debug.
set (CMAKE_BUILD_TYPE Debug)

add_executable(hexagonal "")
##target_link_libraries(hexagonal PUBLIC sat pthread)

target_sources(hexagonal
PUBLIC
${CMAKE_CURRENT_LIST_DIR}/src/adapter/keyboard.c
${CMAKE_CURRENT_LIST_DIR}/src/adapter/display.c
${CMAKE_CURRENT_LIST_DIR}/src/domain/typewriter.c
${CMAKE_CURRENT_LIST_DIR}/src/main.c
)

# Onde criamos o binário hexagonal.
target_include_directories(hexagonal
PUBLIC
${CMAKE_CURRENT_LIST_DIR}/src/adapter/
${CMAKE_CURRENT_LIST_DIR}/src/domain/
)
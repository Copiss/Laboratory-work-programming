cmake_minimum_required(VERSION 3.15) 	# ѕроверка версии CMake.
					# ≈сли верси€ установленой программы
					# старее указаной, произайдЄт аварийный выход.

set(PROJECT_NAME lab.7)			# задать константу с именем проекта		 
project("${PROJECT_NAME}")		# им€ проекта	


set(CMAKE_CXX_STANDARD 17)		# устанавливаем 17 стандарт €зыка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable("${PROJECT_NAME}" main.cpp
				 func.h
				 func.cpp)	
								 

								 

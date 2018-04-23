# CMakeList.txt: проект CMake для Oleksenko_Sergey_Lesson_5; включите исходный код и определения
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник для исполняемого файла этого проекта.
add_executable (OleksenkoSergeyLesson5 
	"Oleksenko_Sergey_Lesson_5.cpp" "Oleksenko_Sergey_Lesson_5.h" 
	"Stack.cpp" "Stack.h" 
	"Task1.cpp" "Task1.h" 
	"Task2.h" "Task2.cpp" 
	"StackTask3.h" "TaskStack3.cpp"
	"Task3.h" "Task3.cpp")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

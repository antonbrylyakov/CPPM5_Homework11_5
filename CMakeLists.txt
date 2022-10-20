cmake_minimum_required(VERSION 3.10)
project(CPPM5_Homework11_5)
add_compile_definitions(FIGURES_EXPORTS)
add_library(Figures SHARED 
Figures/EquilateralTriangle.cpp
Figures/EquilateralTriangle.h
Figures/Figure.cpp
Figures/Figure.h
Figures/FigureUtils.cpp
Figures/FigureUtils.h
Figures/IsoScelesTriangle.cpp
Figures/IsoScelesTriangle.h
Figures/Parallelogram.cpp
Figures/Parallelogram.h
Figures/Quadrangle.cpp
Figures/Quadrangle.h
Figures/Rectangle.cpp
Figures/Rectangle.h
Figures/Rhombus.cpp
Figures/Rhombus.h
Figures/RightTriangle.cpp
Figures/RightTriangle.h
Figures/Square.cpp
Figures/Square.h
Figures/Triangle.cpp
Figures/Triangle.h
)
add_executable(FiguresApp FiguresApp/FiguresApp.cpp)
include_directories(Figures)
target_link_libraries(FiguresApp Figures)
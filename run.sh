g++ $(fltk-1.3.5/fltk-config --cxxflags) main.cpp $(fltk-1.3.5/fltk-config --ldflags) -o main && \
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}$(realpath fltk-1.3.5/lib): && \
./main
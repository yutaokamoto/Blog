wrapper: my_cpp.cpp
	gcc -c -o my_c.o my_c.c
	g++ -c -o my_cpp.o my_cpp.cpp
	g++ -fPIC -Wall -O2 -shared -o my_wrapper.so my_c.o my_cpp.o libboost_python38.dylib libpython3.8.dylib

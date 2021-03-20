shapetest: shapetest.o circle.o triangle.o rectangle.o
	g++ -o shapetest shapetest.o circle.o triangle.o rectangle.o
	
shapetest.o: shapetest.cpp
	g++ -c shapetest.cpp

circle.o: circle.cpp
	g++ -c circle.cpp

triangle.o: triangle.cpp
	g++ -c triangle.cpp

rectangle.o: rectangle.cpp
	g++ -c rectangle.cpp

clean:
	rm shapetest
	rm shapetest.o
	rm circle.o
	rm triangle.o
	rm rectangle.o

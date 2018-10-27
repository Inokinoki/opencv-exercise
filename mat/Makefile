all: hellomatrix.run showimage.run

hellomatrix.run:
	g++ hellomatrix.cpp -lopencv_core -o hellomatrix.run

showimage.run:
	g++ showimage.cpp -lopencv_core -lopencv_imgcodecs -lopencv_highgui -o showimage.run

clean:
	rm *.run

.PHONY: clean all
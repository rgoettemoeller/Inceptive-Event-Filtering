To compile the main program
g++ -o main main.cpp dataStructure.cpp FindIE.cpp FindTE.cpp

to import the data, compile and run fillBuffer.cpp

This version imports from flatbuffer and also exports to it

not sure if flatc needs to be installed but probably does

To test the output of the program that saves the data into a csv, compile
and run testExportData.cpp

This was developed on Ubuntu, not sure how it will run on Windows.
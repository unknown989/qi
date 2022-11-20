all: make_static
	g++ main.cpp -o build/qi -Lbuild -lqi
    
make_static:
	g++ src/* -c -o build/lib/*.o
	ar rsv build/libqi.a build/lib/*

clean:
	rm build/lib/* build/qi* build/libqi.a

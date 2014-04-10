all:
	g++ -I/usr/include/lua5.1/ main.cpp LuaReader.cpp -o LuaConfig -llua5.1
.PHONY: clean
clean:
	rm LuaConfig

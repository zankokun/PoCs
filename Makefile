objects := $(wildcard *.cc)

all: 
	echo "To be compiled: $(objects)"
	for i in $(objects); do \
		g++ -std=c++17 -g $$i -o $$i.elf ; \
		done

.PHONY: all

%:
		g++ -g -Wall -Wextra -Wpedantic $@ -o $<

clean:
	rm -vf *.elf

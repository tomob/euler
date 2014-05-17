
PROBLEM := 008

all: run-all

run-all: run-cc run-hs

run-cc: build-cc
	@echo Running $(PROBLEM) -- C++ version.
	@time -p ./$(PROBLEM)-cc
	@echo

run-hs: build-hs
	@echo Running $(PROBLEM) -- Haskell version.
	@time -p ./$(PROBLEM)-hs
	@echo

build-cc: $(PROBLEM)-cc

build-hs: $(PROBLEM)-hs

$(PROBLEM)-cc: $(PROBLEM).cc.o
	@g++ -o $@ $<

$(PROBLEM)-hs: $(PROBLEM).hs.o
	@ghc -o $@ $<

clean:
	@-rm -f *~ *.o *.hi $(PROBLEM)-cc $(PROBLEM)-hs

%.cc.o: %.cc
	@g++-4.9 -std=c++11 -c -o $@ $<

%.hs.o: %.hs
	@ghc -c -o $@ $<

.PHONY: all clean build-cc build-hs run-hs run-cc run-all

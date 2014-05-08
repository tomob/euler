
MAX_PROBLEM := 470

.ONESHELL:
all:
	@for p in `seq -w 1 $(MAX_PROBLEM)`; do \
		if [ -d $$p ] ; then \
			make --no-print-directory -r -C $$p all ; \
		fi ; \
	done

.ONESHELL:
clean:
	@for p in `seq -w 1 $(MAX_PROBLEM)`; do \
		if [ -d $$p ] ; then \
			echo Cleaning $$p ; \
			make --no-print-directory -C $$p clean ; \
		fi ; \
	done

.ONESHELL:
new:
	@if [ "x$(NUMBER)" = "x" ]; then \
		echo Make new project directory with 'make new NUMBER=<number>'; \
		exit 1; \
	fi
	@if [ -d $(NUMBER) ]; then \
		echo Project\'s directory already exists.; \
		exit 2; \
	fi
	@mkdir $(NUMBER)
	@cat 000skeleton/Makefile | sed s/{REPLACE}/$(NUMBER)/ > $(NUMBER)/Makefile
	@cp 000skeleton/000.cc $(NUMBER)/$(NUMBER).cc
	@cp 000skeleton/000.hs $(NUMBER)/$(NUMBER).hs

.PHONY: all clean new

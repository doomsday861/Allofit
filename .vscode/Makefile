outfile = a.out
ifeq ($(OS),Windows_NT)
	outfile = a.exe
endif

export PATH := $(PATH):.

test:
	@g++ ${p}.cpp
	@${outfile} <$inputf.in >${p}.outputf.in
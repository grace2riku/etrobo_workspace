# for mruby
APPL_LIBS += $(ETROBO_MRUBY_LIB) -lm
INCLUDES += -I$(ETROBO_MRUBY_ROOT)/include/

APPL_ASMOBJS :=
ifdef USE_CXX
	APPL_CXXOBJS += 
	APPL_COBJS +=
else
	APPL_COBJS += 
endif



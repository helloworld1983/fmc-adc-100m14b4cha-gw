WBGEN2=~/projects/wbgen2/wbgen2
RTL=../rtl/

carrier_csr:
	 $(WBGEN2) -l vhdl -V $(RTL)$@.vhd -D $@.htm -C $@.h $@.wb

utc_core_regs:
	 $(WBGEN2) -l vhdl -V $(RTL)$@.vhd -D $@.htm -C $@.h $@.wb

irq_controller_regs:
	 $(WBGEN2) -l vhdl -V $(RTL)$@.vhd -D $@.htm -C $@.h $@.wb

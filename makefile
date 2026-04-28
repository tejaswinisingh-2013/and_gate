compile:
	verilator -Wall --binary --trace --timing and_gate.v and_gate_tb.v
run:
	./obj_dir/Vand_gate
all: compile run

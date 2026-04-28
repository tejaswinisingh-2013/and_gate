

module and_gate_tb;

    reg a, b;     // inputs to DUT
    wire y;       // output from DUT

    // Instantiate the AND gate (DUT)
    and_gate dut (
        .a(a),
        .b(b),
        .y(y)
    );

    initial begin
        $display("A B | Y");
        $monitor("%0d %0d | %0d", a, b, y);

        // Apply test cases
        a = 0; b = 0; #10;
        a = 0; b = 1; #10;
        a = 1; b = 0; #10;
        a = 1; b = 1; #10;

        $finish;
    end

endmodule

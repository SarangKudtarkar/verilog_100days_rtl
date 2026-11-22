// Day-50 : round-robin arbiter. The search for the next grant starts just after the
// last granted requester, so every active requester gets an equal share.
module round_robin_arbiter #(parameter int N = 4) (
  input  logic         clk, rst,
  input  logic [N-1:0] req,
  output logic [N-1:0] grant,       // one-hot (combinational)
  output logic         any_grant
);
  localparam int PW = (N > 1) ? $clog2(N) : 1;
  logic [PW-1:0] ptr;               // index of the last granted requester
  logic [N-1:0]  grant_c;
  logic [PW-1:0] gidx;

  always_comb begin
    int idx;
    grant_c = '0;
    gidx    = ptr;
    for (int i = 1; i <= N; i++) begin
      idx = (int'(ptr) + i) % N;
      if (grant_c == '0 && req[idx]) begin
        grant_c[idx] = 1'b1;
        gidx         = PW'(idx);
      end
    end
  end

  always_ff @(posedge clk)
    if (rst)        ptr <= PW'(N - 1);     // so that requester 0 is served first
    else if (|req)  ptr <= gidx;

  assign grant     = grant_c;
  assign any_grant = |req;
endmodule

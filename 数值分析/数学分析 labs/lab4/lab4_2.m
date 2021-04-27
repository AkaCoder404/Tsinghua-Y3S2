% lab4_2.m
eps = 0.1;          % eps 1, 0.1, 0.01, 0.0001
a = 0.5;            % a = 1/2
n = 100;            % n = 100
h = 1.0 / 100;      % h = 1 / n

% set up A and b
x = (1:1:n) * h;                        % x_i = ih, (i = 1,2, ...,n-1)
v = ones(n, 1) * (-2 * eps - h);        % n x 1 vector * (-2 * eps - h)
v(1) = 2 * eps + h;                     
A = diag(v) + diag(ones(n - 1, 1) * eps, -1) + diag(ones(n - 1, 1) * (eps + h), 1);
b = ones(n, 1) * (a * h * h);
b(n) = b(n) - eps - h;                  % vector b

% 迭代法
[sol_jacobi, n_jacobi] = jacobi(A, b, zeros(n, 1), .001);
[sol_GS, n_GS] = gs(A, b, zeros(n, 1), .001);
[sol_SOR, n_SOR] = sor(A, b, zeros(n, 1), 0.9, .001);

% 范数 
norm_jacobi = ["norm_jacobi", norm(x - sol_jacobi, 2),"in", n_jacobi, "steps"];
disp(norm_jacobi);
norm_gs = ["norm_gs", norm(x - sol_GS, 2), "in", n_GS, "steps"];
disp(norm_gs);
norm_sor = ["norm_sor", norm(x - sol_SOR,2) "in", n_SOR, "steps"];
disp(norm_sor);

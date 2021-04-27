% lab3_6.m
n = 10;                 % n = 10
H = hilb(n);            % create Hilbert Matrix of size n
x = ones(n,1);          % ones vector of size n 
b = H * x;              % calculate b = Hx to find actual solution
L = cholesky(H);        % calculate Cholesky Method for L
                        % H = LL^T, thus b = LL^Tx, approxixmation 
sol = L.' \ (L \ b);    % xbar = (L^T)^-1 * L^-1 * b

% calculate ||r||_\infty and ||\delta x||_infty
r = b - H * sol;
dx = sol - x;
disp("norm(r): " + norm(r,inf));
disp("norm(dx): " + norm(dx,inf));

% disturbance of 10^-7
bd = b + ones(n,1) * 1e-7;  
sold = L.' \ (L \ bd);
rd = bd - H * sold;
dxd = sold - x;
disp("norm(rd): " + norm(rd,inf));
disp("norm(dxd): " + norm(dxd,inf));
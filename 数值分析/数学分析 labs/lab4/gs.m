% gs.m
function [x, n] = gs(A, b, x0, eps) % matrix A, vector b, initial x0, error eps 
    % A = D - L - U
    D = diag(diag(A));              % diagonal matrix D
    L = -tril(A, -1);               % lower triangle L
    U = -triu(A, 1);                % upper triangle U
    B = (D - L) \ U;                % 常矩阵
    f = (D - L) \ b;                % 常向量  
    x = B * x0 + f;                 % 固定格式迭代法
    n = 1;                          % step
    while norm(x - x0, inf) >= eps  % 不满足收敛条件时
        x0 = x;
        x = B * x0 + f;
        n = n + 1;
    end
end
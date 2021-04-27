function L = cholesky(A)            % input square matrix A
    n = size(A,1);                  % get dimensions of A             
    L = zeros(n,n);                 % resulting matrix
    L(1, 1) = sqrt(A(1,1));         % l11 = a11^2, first entry at (1,1)
    for j = 1 : n                   % For j = 1, 2, ..., n
        for k = 1 : j - 1           % For k = 1, 2, ..., j-1
            A(j,j) = A(j,j) - A(j,k) * A(j,k); % ajj := ajj - (ajk)^2
        end
        A(j,j) = sqrt(A(j,j));      % ajj := sqrt(ajj)
        L(j,j) = A(j,j);            % ljj = sqrt(Ajj - sum{(ljk)^2})
        for i = j + 1 : n           % For i = j + 1, j + 2, ..., n
            for k = 1 : j - 1       	% For K = 1, 2, ..., j - 1
                A(i,j) = A(i,j) - A(i,k) * A(j,k); % aij := aij - aik * ajk
            end
            A(i,j) = A(i,j) / A(j,j);   % aij = aij/ajj
            L(i,j) = A(i,j);            % lij = aij - si,{lik;kl}/ljj
        end
    end
end
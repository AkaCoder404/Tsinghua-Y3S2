disp("equation 1: ");
% initial value
x_0 = 0.6;
x_k = x_0;
% error
epsilon = 1e-5; 
lambda_0 = 1;
% step one
x_k_plus_one = x_k - lambda_0 * f1(x_k) / df1(x_k);
% realization
while abs(f1(x_k)) > epsilon || abs(x_k_plus_one - x_k) > epsilon
    step = f1(x_k) / df1(x_k);
    x_k_plus_one = x_k - step;
    % 阻尼法
    lambda = lambda_0;
    while double(abs(f1(x_k_plus_one))) >= double(abs(f1(x_k)))
        x_k_plus_one = x_k - lambda * step;
        lambda = lambda / 2;
    end
    x_k = x_k_plus_one;
    
    disp(["lambda:" num2str(lambda) "x:" num2str(x_k_plus_one)]);
end

disp(x_k_plus_one);
sol = fzero(@f1, x_0);
disp("fzero:");
disp(sol);

% declare function
function f1 = f1(x)
    f1 = x^3 - x - 1;
end

function df1 = df1(x)
    df1 = 3 * x^2 - 1;
end

    
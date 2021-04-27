single_sum = single(1);
single_last = single(0);

j = 1;
while single_sum - single_last ~= 0
	single_last = single_sum;
	j = j + 1;
	single_sum = single_sum + 1 / j;
end

double_sum = 1;
i = 1;
while i ~= j
	i = i + 1;
	double_sum = double_sum + 1/i;
end

disp(single_sum);
disp(double_sum);
disp((single_sum - double_sum) / double_sum);

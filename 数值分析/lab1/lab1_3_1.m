sum = single(1);
last = single(0);
j = 1;

while sum - last ~= 0
	last = sum;
	j = j + 1;
	sum = sum + 1/j;
end
disp(j);
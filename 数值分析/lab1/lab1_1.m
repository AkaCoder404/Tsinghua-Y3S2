h = logspace(-16, 0, 1000);
truncation = h/2;
rounding = 0.0000000000000001 * h .^ -1;
epsilon = truncation + rounding;
error = abs(((sin(1+h)-sin(1)) ./h) - cos(1));
loglog(h,epsilon,'--b', h,truncation, '--k', h, rounding, '--k', h, error, 'r'),axis([0.0000000000000001 1 0.00000000000000001 10]);
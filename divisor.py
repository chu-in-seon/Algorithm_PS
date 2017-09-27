inp = open('divisor.inp', 'r')
out = open('divisor.out', 'w')
n = int(inp.readline())
for i in range(n):
    string = inp.readline().split()
    a, b = int(string[0]), int(string[1])
    t_cnt = 0
    for num in range(a, b + 1):
        cnt, i = 0, 1
        while i**2 <= num:
            if num % i == 0:
                cnt += 1
                if i**2 < num:
                    cnt += 1
            i += 1
        if num % cnt == 0:
            t_cnt += 1
    out.write(str(t_cnt) + '\n')
inp.close()
out.close()

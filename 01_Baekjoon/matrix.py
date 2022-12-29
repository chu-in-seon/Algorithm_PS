inp = open('matrix.inp', 'r')
out = open('matrix.out', 'w')
n = int(inp.readline())
for n in range(n):
    v = []
    cnt, notOne = 0, 0
    v_size = int(inp.readline())
    for i in range(v_size):
        inp_str = inp.readline()
        tmp = inp_str.split()
        for j in range(len(tmp)):
            tmp[j] = int(tmp[j])
            if tmp[j] != 1:
                notOne += 1
        v.append(tmp)
    for i in range(v_size):
        for j in range(v_size):
            if v[i][j] != 1:
                flag = False
                for t in range(v_size):
                    if t != j:
                        col = v[i][t]
                        for s in range(v_size):
                            if s != i:
                                row = v[s][j]
                                if col + row == v[i][j]:
                                    cnt += 1
                                    flag = True
                                    break
                    if flag:
                        break
    if cnt == notOne:
        out.write(str(1) + '\n')
    else:
        out.write(str(0) + '\n')
inp.close()
out.close()

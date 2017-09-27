inp = open('tree.inp', 'r')
out = open('tree.out', 'w')
n = int(inp.readline())
for a in range(n):
    string = inp.readline()
    out.write(string)
    string = string.split()
    tree, stack, l = ['0'], [], []
    node_cnt = 0
    for i in range(len(string) - 1):
        if string[i] == '(':
            node = 'r' + str(node_cnt)
            stack.append(node)
            tree.append(node)
            node_cnt += 1
        elif string[i] == ')':
            continue
        else:
            if string[i+1] != ')':
                t = stack.pop()
                l.append(string[i])
                l.append(t)
            else:
                if len(stack) != 0:
                    t = stack.pop()
                    l.append(string[i])
                    l.append(t)
                else:
                    l.append(string[i])
            tree.append(string[i])
    out.write("Preorder" + "\n")
    for i in range(1, len(tree)):
        out.write(tree[i] + "\n")
    out.write("Inorder" + "\n")
    for i in range(len(l)):
        out.write(l[i] + "\n")
inp.close()
out.close()
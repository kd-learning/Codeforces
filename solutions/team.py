def team_task(n):
    n_tasks = 0

    for i in range(n):
        s = input()
        if s.count("1") >= 2:
            n_tasks += 1

    return n_tasks


n = int(input())
print(team_task(n))
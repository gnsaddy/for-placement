import re
from collections import defaultdict


def process_log(col, fname, condition=None):

    log = """ """
    with open(fname, "r") as f:
        log = f.read()

    getAll = defaultdict(list)
    for m in re.finditer(r'([(\d\.)]+) - - \[(.*?)\] "(.*?)" (\d+) (\d+) "(.*?)" "(.*?)"', log):
        ip = m[1]
        dt = m[2]
        met = m[3]
        status = m[4]
        bt = m[5]
        ul = m[6]
        uls = m[7]
        getAll[ip, dt, met, status, bt]

    for k, v in getAll.items():
        ip = k[0]
        dt = k[1]
        met = k[2]
        status = k[3]
        bt = k[4]
        # if(k[int(0)] == '50.16.19.13'):
        #     print(f"{ip} {dt} {status} {bt}")
        if(col != '*' and condition == None):
            print(k[int(col)])
        elif(col == "*" and condition == None):
            print(f"{ip} {dt} {status} {bt}")
        elif(condition != None):
            if(k[int(condition[0])] == condition[1] and col == "*"):
                print(f"{ip} {dt} {status} {bt}")
            elif(k[int(condition[0])] == condition[1] and col != "*"):
                print(k[int(col)])


if __name__ == '__main__':

    # genin = input().split()
    # if(genin[0] == "SELECT"):
    #     if(genin[1] != '*'):
    #         if(genin[2] == 'FROM' and genin[3] != ''):
    #             process_log(genin[1], genin[3])
    #     else:
    #         process_log(genin[1], genin[3])
    genin = input().split()
    if(genin[0] == "SELECT"):
        if(len(genin) == 4):
            if(genin[2] == 'FROM' and genin[3] != '' or genin[3] != "WHERE"):
                process_log(genin[1], genin[3])
        elif(len(genin) == 6):
            if(genin[2] == 'FROM' and genin[4] == "WHERE" and genin[5] != ''):
                tem = genin[5].split("=")
                if(len(tem) == 2):
                    process_log(genin[1], genin[3], tem)

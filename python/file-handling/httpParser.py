import re
from collections import defaultdict


def process_log(log):
    getAll = defaultdict(list)
    for m in re.finditer(r'([(\d\.)]+) - - \[(.*?)\] "(.*?)" (\d+) (\d+) "(.*?)" "(.*?)"', log):
        ip = m[1]
        dt = m[2]
        met = m[3]
        status = m[4]
        bt = m[5]
        ul = m[6]
        uls = m[7]
        getAll[(ip, dt, met, status, bt)]
        # print(f'{ip} | [{dt}] | "{met}" | {status} | {bt} ')

    for k, v in getAll.items():
        ip = k[0]
        dt = m[1]
        met = m[2]
        status = m[3]
        bt = m[4]

        print(f"{ip} => {met} => {status} => {bt}")


log = """ """
with open("/home/addy/workspace/for-placement/python/file-handling/logs.txt", "r") as f:
    log = f.read()

process_log(log)

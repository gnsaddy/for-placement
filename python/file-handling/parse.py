import re
from collections import defaultdict


def process_log(log):
    ip_counter = defaultdict(list)
    status_counter = defaultdict(int)
    total_count = 0
    for m in re.finditer(r'(\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}) - - .*?HTTP/1.1" (\d+) (\d+)', log):
        total_count += 1
        ip = m[1]
        status = m[2]
        bytes = int(m[3])
        ip_counter[(ip, status)].append(bytes)
        print(ip_counter)

        status_counter[status] += 1
        print(status_counter)
    print("------------------------------------")
    # for k, v in ip_counter.items():
    #     count = len(v)
    #     percentage = count/total_count
    #     total_bytes = sum(v)
    #     ip = k[0]
    #     status = k[1]
    #     print(
    #         f"IP Address => {ip}, status => {status}, Count => {count}, Percentage => {percentage}, Total Bytes Transferred => {total_bytes}")
    # for k, v in status_counter.items():
    #     count = v
    #     percentage = count/total_count
    #     print(f"Status Code => {k}, Percentage => {percentage}")


log = """ """
with open("python/file-handling/logs.txt", "r") as f:
    log = f.read()

process_log(log)

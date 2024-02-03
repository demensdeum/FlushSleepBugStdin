import subprocess
import time

dotool = subprocess.Popen("dotool", stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
while True:
    time.sleep(0.5)
    dotool.stdin.write("mouseto 0.51 0.51\n".encode())
    #dotool.stdin.flush()
    dotool.stdin.write("mouseto 0.5 0.5\n".encode())
    #dotool.stdin.flush()

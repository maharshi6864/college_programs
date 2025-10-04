import time
import sys

CLEAR_LINE = "\033[2K"
class DataBase:
  def __init__(self):
    for i in range(6):
      print("\r",f"Connecting","."*(i%6), end="")
      sys.stdout.flush()
      time.sleep(0.5)
    print("\nConnected !!")

  def __del__(self):
    print("Disconnected !!")

def main():
  DataBase()

main()

# Author : InferiorAK
# Created : 31st March 2025

from platform import uname
import os

pt = list(uname())[0]
try:
    from colorama import just_fix_windows_console
except ImportError:
    print("Install colorma for better Experience")

just_fix_windows_console() if pt == "Windows" else None

def cls():
    if pt == "Linux":
        os.system("clear")
    elif pt == "Windows":
        os.system("cls")
    else:
        pass

def main():
    bal = 69.00
    while True:
        options = """\033[1;35m
        Welcome to Pookie Shop -------

        What do you want?
        1. Check your Pocket Bal
        2. Add Bal to your Pocket
        3. Want wish from Crush
        
        [Hint: Do you know, sometimes * Star makes us Rich otherwise you are all doomed?]\033[0m
        """
        print(options)

        op = int(input("Choice is Yours (1-3): "))
        if op == 1:
            print(f'\t\033[1;32mYou have only: {bal} TK\033[0m')
        elif op == 2:
            balAdd = str(input("Add Bal to your Bal: "))
            if "*" in balAdd:
                bal += eval(balAdd)
            else:
                bal = 0
        elif op == 3:
            least = 6969696969696969
            if bal >= least:
                print("\033[1;32mEid Mubarak\033[0m")
                exit()
            else:
                print("\033[1;31mI don't like a gorib like you!")
                print(f"\033[1;31mIf you want my wish, You must have atleast {least} TK!\033[0m")
                exit()

if __name__ == "__main__":
    main()
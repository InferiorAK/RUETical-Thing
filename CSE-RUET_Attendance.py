# Author  : InferiorAK
# Tool    : CSE-RUET Student Validation (Attendance)
# Created : 9th May 2024

# Made for validating students in RUET CSE 23 msngr GC members


from colorama import just_fix_windows_console
just_fix_windows_console()

w = "\033[1;36m"
err = "\033[1;31m"
suc = "\033[1;32m"
war = "\033[1;33m"
end = "\033[0m"

def filter_roll(file):
    filter = [d[:-1].split(" - ") for d in file]
    roll_data = [d[0] for d in filter]
    return roll_data

def filter_name(file):
    filter = [d[:-1].split(" - ") for d in file]
    name_data = [d[1] for d in filter]
    return name_data

file = open("0.CSE-RUET", "r").readlines()
data = [d[:-1] for d in file]
roll_main = filter_roll(file)
name_main = filter_name(file)

file2 = open("1.attendence", "r").readlines()
roll_given = filter_roll(file2)
name_given = filter_name(file2)

found = []
roll_found = []

roll = []
name = []

n = 0
for id in roll_given:
    for i in range(len(roll_main)):
        if id == roll_main[i] and name_given[n].upper() == name_main[i]:
            found.append(data[i])
        elif id == roll_main[i] and name_given[n].upper() != name_main[i]:
            roll_found.append(data[i])
            roll.append(id)
            name.append(name_given[n])
    n += 1

tpl = list(zip(roll, name))
partial = [list(i) for i in tpl]

total = found + roll_found


not_found = list(set(data) - set(total))

print("\n")

i = 1          
for ok in found:
    print(f"{w}{i:03}. {suc}{ok}{end}")
    i += 1
print("\n")

for okn in partial:
    print(f"{w}{i:03}. {suc}{okn[0]} - {war}{okn[1]}{end}")
    i += 1
print("\n")

for no in not_found:
    print(f"{w}{i:03}. {err}{no}{end}")
    i += 1
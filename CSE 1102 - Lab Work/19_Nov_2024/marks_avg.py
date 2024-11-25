# Author : InferiorAK
# Work_Done : 19 Nov 2024

x = []

for i in range(4):
    x.append(int(input()))

x = sorted(x)[::-1][0:3]
avg = sum(x) / 3
print("Average Marks: ", avg)

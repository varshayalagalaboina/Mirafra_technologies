x=[1,4,6,2,9]
def mini_max(maximum,minimum):
    for i in x:
        if i>maximum:
            maximum=i
        elif i<minimum:
            minimum=i
    print("max num",maximum)
    print("min num",minimum)

maximum=x[0]
minimum=x[0]
mini_max(maximum,minimum)
#print(minimum)
#print(maximum)



def fun(x):
    repeated=[]
    size=len(x)
    for i in range(size):
        for j in range(i,size):
            if (x[i]==x[j] and x[i] not in repeated):
                repeated.append(x[i])
    return repeated
                
print("the duplicate elements in the list are")
list=[20,20,10,10]
result=[]
result=fun(list)
print(result)

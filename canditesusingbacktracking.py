def generate(index,current_subset,ans,candites,target):
    if(target == 0):
        ans.append(current_subset.copy())   
        return
    if(target<0 or index == len(candites)):
        return
    current_subset.append(candites[index])  
    generate(index,current_subset,ans,candites,target-candites[index])
    current_subset.pop()
    generate(index+1,current_subset,ans,candites,target)   
    return ans
candites = [2,3,6,7]
target = 7
current_subset = []
ans = []
index = 0
print(generate(index,current_subset,ans,candites,target))
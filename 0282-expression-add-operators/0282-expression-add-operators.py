class Solution:
    def addOperators(self, num: str, target: int) -> List[str]:
        res=[]

        def dfs(cur_idx ,cur_res,cur_sum,prev):
            #cur_idx =current index in the string num
            #cur_res =expression built so  far(list of strings, eg->["1" ,"+","2"])
            #cur_sum =evaluated result of expression so far (total sum)
            #prev =last operand( needed for multiplication)

            if cur_idx >= len(num):#reached end of string
                if cur_sum == target:#if result matches target
                    res.append("".join(cur_res))#join into expression string
                
                return
            else:
                for i in range(cur_idx ,len(num)):
                    cur_str=num[cur_idx: i+1] #substring(current number)
                    cur_num =int(cur_str)


                    if not cur_res: #first number,no operator
                        dfs(i+1,[cur_str], cur_num ,cur_num)
                    else:
                        dfs(i+1 ,cur_res + ["+"] + [cur_str], cur_sum+cur_num,cur_num)
                        dfs(i+1 ,cur_res + ["-"] + [cur_str], cur_sum-cur_num ,-cur_num)
                        dfs(i+1 ,cur_res +["*"]+[cur_str],cur_sum - prev +cur_num *prev,cur_num* prev)
                    
                    if num[cur_idx] == '0':#prevent number with leading zero" -> "05"
                        break
                    
                
        
        dfs(0,[],0,0)

        return res


        
with open("data.txt", "r") as f:
  s = f.readlines()
  for i in range(len(s)):
    for j in range(len(s[i])):
      nums = []
      if s[i][j] != " " and s[i][j] != "\n":
        nums.append((int)(s[i][j]))
        print(nums)

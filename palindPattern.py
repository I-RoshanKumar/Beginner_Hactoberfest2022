#Program in Python
n = int(input())
for i in range(1,n+1):
	num = int(str(1)*i)
	print(" "*(n-i),num**2)
a=int(input("num"))
for i in range(a):
	if (i==0) or (i==(a-1)):
		print("  ","*"*(a-4))
	elif(i==int(a/2)):
		print(" ","*"," "*(a-7),end="*"*3)
		print(" ")
	elif(i>int(a/2)):
		print(" ","*"," "*(a-6),"*")
	elif(i<int(a/2)):
		print(" ","*")
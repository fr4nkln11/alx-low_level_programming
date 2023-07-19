for i in range(10):
	print("0", end="")
	for j in range(10):
		product = i * j

		if product < 10:
			print(f",..{product}", end="")
		else:
			print(f",.{product}", end="")
	print("\n")

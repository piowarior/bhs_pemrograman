#value_str = input("masukkan nilai")
#value = int(value_str)

value = int(input("masukkan nilai") ) 


if value >= 50:
    grade = "A"
elif value >= 80:
    grade = "B"
else:
    grade = "D"

print(F"grade = %s" % grade)

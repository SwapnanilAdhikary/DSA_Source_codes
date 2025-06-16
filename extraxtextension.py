fileName = input("Write the fileName")

file_extns = fileName.split(".")
print("the extension of the fileName " + repr(file_extns[-1]))
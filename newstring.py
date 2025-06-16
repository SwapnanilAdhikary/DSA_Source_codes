def new_string(s):
    if len(s) >= 2 and s[:2] == "is":
        return s
    return "is" + s

print(new_string("hello"))
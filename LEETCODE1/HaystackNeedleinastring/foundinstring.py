

def finder(haystack, needle):
    k = haystack.find(needle)
    return k

def main():
    haystack = "flower"
    needle = "flow"
    if finder(haystack, needle) != -1:
        print("Needle is found")
    else:
        print("Needle is not found")
def build_tag_array(provider, folder, tag, start_index, end_index):
    arr = ["{}/{}/{} {}".format(provider, folder, tag, i) for i in range(start_index, end_index)] # List comprehension with .format
    return arr

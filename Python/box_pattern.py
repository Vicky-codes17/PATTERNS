num_rows = 5
def box_pattern(rows):
    for i in range(num_rows,rows + 1):
        for j in range(rows-1):
            print("* "*i)
box_pattern(num_rows)
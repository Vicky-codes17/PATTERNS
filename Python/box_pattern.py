num_rows = 5
def right_half_pyramid(rows):
    for i in range(num_rows,rows + 1):
        for j in range(rows-1):
            print("* "*i)
right_half_pyramid(num_rows)
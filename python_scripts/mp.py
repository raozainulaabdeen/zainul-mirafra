import multiprocessing

def print_cube(x):
    print("cube of {} is {}".format(x, x*x*x))


def print_sqr(x):
    print("square of {} is {}".format(x, x*x))



if __name__ == "__main__":
    p1 = multiprocessing.process(target = print_cube, args = (10,))
    p2 = multiprocessing.process(target = print_sqr, args = (10,))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    print("Done!")


def will_it_stop(n):
    hist = []
    while n > 1:
        if n % 2 == 0:
            n /= 2
        else:
            n = 3 * n + 3

        if n in hist:
            return 'NIE'

        hist.append(n)

    return 'TAK'


if __name__ == '__main__':
    n = int(raw_input())
    print will_it_stop(n)

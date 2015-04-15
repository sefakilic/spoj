def hangover(n):
    x = 2
    num_cards = 0
    while n > 0:
        num_cards += 1
        n -= 1.0 / x
        x += 1
    return num_cards

        
if __name__ == '__main__':
    while True:
        c = float(raw_input())
        if c == 0.00:
            break
        print hangover(c), 'card(s)'

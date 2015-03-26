def candy(packets):
    num_packets = len(packets)
    total = sum(packets)

    if total % num_packets != 0:
        return -1

    avg = total / num_packets
    change = sum(packet-avg if packet > avg else 0 for packet in packets)
    return change

if __name__ == '__main__':
    while True:
        n = int(raw_input())
        if n == -1:
            break
        packets = []
        for i in xrange(n):
            packets.append(int(raw_input()))

        print candy(packets)


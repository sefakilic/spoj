def byecakes(e, f, s, m, ereq, freq, sreq, mreq):
    e_cake = e/ereq + (1 if e%ereq > 0 else 0)
    f_cake = f/freq + (1 if f%freq > 0 else 0)
    s_cake = s/sreq + (1 if s%sreq > 0 else 0)
    m_cake = m/mreq + (1 if m%mreq > 0 else 0)

    num_cakes = max((e_cake, f_cake, s_cake, m_cake))
    print num_cakes*ereq - e,
    print num_cakes*freq - f,
    print num_cakes*sreq - s,
    print num_cakes*mreq - m

if __name__ == '__main__':
    while True:
        e,f,s,m,ereq,freq,sreq,mreq = map(int, raw_input().split())
        if e==-1:
            break
        byecakes(e,f,s,m,ereq,freq,sreq,mreq)
    
    

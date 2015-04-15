a, b, c = map(int, raw_input().split())
print max(a*b + c,
          a*c + b,
          b*c + a)

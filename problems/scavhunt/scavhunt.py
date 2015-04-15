def scavhunt(routes):
    """
    count occurrences of all cities
    found two cities that occur once (start and end cities)
    mark each city as
    1 - if occurs only as start
    2 - if occurs only as end
    3 - if occurs as both
    """
    cities = {}
    for start,end in routes.items():
        cities[start] = cities.get(start, 0) + 1
        cities[end] = cities.get(end, 0) + 2


    # find start city and end city
    start = [city for city,x in cities.items() if x==1][0]
    end = [city for city,x in cities.items() if x==2][0]
    
    current_city = start
    while current_city != end:
        print current_city
        current_city = routes[current_city]
    print current_city

if __name__ == '__main__':
    n = int(raw_input())
    for i in xrange(n):
        s = int(raw_input())
        routes = {}
        for j in xrange(s-1):
            a, b = raw_input().split()
            routes[a] = b

        if i > 0: print ''
        print "Scenario #%d:" % (i+1)
        scavhunt(routes)

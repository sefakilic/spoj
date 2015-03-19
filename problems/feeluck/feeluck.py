T = int(raw_input())
for i in xrange(T):
    webpages = {} # <relevance number, list of webpages of this relevancy>
    for _ in xrange(10):
        page, rel = raw_input().split()
        rel = int(rel)
        if rel not in webpages.keys():
            webpages[rel] = []

        # add page
        webpages[rel].append(page)

    # get max relevance pages
    max_rel = max(webpages.keys())
    print 'Case #%d:' % (i+1)
    for p in webpages[max_rel]:
        print p

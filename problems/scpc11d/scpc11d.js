importPackage(java.io);
importPackage(java.lang);
 
var reader = new BufferedReader( new InputStreamReader(System['in']) );
 
while(true) {
	var line = reader.readLine();
    var xs = line.split(' ').map( function(n){ return parseInt(n, 10); } );
    xs = xs.sort(function(a, b) { return a-b; });
    if (xs[0] == 0 && xs[1] == 0 && xs[2] == 0)
        break;
    if (xs[0]*xs[0] + xs[1]*xs[1] == xs[2]*xs[2])
        print("right");
    else
        print("wrong");
}

importPackage(java.io);
importPackage(java.lang);
 
var reader = new BufferedReader( new InputStreamReader(System['in']) );
var n = parseInt(reader.readLine());
for (var i=1; i<=n; i+=1) {
    var inp = reader.readLine().split(' ');
    print(i, inp[1].slice(0, inp[0]-1) + inp[1].slice(inp[0]));
}

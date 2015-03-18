importPackage(java.io);
importPackage(java.lang);

var divsum = function(n) {
    var total = 0;
    for (var i=2; i <= Math.sqrt(n); i+=1) {
        if (n % i == 0) {
            total += i;
            if (n / i != i) {
                total += (n/i);
            }
        }
    }
    return total + 1; // include divisor 1 
};

var reader = new BufferedReader( new InputStreamReader(System['in']) );
var t = parseInt(reader.readLine());
for (var i=0; i<t; i+=1) {
    var n = parseInt(reader.readLine());
    print(divsum(n));
}






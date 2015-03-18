importPackage(java.io);
importPackage(java.lang);
 
var reader = new BufferedReader( new InputStreamReader(System['in']) );
 
a = parseInt(reader.readLine());
b = parseInt(reader.readLine());
print(a+b);

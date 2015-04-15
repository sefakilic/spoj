
while(<>) {
    $_ =~ s/BUG//g;
    print $_;
}

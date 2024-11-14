while (lookAheadBuffer not empty) {
get a reference (position, length) to longest match;
if (length > 0) {
output (position, length, next symbol);
shift the window length+1 positions along;
} else {
output (0, 0, first symbol in the lookahead buffer);
shift the window 1 character along;
}
}
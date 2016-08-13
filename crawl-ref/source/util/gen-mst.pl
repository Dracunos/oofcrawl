#!/usr/bin/env perl
use strict;
use warnings;

my @mons=();
open IN, "<mon-spell.h" or die "Can't open mon-spell.h\n";
while (<IN>)
{
    push @mons, $1 if /^\s*{\s*(MST_[A-Z_0-9]+),\s*$/;
}
die "Didn't find any MST enums.\n" unless @mons;

open OUT, ">mon-mst.h" or die;
print OUT <<END;
// Autogenerated by util/gen-mst.pl, do not edit.

enum mon_spellbook_type
{
END
print OUT "    $_,\n" for @mons;
print OUT <<END;
    MST_GHOST,
    NUM_MSTYPES,
    MST_NO_SPELLS
};
END

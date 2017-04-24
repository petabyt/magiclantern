#!/bin/bash

# Convert a set of QEMU logs to HTML format.
# Usage: ./html_logs.sh *.html

for f in $*; do
  html=html/$f.html
  html_dir=`dirname $html`
  css=`realpath --relative-to=$html_dir html/ansi.css`
  echo "$f -> $html"
  mkdir -p $html_dir
  python ansi_cleanup.py $f | ansi2html > $html
  perl -i -pe 'BEGIN{undef $/;} s/<style.*style>/<link href="'"$css"'" rel="stylesheet" type="text\/css"\/>/smg' $html
done
cp ansi.css html/

valac --vapidir=./vapi/ --pkg=posix src/Main.vala ./vapi/approxidate.vapi \
      -X -I./c_files -X ./c_files/approxidate.c \
      -X -lm -o test

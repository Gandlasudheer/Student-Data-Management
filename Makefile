CC = cc
CFLAGS = -Wall -g
TARGET = student

all: $(TARGET)

$(TARGET): stud_main.c stud_add.c stud_show.c stud_del.c stud_save.c stud_modify.c stud_sort.c delete_all.c stud_rev.c free_all.c header.h
	$(CC) $(CFLAGS) -o $(TARGET) stud_main.c stud_add.c stud_show.c stud_del.c stud_save.c stud_modify.c stud_sort.c delete_all.c stud_rev.c free_all.c

clean:
	rm -f *.o $(TARGET) a.out header.h.gch

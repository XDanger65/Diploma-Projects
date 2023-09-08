#@copyright : eslam
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -mthumb -gdwarf-2 -g
INCS=-I .
LIBS = 
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o) 
project_name = learn-in-depth-cortex-m4
all: $(project_name).bin
	@echo "=========build is done========="
%.o : %.c
	 $(CC)gcc.exe $(CFLAGS)   $(INCS) -c  $< -o $@
#startup.o :startup.s
#	 $(CC)as.exe $(CFLAGS)  $< -o $@
$(project_name).elf : $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map
	cp $(project_name).elf  $(project_name).axf
$(project_name).bin : $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@
clean_all : 
	rm *.elf *.o *.bin
clean :
	rm *elf *.bin

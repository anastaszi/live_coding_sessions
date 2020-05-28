FOLDER = small large

all:
	$(foreach dir, $(FOLDER), make -C $(dir);)
	find . -type f -perm +111 -exec cp {} . \;

clean:
	$(foreach dir, $(FOLDER), make clean -C $(dir);)
	find . -type f -perm +111 -delete

re: clean all

int f() {
	char* buf = new char[SIZE];
    if (true) {
      free(buf); //error handling has freed the buffer
    }
    log_contents(buf); //but it is still used here for logging
}

#include "main.h"

int main(int argc, char *argv[]) {
  (void)argc;
  int status;

  // child process
  if (fork() == 0)
    execvp(argv[1], argv + 1);

  wait(&status);
  return EXIT_SUCCESS;
}

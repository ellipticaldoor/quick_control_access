#include <psp2/kernel/modulemgr.h>
#include <taihen.h>

static SceUID hooks[2];

void _start() __attribute__((weak, alias("module_start")));

int module_start(SceSize args, void *argp) {
  // TODO: Print characters into the screen
  // printf("Hello world!\n");

  return SCE_KERNEL_START_SUCCESS;
}

int module_stop(SceSize args, void *argp) {
  if (hooks[1] >= 0) taiInjectRelease(hooks[1]);
  if (hooks[0] >= 0) taiInjectRelease(hooks[0]);

  return SCE_KERNEL_STOP_SUCCESS;
}

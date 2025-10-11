
void __nscd_unmap(undefined8 *param_1)

{
  if (*(int *)(param_1 + 3) == 0) {
    munmap((void *)*param_1,param_1[2]);
    free(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("mapped->counter == 0","nscd_helper.c",0xf8,"__nscd_unmap");
}


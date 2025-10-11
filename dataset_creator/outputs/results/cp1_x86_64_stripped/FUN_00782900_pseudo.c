
void FUN_00782900(undefined8 *param_1)

{
  if (*(int *)(param_1 + 3) == 0) {
    FUN_0076f080(*param_1,param_1[2]);
    FUN_007104f0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e2220("mapped->counter == 0","nscd_helper.c",0xf8,"__nscd_unmap");
}


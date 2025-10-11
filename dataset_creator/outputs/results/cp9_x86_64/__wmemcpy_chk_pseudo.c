
void __wmemcpy_chk(void *param_1,void *param_2,ulong param_3,ulong param_4)

{
  if (param_3 <= param_4) {
    memcpy(param_1,param_2,param_3 << 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __chk_fail();
}



void FUN_00789d40(ulong param_1)

{
  long lVar1;
  long local_20;
  
  FUN_0078d220(0,&local_20,0);
  lVar1 = local_20;
  FUN_0078d220(0x20,&local_20,0);
  if (lVar1 != 0) {
    lVar1 = 1;
  }
  if (param_1 <= 1U - lVar1) {
    DAT_00945848 = local_20;
    DAT_00945850 = (long)(((int)lVar1 + (int)param_1) * 0x120 + (int)local_20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_007873c0("Failed loading %lu audit modules, %lu are supported.\n",param_1);
}



void FUN_006c30d0(uint *param_1)

{
  uint uVar1;
  
  if (DAT_0093ea10 != '\0') {
    *param_1 = 0;
    return;
  }
  LOCK();
  uVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if ((uVar1 & 0x10000) == 0) {
    return;
  }
  FUN_0076efe0(0xca,param_1,1,0x7fffffff);
  return;
}


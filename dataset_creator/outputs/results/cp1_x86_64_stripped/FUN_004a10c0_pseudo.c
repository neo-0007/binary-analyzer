
void FUN_004a10c0(uint *param_1,uint param_2,long param_3)

{
  uint *local_20 [2];
  
  if (((*param_1 & 0xfffffffb) != 1) && (*(long *)(param_1 + 2) != 0)) {
    local_20[0] = param_1;
    FUN_004a6750(local_20,0,0);
    param_1 = local_20[0];
  }
  *param_1 = param_2;
  if (param_2 != 1) {
    *(long *)(param_1 + 2) = param_3;
    return;
  }
  param_1[2] = -(uint)(param_3 != 0) & 0xff;
  return;
}


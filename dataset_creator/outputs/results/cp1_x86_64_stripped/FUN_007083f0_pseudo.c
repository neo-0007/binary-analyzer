
ulong FUN_007083f0(uint *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(param_1 + 10);
  pbVar2 = *(byte **)(param_1 + 4);
  if (*(byte **)(param_1 + 4) < pbVar1) {
    *(byte **)(param_1 + 4) = pbVar1;
    pbVar2 = pbVar1;
  }
  if ((*param_1 & 0xc00) == 0xc00) {
    *(byte **)(param_1 + 2) = pbVar1;
    *param_1 = *param_1 & 0xfffff7ff;
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xc);
  }
  else {
    pbVar1 = *(byte **)(param_1 + 2);
  }
  if (pbVar1 < pbVar2) {
    return (ulong)*pbVar1;
  }
  return 0xffffffff;
}


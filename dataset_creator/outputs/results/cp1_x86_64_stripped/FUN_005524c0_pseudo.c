
void FUN_005524c0(byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
                 uint *param_6,code *param_7)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *local_50;
  
  uVar5 = 0xffffffff;
  uVar1 = *param_6;
  local_50 = param_1;
  if (-1 < (int)uVar1) {
    for (; (uVar4 = (ulong)uVar1, uVar1 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      *param_2 = *(byte *)(param_5 + uVar4) ^ *local_50;
      uVar1 = uVar1 + 1 & 0xf;
      local_50 = local_50 + 1;
      param_2 = param_2 + 1;
    }
    if (0xf < param_3) {
      lVar2 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
      pbVar3 = local_50 + lVar2;
      pbVar6 = param_2;
      do {
        (*param_7)(param_5,param_5,param_4);
        uVar1 = (uint)uVar4;
        while (uVar1 < 0x10) {
          *(ulong *)(pbVar6 + uVar4) = *(ulong *)(local_50 + uVar4) ^ *(ulong *)(param_5 + uVar4);
          uVar4 = uVar4 + 8;
          uVar1 = (uint)uVar4;
        }
        pbVar6 = pbVar6 + 0x10;
        local_50 = local_50 + 0x10;
        uVar4 = 0;
      } while (pbVar3 != local_50);
      param_2 = param_2 + lVar2;
      param_3 = (ulong)((uint)param_3 & 0xf);
      local_50 = pbVar3;
    }
    uVar5 = (uint)uVar4;
    if (param_3 != 0) {
      (*param_7)(param_5,param_5,param_4);
      do {
        uVar1 = (int)uVar4 + 1;
        param_2[uVar4] = local_50[uVar4] ^ *(byte *)(param_5 + uVar4);
        uVar4 = (ulong)uVar1;
      } while (uVar1 != uVar5 + (int)param_3);
      uVar5 = uVar5 + (int)param_3;
    }
  }
  *param_6 = uVar5;
  return;
}


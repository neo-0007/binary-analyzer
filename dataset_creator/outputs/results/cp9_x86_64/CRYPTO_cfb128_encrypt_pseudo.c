
void CRYPTO_cfb128_encrypt
               (byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
               uint *param_6,int param_7,code *param_8)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *local_50;
  
  uVar9 = 0xffffffff;
  uVar7 = *param_6;
  if (-1 < (int)uVar7) {
    uVar5 = (ulong)uVar7;
    bVar3 = param_3 != 0 && uVar7 != 0;
    if (param_7 == 0) {
      pbVar8 = param_2;
      if (bVar3) {
        do {
          bVar4 = *param_1;
          param_1 = param_1 + 1;
          pbVar6 = (byte *)(uVar5 + param_5);
          param_2 = pbVar8 + 1;
          param_3 = param_3 - 1;
          uVar7 = (int)uVar5 + 1U & 0xf;
          *pbVar8 = *pbVar6 ^ bVar4;
          uVar5 = (ulong)uVar7;
          *pbVar6 = bVar4;
          if (uVar7 == 0) break;
          pbVar8 = param_2;
        } while (param_3 != 0);
      }
      local_50 = param_1;
      if (0xf < param_3) {
        lVar1 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
        local_50 = param_1 + lVar1;
        pbVar8 = param_2;
        do {
          (*param_8)(param_5,param_5,param_4);
          uVar7 = (uint)uVar5;
          while (uVar7 < 0x10) {
            uVar2 = *(ulong *)(param_1 + uVar5);
            *(ulong *)(pbVar8 + uVar5) = *(ulong *)(param_5 + uVar5) ^ uVar2;
            *(ulong *)(param_5 + uVar5) = uVar2;
            uVar5 = uVar5 + 8;
            uVar7 = (uint)uVar5;
          }
          pbVar8 = pbVar8 + 0x10;
          param_1 = param_1 + 0x10;
          uVar5 = 0;
        } while (local_50 != param_1);
        param_3 = (ulong)((uint)param_3 & 0xf);
        param_2 = param_2 + lVar1;
      }
      uVar9 = (uint)uVar5;
      if (param_3 != 0) {
        (*param_8)(param_5,param_5,param_4);
        do {
          uVar7 = (int)uVar5 + 1;
          bVar4 = local_50[uVar5];
          param_2[uVar5] = *(byte *)(param_5 + uVar5) ^ bVar4;
          *(byte *)(param_5 + uVar5) = bVar4;
          uVar5 = (ulong)uVar7;
        } while ((int)param_3 + uVar9 != uVar7);
        uVar9 = uVar9 + (int)param_3;
      }
    }
    else {
      pbVar8 = param_1;
      pbVar6 = param_2;
      if (bVar3) {
        do {
          param_1 = pbVar8 + 1;
          param_2 = pbVar6 + 1;
          param_3 = param_3 - 1;
          bVar4 = *(byte *)(uVar5 + param_5) ^ *pbVar8;
          uVar7 = (int)uVar5 + 1U & 0xf;
          *(byte *)(uVar5 + param_5) = bVar4;
          uVar5 = (ulong)uVar7;
          *pbVar6 = bVar4;
          if (uVar7 == 0) break;
          pbVar8 = param_1;
          pbVar6 = param_2;
        } while (param_3 != 0);
      }
      local_50 = param_1;
      if (0xf < param_3) {
        lVar1 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
        local_50 = param_1 + lVar1;
        pbVar8 = param_2;
        do {
          (*param_8)(param_5,param_5,param_4);
          uVar7 = (uint)uVar5;
          while (uVar7 < 0x10) {
            uVar2 = *(ulong *)(param_5 + uVar5) ^ *(ulong *)(param_1 + uVar5);
            *(ulong *)(param_5 + uVar5) = uVar2;
            *(ulong *)(pbVar8 + uVar5) = uVar2;
            uVar5 = uVar5 + 8;
            uVar7 = (uint)uVar5;
          }
          pbVar8 = pbVar8 + 0x10;
          param_1 = param_1 + 0x10;
          uVar5 = 0;
        } while (local_50 != param_1);
        param_2 = param_2 + lVar1;
        param_3 = (ulong)((uint)param_3 & 0xf);
      }
      uVar9 = (uint)uVar5;
      if (param_3 != 0) {
        (*param_8)(param_5,param_5,param_4);
        do {
          uVar7 = (int)uVar5 + 1;
          bVar4 = local_50[uVar5] ^ *(byte *)(param_5 + uVar5);
          *(byte *)(param_5 + uVar5) = bVar4;
          param_2[uVar5] = bVar4;
          uVar5 = (ulong)uVar7;
        } while (uVar7 != (int)param_3 + uVar9);
        uVar9 = uVar9 + (int)param_3;
      }
    }
  }
  *param_6 = uVar9;
  return;
}


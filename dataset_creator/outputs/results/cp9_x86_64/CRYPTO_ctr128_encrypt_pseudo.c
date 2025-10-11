
void CRYPTO_ctr128_encrypt
               (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,byte *param_5,
               ulong *param_6,uint *param_7,code *param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong *puVar7;
  ulong *puVar8;
  bool bVar9;
  ulong *local_60;
  
  uVar5 = (ulong)*param_7;
  if ((param_3 != 0) && (puVar7 = param_2, puVar8 = param_1, *param_7 != 0)) {
    do {
      param_1 = (ulong *)((long)puVar8 + 1);
      param_2 = (ulong *)((long)puVar7 + 1);
      param_3 = param_3 - 1;
      *(byte *)puVar7 = *(byte *)((long)param_6 + uVar5) ^ (byte)*puVar8;
      uVar2 = (int)uVar5 + 1U & 0xf;
      uVar5 = (ulong)uVar2;
      if (uVar2 == 0) break;
      puVar7 = param_2;
      puVar8 = param_1;
    } while (param_3 != 0);
  }
  local_60 = param_1;
  if (0xf < param_3) {
    lVar4 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
    local_60 = (ulong *)(lVar4 + (long)param_1);
    puVar7 = param_2;
    do {
      (*param_8)(param_5,param_6,param_4);
      uVar2 = 1;
      pbVar6 = param_5 + 0xf;
      do {
        bVar1 = *pbVar6;
        *pbVar6 = (byte)(uVar2 + bVar1);
        uVar2 = uVar2 + bVar1 >> 8;
        bVar9 = param_5 != pbVar6;
        pbVar6 = pbVar6 + -1;
      } while (bVar9);
      puVar8 = param_1 + 2;
      *puVar7 = *param_1 ^ *param_6;
      puVar7[1] = param_1[1] ^ param_6[1];
      puVar7 = puVar7 + 2;
      param_1 = puVar8;
    } while (local_60 != puVar8);
    param_2 = (ulong *)((long)param_2 + lVar4);
    uVar5 = 0;
    param_3 = (ulong)((uint)param_3 & 0xf);
  }
  uVar2 = (uint)uVar5;
  if (param_3 != 0) {
    (*param_8)(param_5,param_6,param_4);
    uVar3 = 1;
    pbVar6 = param_5 + 0xf;
    do {
      bVar1 = *pbVar6;
      *pbVar6 = (byte)(uVar3 + bVar1);
      uVar3 = uVar3 + bVar1 >> 8;
      bVar9 = param_5 != pbVar6;
      pbVar6 = pbVar6 + -1;
    } while (bVar9);
    do {
      uVar3 = (int)uVar5 + 1;
      *(byte *)((long)param_2 + uVar5) =
           *(byte *)((long)local_60 + uVar5) ^ *(byte *)((long)param_6 + uVar5);
      uVar5 = (ulong)uVar3;
    } while (uVar3 != (int)param_3 + uVar2);
    uVar2 = uVar2 + (int)param_3;
  }
  *param_7 = uVar2;
  return;
}



void CRYPTO_ctr128_encrypt_ctr32
               (byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,byte *param_5,
               undefined1 (*param_6) [16],uint *param_7,code *param_8)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar5 = (ulong)*param_7;
  if ((*param_7 != 0) && (pbVar4 = param_1, pbVar6 = param_2, param_3 != 0)) {
    do {
      param_1 = pbVar4 + 1;
      param_2 = pbVar6 + 1;
      param_3 = param_3 - 1;
      *pbVar6 = (*param_6)[uVar5] ^ *pbVar4;
      uVar8 = (int)uVar5 + 1U & 0xf;
      uVar5 = (ulong)uVar8;
      if (uVar8 == 0) break;
      pbVar4 = param_1;
      pbVar6 = param_2;
    } while (param_3 != 0);
  }
  uVar8 = *(uint *)(param_5 + 0xc);
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if (0xf < param_3) {
    uVar3 = (ulong)uVar8;
    do {
      if (param_3 < 0x100000010) {
        uVar7 = param_3 >> 4;
        iVar2 = (int)uVar7;
      }
      else {
        iVar2 = 0x10000000;
        uVar7 = 0x10000000;
      }
      uVar8 = iVar2 + (int)uVar3;
      uVar3 = (ulong)uVar8;
      if (uVar3 < uVar7) {
        uVar7 = uVar7 - uVar3;
        (*param_8)(param_1,param_2,uVar7,param_4,param_5);
        param_5[0xc] = 0;
        param_5[0xd] = 0;
        param_5[0xe] = 0;
        param_5[0xf] = 0;
LAB_00423d4c:
        uVar8 = 1;
        pbVar4 = param_5 + 0xb;
        do {
          bVar1 = *pbVar4;
          *pbVar4 = (byte)(uVar8 + bVar1);
          uVar8 = uVar8 + bVar1 >> 8;
          bVar10 = param_5 != pbVar4;
          pbVar4 = pbVar4 + -1;
        } while (bVar10);
        uVar3 = 0;
      }
      else {
        (*param_8)(param_1,param_2,uVar7,param_4,param_5);
        *(uint *)(param_5 + 0xc) =
             uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
        if (uVar8 == 0) goto LAB_00423d4c;
      }
      uVar8 = (uint)uVar3;
      param_3 = param_3 + uVar7 * -0x10;
      param_2 = param_2 + uVar7 * 0x10;
      param_1 = param_1 + uVar7 * 0x10;
    } while (0xf < param_3);
  }
  uVar9 = (uint)uVar5;
  if (param_3 != 0) {
    *param_6 = (undefined1  [16])0x0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    uVar8 = uVar8 + 1;
    *(uint *)(param_5 + 0xc) =
         uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
    if (uVar8 == 0) {
      uVar8 = 1;
      pbVar4 = param_5 + 0xb;
      do {
        bVar1 = *pbVar4;
        *pbVar4 = (byte)(uVar8 + bVar1);
        uVar8 = uVar8 + bVar1 >> 8;
        bVar10 = param_5 != pbVar4;
        pbVar4 = pbVar4 + -1;
      } while (bVar10);
    }
    do {
      uVar8 = (int)uVar5 + 1;
      param_2[uVar5] = param_1[uVar5] ^ (*param_6)[uVar5];
      uVar5 = (ulong)uVar8;
    } while (uVar8 != (int)param_3 + uVar9);
    uVar9 = uVar9 + (int)param_3;
  }
  *param_7 = uVar9;
  return;
}



undefined8 FUN_007c8120(ulong param_1,ulong *param_2,undefined8 param_3,int *param_4,uint *param_5)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  ulong in_XMM0_Qb;
  
  *param_5 = (uint)(in_XMM0_Qb >> 0x3f);
  uVar4 = in_XMM0_Qb & 0xffffffffffff;
  *param_4 = ((ushort)(in_XMM0_Qb >> 0x30) & 0x7fff) - 0x3fff;
  param_2[1] = uVar4;
  *param_2 = param_1;
  if ((in_XMM0_Qb >> 0x30 & 0x7fff) != 0) {
    param_2[1] = uVar4 | 0x1000000000000;
    return 2;
  }
  if (param_1 == 0) {
    if (uVar4 == 0) {
      *param_4 = 0;
      return 2;
    }
  }
  else if (uVar4 == 0) {
    uVar4 = 0x3f;
    if (param_1 != 0) {
      for (; param_1 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    iVar5 = (int)(uVar4 ^ 0x3f);
    cVar2 = (char)(uVar4 ^ 0x3f);
    if (iVar5 < 0xf) {
      uVar4 = param_1 >> (0xfU - cVar2 & 0x3f);
      param_1 = param_1 << (cVar2 + 0x31U & 0x3f);
    }
    else {
      uVar4 = param_1 << (cVar2 - 0xfU & 0x3f);
      param_1 = 0;
    }
    *param_2 = param_1;
    param_2[1] = uVar4;
    *param_4 = -0x402f - iVar5;
    return 2;
  }
  lVar1 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar5 = ((uint)lVar1 ^ 0x3f) - 0xf;
  bVar3 = (byte)iVar5;
  *param_2 = param_1 << (bVar3 & 0x3f);
  param_2[1] = param_1 >> (0x40 - bVar3 & 0x3f) | uVar4 << (bVar3 & 0x3f);
  *param_4 = -0x3ffe - iVar5;
  return 2;
}



void FUN_004f8f70(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  lVar4 = (((long)(*param_2 + -1 + (uVar5 & 0xffffffffff)) >> 0x3f |
           (uVar1 & uVar2 & (uVar5 | 0xffffffffff)) + 1) & 0xffffffffffffff) - 1;
  lVar6 = (*param_2 - (uVar2 >> 0x38)) - (ulong)((uint)(lVar4 >> 0x3f) & 1);
  uVar7 = ~(lVar4 >> 0x3f);
  uVar3 = lVar6 >> 0x3f;
  uVar5 = (((uVar2 >> 0x38) << 0x28) + uVar5 & (uVar7 | 0xffffffffff)) + uVar3;
  param_1[1] = uVar5 & 0xffffffffffffff;
  uVar5 = (uVar1 & uVar7) + ((long)uVar5 >> 0x38);
  *param_1 = (uVar3 & 0x100000000000000) + lVar6;
  param_1[2] = uVar5 & 0xffffffffffffff;
  param_1[3] = (uVar2 & uVar7 & 0xffffffffffffff) + ((long)uVar5 >> 0x38);
  return;
}



undefined8
FUN_00489970(ulong *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
            long param_6,long param_7,int param_8)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar2 = *param_1;
  uVar3 = (ulong)(param_6 != 1) + param_7;
  if (uVar2 < uVar3) {
    return 0;
  }
  if (param_6 == 1) goto LAB_00489a88;
  bVar1 = *(byte *)(param_3 + -1 + uVar2);
  uVar8 = (ulong)bVar1;
  if (param_8 != 0) {
    *param_1 = ((uVar2 - 1) - param_7) - uVar8;
    return 1;
  }
  uVar3 = uVar3 + uVar8;
  uVar3 = (long)((uVar2 - uVar3 ^ uVar3 | uVar3 ^ uVar2) ^ uVar2) >> 0x3f;
  uVar9 = ~uVar3;
  if (uVar2 < 0x100) {
    uVar11 = uVar2;
    if (uVar2 != 0) goto LAB_00489a10;
  }
  else {
    uVar11 = 0x100;
LAB_00489a10:
    uVar6 = 0;
    uVar3 = uVar8;
    uVar7 = uVar8;
    while( true ) {
      uVar4 = uVar8 ^ uVar6;
      uVar10 = uVar7 ^ uVar6;
      uVar6 = uVar6 + 1;
      uVar9 = uVar9 & ((long)((uVar4 | uVar10) ^ uVar8) >> 0x3f |
                      ~(ulong)((uint)uVar3 ^ (uint)bVar1));
      if (uVar11 <= uVar6) break;
      uVar3 = (ulong)*(byte *)((uVar2 - uVar8) + param_3 + -1 + (uVar7 - 1));
      uVar7 = uVar7 - 1;
    }
    uVar3 = ~uVar9;
  }
  *param_1 = uVar2 - (uVar8 + 1 & (long)((uVar9 | 0xffffffffffffff00) & (uVar3 & 0xff) - 1) >> 0x3f)
  ;
LAB_00489a88:
  uVar5 = FUN_00489630(param_1,param_2,param_3,param_4,param_5);
  return uVar5;
}



int * FUN_00782f00(uint param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  uVar7 = FUN_007b0610(param_2,param_3);
  uVar4 = param_4[4];
  uVar9 = *(uint *)(*param_4 + 0x78 + ((uVar7 & 0xffffffff) % (ulong)*(uint *)(*param_4 + 0x28)) * 4
                   );
  uVar7 = uVar4 / 0x28;
  if ((uVar9 == 0xffffffff) || (uVar8 = (ulong)uVar9, uVar4 < uVar8 + 0x1c)) {
    return (int *)0x0;
  }
  lVar5 = param_4[1];
  iVar10 = 0;
  while( true ) {
    pbVar1 = (byte *)(lVar5 + uVar8);
    if ((((*pbVar1 == param_1) && (*(int *)(pbVar1 + 4) == param_3)) &&
        ((ulong)*(uint *)(pbVar1 + 8) + param_3 <= uVar4)) &&
       (iVar6 = thunk_FUN_00713570(param_2,(ulong)*(uint *)(pbVar1 + 8) + lVar5,param_3), iVar6 == 0
       )) {
      uVar8 = (ulong)*(uint *)(pbVar1 + 0x14);
      if (((uVar8 + 0x18 <= uVar4) &&
          (piVar2 = (int *)(lVar5 + uVar8), *(char *)((long)piVar2 + 0x12) != '\0')) &&
         ((*(uint *)(pbVar1 + 0x14) + *piVar2 <= uVar4 && (uVar8 + param_5 + 0x18 <= uVar4)))) {
        return piVar2;
      }
    }
    uVar3 = *(uint *)(pbVar1 + 0x10);
    if (uVar3 == uVar9) {
      return (int *)0x0;
    }
    bVar11 = uVar7 == 0;
    uVar7 = uVar7 - 1;
    if (bVar11) break;
    if (iVar10 != 0) {
      if (uVar4 < (ulong)uVar9 + 0x1c) {
        return (int *)0x0;
      }
      uVar9 = *(uint *)(lVar5 + (ulong)uVar9 + 0x10);
    }
    iVar10 = 1 - iVar10;
    if (uVar3 == 0xffffffff) {
      return (int *)0x0;
    }
    uVar8 = (ulong)uVar3;
    if (uVar4 < uVar8 + 0x1c) {
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}


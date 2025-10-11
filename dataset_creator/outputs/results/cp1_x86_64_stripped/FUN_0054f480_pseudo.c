
undefined8 FUN_0054f480(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  ulong *puVar13;
  uint local_58;
  
  puVar3 = (ulong *)(param_1 + 0x188);
  lVar1 = param_1 + 0x60;
  lVar2 = param_1 + 0x40;
  lVar7 = *(long *)(param_1 + 0x30);
  pcVar8 = *(code **)(param_1 + 0x168);
  uVar4 = lVar7 * 8;
  lVar9 = *(long *)(param_1 + 0x38);
  uVar5 = lVar9 * 8;
  uVar6 = *(uint *)(param_1 + 0x170);
  puVar13 = puVar3;
  if (uVar6 == 0) {
    if (*(int *)(param_1 + 0x174) == 0) {
      iVar12 = 0x10;
    }
    else {
      (**(code **)(param_1 + 0x160))(lVar2,lVar1);
      iVar12 = 0x10;
    }
  }
  else {
    uVar11 = uVar6 + 0xf;
    local_58 = uVar11 & 0xfffffff0;
    thunk_FUN_00713720((ulong)uVar6 + (long)puVar3,0,(uVar11 & 0xfffffff0) - uVar6);
    if (local_58 == 0x30) {
      (*pcVar8)(lVar2,lVar1,puVar3,0x30);
      iVar12 = 0x10;
    }
    else {
      iVar12 = local_58 + 0x10;
      puVar13 = (ulong *)(((ulong)uVar11 & 0xfffffff0) + (long)puVar3);
    }
  }
  puVar13[1] = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18
               | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
               (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | lVar9 << 0x3b;
  *puVar13 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
             (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
             (uVar4 & 0xff00) << 0x28 | lVar7 << 0x3b;
  (*pcVar8)(lVar2,lVar1,puVar3,iVar12);
  *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) ^ *(ulong *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x48) = *(ulong *)(param_1 + 0x48) ^ *(ulong *)(param_1 + 0x28);
  if ((param_2 != 0) && (param_3 < 0x11)) {
    uVar10 = FUN_00422820(lVar2,param_2,param_3);
    return uVar10;
  }
  return 0xffffffff;
}


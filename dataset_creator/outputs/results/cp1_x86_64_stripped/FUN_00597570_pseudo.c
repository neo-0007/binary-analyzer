
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00597570(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined *puVar10;
  long in_FS_OFFSET;
  code *local_20e8;
  undefined8 local_20e0 [18];
  undefined1 local_204d [5];
  undefined1 local_2048 [8200];
  long local_40;
  
  puVar6 = &DAT_009414b8;
  uVar9 = 1;
  puVar10 = &DAT_009414b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DAT_00941384 = 0;
  puVar7 = local_20e0;
  for (lVar5 = 0x12; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_20e8 = FUN_00597340;
  do {
    if ((0x1600UL >> (uVar9 & 0x3f) & 1) == 0) {
      FUN_006e83e0(uVar9,&local_20e8,puVar10);
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulong)uVar8;
    puVar10 = puVar10 + 0x98;
  } while (uVar8 != 0x20);
  FUN_006e8360(0x1c,0);
  uVar1 = DAT_00941398;
  DAT_00941380 = 1;
  if (param_3 == 0) {
    _DAT_009413d0 = DAT_00941410;
    _DAT_009413a0 = _DAT_009413e0;
    _DAT_009413b0 = _DAT_009413f0;
    uRam00000000009413b8 = uRam00000000009413f8;
    uRam00000000009413a8 = uRam00000000009413e8 & 0xfffffff7ffffffff;
    _DAT_009413d8 = DAT_00941418;
    _DAT_009413c0 = _DAT_00941400;
    uRam00000000009413c8 = uRam0000000000941408;
    if (DAT_00941388 == 0) goto LAB_0059769c;
    uVar3 = FUN_00702290(DAT_00941398);
    iVar2 = FUN_0076e7d0(uVar3,0,&DAT_009413a0);
    if (iVar2 != -1) goto LAB_0059769c;
    uVar8 = -(uint)(DAT_00941384 == 2);
LAB_00597778:
    FUN_007022c0(10,DAT_00941390);
    if (DAT_00941380 < 2) {
LAB_00597798:
      if (DAT_00941380 != 1) goto LAB_005977a1;
    }
    else {
      _DAT_009413d0 = DAT_00941410;
      _DAT_009413a0 = _DAT_009413e0;
      uRam00000000009413a8 = uRam00000000009413e8;
      _DAT_009413b0 = _DAT_009413f0;
      uRam00000000009413b8 = uRam00000000009413f8;
      _DAT_009413c0 = _DAT_00941400;
      uRam00000000009413c8 = uRam0000000000941408;
      _DAT_009413d8 = DAT_00941418;
      if (DAT_00941388 != 0) {
        uVar3 = FUN_00702290(DAT_00941398);
        iVar2 = FUN_0076e7d0(uVar3,0,&DAT_009413a0);
        if (iVar2 == -1) {
          uVar8 = 0;
        }
      }
    }
  }
  else {
LAB_0059769c:
    DAT_00941380 = 2;
    local_2048[0] = 0;
    lVar5 = FUN_006fd770(local_2048,0x1fff,uVar1);
    uVar1 = DAT_00941398;
    if (((lVar5 == 0) || (iVar2 = FUN_007020f0(DAT_00941398), iVar2 != 0)) ||
       (iVar2 = FUN_007021c0(uVar1), iVar2 != 0)) {
      uVar8 = 0;
    }
    else {
      puVar4 = (undefined1 *)thunk_FUN_00712710(local_2048,10);
      if (puVar4 == (undefined1 *)0x0) {
        do {
          lVar5 = FUN_006fd770(local_204d,4,uVar1);
          if (lVar5 == 0) {
            uVar8 = 0;
            goto LAB_005976e5;
          }
          lVar5 = thunk_FUN_00712710(local_204d,10);
        } while (lVar5 == 0);
      }
      else if (param_4 != 0) {
        *puVar4 = 0;
      }
      uVar8 = FUN_00597300(param_1,param_2,local_2048);
      uVar8 = ~uVar8 >> 0x1f;
    }
LAB_005976e5:
    if (DAT_00941384 == 2) {
      uVar8 = 0xffffffff;
    }
    if (param_3 == 0) goto LAB_00597778;
    if (DAT_00941380 < 2) goto LAB_00597798;
  }
  iVar2 = 1;
  do {
    if ((iVar2 - 10U & 0xfffffffd) != 0) {
      FUN_006e83e0(iVar2,puVar6,0);
    }
    iVar2 = iVar2 + 1;
    puVar6 = puVar6 + 0x98;
  } while (iVar2 != 0x20);
LAB_005977a1:
  FUN_004227b0(local_2048,0x2000);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar8;
}


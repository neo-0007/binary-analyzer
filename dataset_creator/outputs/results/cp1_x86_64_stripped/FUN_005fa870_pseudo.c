
ulong FUN_005fa870(long param_1,uint param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  undefined1 *puVar9;
  int iVar10;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_ctrl.c",0x84,"ENGINE_ctrl");
    FUN_0051f8f0(0x26,0xc0102,0);
    return 0;
  }
  iVar4 = FUN_004222c0(DAT_00941008);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x9c);
  FUN_004222e0(DAT_00941008);
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x70);
  if (iVar4 < 1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_ctrl.c",0x8d,"ENGINE_ctrl");
    FUN_0051f8f0(0x26,0x82,0);
    return 0;
  }
  if (param_2 == 10) {
    return (ulong)(UNRECOVERED_JUMPTABLE != (code *)0x0);
  }
  if (7 < param_2 - 0xb) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/engine/eng_ctrl.c",0xaf,"ENGINE_ctrl");
      FUN_0051f8f0(0x26,0x78,0);
      return 0;
    }
LAB_005fa915:
                    /* WARNING: Could not recover jumptable at 0x005fa932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5);
    return uVar5;
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_ctrl.c",0xa2,"ENGINE_ctrl");
    FUN_0051f8f0(0x26,0x78,0);
    return 0xffffffff;
  }
  if ((*(uint *)(param_1 + 0x98) & 2) != 0) goto LAB_005fa915;
  if (param_2 == 0xb) {
    puVar2 = *(uint **)(param_1 + 0x90);
    if (puVar2 == (uint *)0x0) {
      return 0;
    }
    uVar7 = *puVar2;
    if (uVar7 == 0) {
      return 0;
    }
    lVar3 = *(long *)(puVar2 + 2);
joined_r0x005fac34:
    if (lVar3 == 0) {
      return 0;
    }
    return (ulong)uVar7;
  }
  if (((param_2 & 0xfffffffd) == 0xd) || (param_2 == 0x11)) {
    if (param_4 == (undefined1 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/engine/eng_ctrl.c",0x52,"int_ctrl_helper");
      FUN_0051f8f0(0x26,0xc0102,0);
      return 0xffffffff;
    }
    if (param_2 == 0xd) {
      piVar1 = *(int **)(param_1 + 0x90);
      if (piVar1 != (int *)0x0) {
        iVar4 = *piVar1;
        iVar10 = 0;
        for (piVar8 = piVar1; (iVar4 != 0 && (*(long *)(piVar8 + 2) != 0)); piVar8 = piVar8 + 8) {
          iVar4 = thunk_FUN_00712780(*(long *)(piVar8 + 2),param_4);
          if (iVar4 == 0) {
            return (ulong)(uint)piVar1[(long)iVar10 * 8];
          }
          iVar4 = piVar8[8];
          iVar10 = iVar10 + 1;
        }
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/engine/eng_ctrl.c",0x5a,"int_ctrl_helper");
      FUN_0051f8f0(0x26,0x89,0);
      return 0xffffffff;
    }
  }
  puVar2 = *(uint **)(param_1 + 0x90);
  if (puVar2 == (uint *)0x0) {
LAB_005faaf2:
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_ctrl.c",0x65,"int_ctrl_helper");
    FUN_0051f8f0(0x26,0x8a,0);
    return 0xffffffff;
  }
  uVar7 = *puVar2;
  iVar4 = 0;
  puVar6 = puVar2;
  if (uVar7 != 0) {
    do {
      if ((*(long *)(puVar6 + 2) == 0) || ((uint)param_3 <= uVar7)) goto LAB_005fab30;
      uVar7 = puVar6[8];
      puVar6 = puVar6 + 8;
      iVar4 = iVar4 + 1;
    } while (uVar7 != 0);
    goto LAB_005faaf2;
  }
LAB_005fab30:
  if ((uint)param_3 != uVar7) goto LAB_005faaf2;
  switch(param_2) {
  case 0xc:
    uVar7 = puVar2[(long)iVar4 * 8 + 8];
    if (uVar7 == 0) {
      return 0;
    }
    lVar3 = *(long *)(puVar2 + (long)iVar4 * 8 + 10);
    goto joined_r0x005fac34;
  default:
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_ctrl.c",0x7c,"int_ctrl_helper");
    FUN_0051f8f0(0x26,0x6e,0);
    uVar5 = 0xffffffff;
    break;
  case 0xe:
    uVar5 = thunk_FUN_007129d0(*(undefined8 *)(puVar2 + (long)iVar4 * 8 + 2));
    break;
  case 0xf:
    thunk_FUN_00712800(param_4,*(undefined8 *)(puVar2 + (long)iVar4 * 8 + 2));
    uVar5 = thunk_FUN_007129d0(param_4);
    break;
  case 0x10:
    param_4 = *(undefined1 **)(puVar2 + (long)iVar4 * 8 + 4);
    if (param_4 == (undefined1 *)0x0) {
      param_4 = &DAT_0083e5c2;
    }
    goto LAB_005fab7f;
  case 0x11:
    puVar9 = *(undefined1 **)(puVar2 + (long)iVar4 * 8 + 4);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_0083e5c2;
    }
    thunk_FUN_00712800(param_4,puVar9);
LAB_005fab7f:
    uVar5 = thunk_FUN_007129d0(param_4);
    break;
  case 0x12:
    uVar5 = (ulong)puVar2[(long)iVar4 * 8 + 6];
  }
  return uVar5;
}


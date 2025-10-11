
int FUN_005294b0(undefined8 param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint *local_58;
  undefined8 *local_50;
  int local_48;
  
  lVar4 = FUN_004098f0();
  if (*(int *)(lVar4 + 500) == 0) {
    return -1;
  }
  if (*(int *)(lVar4 + 0x1f0) == 0) {
    return -1;
  }
  if (param_3 == (undefined8 *)0x0) {
    iVar1 = 0;
    if (*(int *)(lVar4 + 0x2e0) < 1) {
      iVar2 = *(int *)(lVar4 + 0x2e4);
    }
    else {
      iVar1 = FUN_004098b0(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_00552070(lVar4 + 0x1f8,lVar4 + 0x2c0,param_2,(long)*(int *)(lVar4 + 0x2e0));
      }
      else {
        iVar1 = FUN_00551e20();
      }
      if (iVar1 == 0) {
        return -1;
      }
      iVar2 = *(int *)(lVar4 + 0x2e4);
      iVar1 = *(int *)(lVar4 + 0x2e0);
      *(undefined4 *)(lVar4 + 0x2e0) = 0;
    }
    if (0 < iVar2) {
      iVar2 = FUN_00551c70(lVar4 + 0x1f8,lVar4 + 0x2d0);
      if (iVar2 == 0) {
        return -1;
      }
      *(undefined4 *)(lVar4 + 0x2e4) = 0;
    }
    iVar2 = FUN_004098b0(param_1);
    if (iVar2 == 0) {
      if (*(int *)(lVar4 + 0x2ec) < 0) {
        return -1;
      }
      iVar2 = FUN_005522d0(lVar4 + 0x1f8,lVar4 + 0x2b0);
      if (iVar2 != 0) {
        return -1;
      }
    }
    else {
      iVar2 = FUN_005523a0(lVar4 + 0x1f8,lVar4 + 0x2b0,0x10);
      if (iVar2 != 1) {
        return -1;
      }
    }
    *(undefined4 *)(lVar4 + 500) = 0;
    return iVar1;
  }
  if (param_2 == 0) {
    local_50 = (undefined8 *)(lVar4 + 0x2d0);
    local_58 = (uint *)(lVar4 + 0x2e4);
    uVar8 = *local_58;
    if (0 < (int)uVar8) goto LAB_00529546;
LAB_00529606:
    uVar6 = (ulong)((uint)param_4 & 0xf);
    if ((param_4 & 0xfffffffffffffff0) == 0) {
      iVar1 = 0;
      goto LAB_0052967e;
    }
    local_48 = 0;
    iVar1 = local_48;
    local_48 = 0;
    if (param_2 == 0) goto LAB_0052980e;
LAB_00529632:
    local_48 = iVar1;
    iVar1 = FUN_004098b0(param_1);
    lVar7 = param_4 - uVar6;
    if (iVar1 == 0) {
      iVar1 = FUN_00552070(lVar4 + 0x1f8,param_3,param_2,lVar7);
    }
    else {
      iVar1 = FUN_00551e20(lVar4 + 0x1f8,param_3,param_2,lVar7);
    }
  }
  else {
    local_50 = (undefined8 *)(lVar4 + 0x2c0);
    local_58 = (uint *)(lVar4 + 0x2e0);
    iVar1 = FUN_005358b0(*(int *)(lVar4 + 0x2e0) + param_2,param_3,param_4 & 0xffffffff);
    if (iVar1 != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/e_aes.c",0xf50,"aes_ocb_cipher");
      FUN_0051f8f0(6,0xa2,0);
      return 0;
    }
    uVar8 = *local_58;
    if ((int)uVar8 < 1) goto LAB_00529606;
LAB_00529546:
    uVar6 = (ulong)(0x10 - uVar8);
    if (param_4 < uVar6) {
      thunk_FUN_00713a50((undefined1 *)((long)(int)uVar8 + (long)local_50),param_3,param_4);
      *local_58 = *local_58 + (uint)param_4;
      return 0;
    }
    param_4 = param_4 - uVar6;
    puVar9 = (undefined8 *)((long)param_3 + uVar6);
    thunk_FUN_00713a50((undefined1 *)((long)(int)uVar8 + (long)local_50),param_3,uVar6);
    param_3 = puVar9;
    if (param_2 != 0) {
      iVar1 = FUN_004098b0(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_00552070(lVar4 + 0x1f8,local_50,param_2,0x10);
      }
      else {
        iVar1 = FUN_00551e20();
      }
      if (iVar1 == 0) {
        return -1;
      }
      local_48 = 0x10;
      param_2 = param_2 + 0x10;
      uVar6 = (ulong)((uint)param_4 & 0xf);
      *local_58 = 0;
      iVar1 = local_48;
      if ((param_4 & 0xfffffffffffffff0) == 0) {
LAB_005295d1:
        iVar1 = 0x10;
        goto LAB_0052967e;
      }
      goto LAB_00529632;
    }
    iVar1 = FUN_00551c70(lVar4 + 0x1f8,local_50,0x10);
    if (iVar1 == 0) {
      return -1;
    }
    local_48 = 0x10;
    uVar6 = (ulong)((uint)param_4 & 0xf);
    *local_58 = 0;
    if ((param_4 & 0xfffffffffffffff0) == 0) goto LAB_005295d1;
LAB_0052980e:
    lVar7 = param_4 - uVar6;
    iVar1 = FUN_00551c70(lVar4 + 0x1f8,param_3,lVar7);
  }
  if (iVar1 == 0) {
    return -1;
  }
  param_3 = (undefined8 *)((long)param_3 + lVar7);
  iVar1 = (local_48 + (int)param_4) - (int)uVar6;
LAB_0052967e:
  if (uVar6 != 0) {
    uVar8 = (uint)uVar6;
    if (uVar8 < 8) {
      if ((uVar6 & 4) == 0) {
        if ((uVar8 != 0) && (*(undefined1 *)local_50 = *(undefined1 *)param_3, (uVar6 & 2) != 0)) {
          *(undefined2 *)((long)local_50 + (uVar6 - 2)) =
               *(undefined2 *)((long)param_3 + (uVar6 - 2));
        }
      }
      else {
        *(undefined4 *)local_50 = *(undefined4 *)param_3;
        *(undefined4 *)((long)local_50 + (uVar6 - 4)) = *(undefined4 *)((long)param_3 + (uVar6 - 4))
        ;
      }
    }
    else {
      *local_50 = *param_3;
      *(undefined8 *)((long)local_50 + (uVar6 - 8)) = *(undefined8 *)((long)param_3 + (uVar6 - 8));
      lVar4 = (long)local_50 - ((ulong)(local_50 + 1) & 0xfffffffffffffff8);
      uVar3 = (int)lVar4 + uVar8 & 0xfffffff8;
      if (7 < uVar3) {
        uVar6 = 0;
        do {
          uVar5 = (int)uVar6 + 8;
          *(undefined8 *)(((ulong)(local_50 + 1) & 0xfffffffffffffff8) + uVar6) =
               *(undefined8 *)((long)param_3 + (uVar6 - lVar4));
          uVar6 = (ulong)uVar5;
        } while (uVar5 < uVar3);
      }
    }
    *local_58 = uVar8;
  }
  return iVar1;
}



long FUN_006c2af0(long param_1,long param_2,ulong *param_3,undefined4 *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_58 [3];
  int local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || ((param_2 != 0 && (param_3 == (ulong *)0x0)))) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0xfffffffd;
    }
  }
  else {
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_40 = 0;
    iVar1 = FUN_006c1b70(param_1,FUN_006b9000,local_58);
    lVar3 = local_58[0];
    if (iVar1 == 0) {
      FUN_007104f0(local_58[0]);
      if (param_4 != (undefined4 *)0x0) {
LAB_006c2c4e:
        *param_4 = 0xfffffffe;
        lVar3 = 0;
        goto LAB_006c2bc4;
      }
    }
    else if (local_40 == 0) {
      uVar4 = local_58[2];
      if (local_58[0] != 0) goto LAB_006c2b84;
      if (param_4 != (undefined4 *)0x0) {
        if (local_58[2] == 1) goto LAB_006c2c05;
        goto LAB_006c2c4e;
      }
    }
    else {
      uVar4 = 1;
      if (local_58[0] != 0) {
LAB_006c2b84:
        if (param_2 == 0) {
          if (param_3 != (ulong *)0x0) goto LAB_006c2c28;
        }
        else {
          uVar2 = thunk_FUN_007129d0(local_58[0]);
          if (uVar2 < *param_3) {
            thunk_FUN_00713a50(param_2,lVar3,uVar2 + 1);
            FUN_007104f0(lVar3);
            lVar3 = param_2;
          }
          else {
            FUN_007104f0(param_2);
LAB_006c2c28:
            *param_3 = uVar4;
          }
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 0;
        }
        goto LAB_006c2bc4;
      }
      if (param_4 != (undefined4 *)0x0) {
LAB_006c2c05:
        *param_4 = 0xffffffff;
        lVar3 = 0;
        goto LAB_006c2bc4;
      }
    }
  }
  lVar3 = 0;
LAB_006c2bc4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}


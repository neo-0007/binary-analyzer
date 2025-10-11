
undefined4
FUN_00456e70(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            code *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = -1;
  local_48 = 0;
  if (*(int *)(param_7 + 0xc) == 0) {
LAB_00456f50:
    uVar4 = 0;
  }
  else {
    if (param_5 == (code *)0x0) {
      lVar5 = FUN_00456c60(param_2,param_3,0,0xffffffff,param_6);
      if (lVar5 == 0) {
        lVar6 = 0;
        uVar4 = 0;
      }
      else {
LAB_00456f18:
        lVar6 = FUN_00456d60(lVar5,param_7);
        uVar4 = 0;
        FUN_004a2c30(lVar5);
        if (lVar6 != 0) {
          uVar4 = FUN_00557ae0(param_1,lVar6);
        }
      }
    }
    else {
      iVar3 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_48,&local_4c);
      uVar2 = local_48;
      iVar1 = local_4c;
      if (iVar3 == 0) goto LAB_00456f50;
      lVar5 = FUN_00456c60(param_2,param_3,local_48,local_4c,param_6);
      if (lVar5 != 0) goto LAB_00456f18;
      if (iVar1 == 6) {
        lVar6 = 0;
        uVar4 = 0;
        FUN_004a06b0(uVar2);
      }
      else {
        lVar6 = 0;
        uVar4 = 0;
        if (iVar1 == 0x10) {
          lVar6 = 0;
          uVar4 = 0;
          FUN_004a2270(uVar2);
        }
      }
    }
    FUN_004a9460(lVar6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


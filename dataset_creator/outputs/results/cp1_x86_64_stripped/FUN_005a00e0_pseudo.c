
undefined8 FUN_005a00e0(long *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 *local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    local_58[0] = 0;
    local_50 = 0;
    iVar2 = FUN_0059f880(lVar1);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)FUN_005a00b0(*(undefined8 *)(lVar1 + 8),param_2,param_3);
      FUN_0059f890(lVar1);
      if ((puVar4 == (undefined4 *)0x0) || (local_60 = puVar4, param_2 == 2)) {
        local_60 = local_58;
        for (iVar2 = 0; iVar3 = FUN_00436480(*(undefined8 *)(lVar1 + 0x10)), iVar2 < iVar3;
            iVar2 = iVar2 + 1) {
          uVar5 = FUN_004364a0(*(undefined8 *)(lVar1 + 0x10),iVar2);
          iVar3 = FUN_0059f990(uVar5,param_2,param_3,local_60,param_1[0x20],param_1[0x21]);
          if (iVar3 != 0) goto LAB_005a01e4;
        }
        local_60 = puVar4;
        if (puVar4 == (undefined4 *)0x0) goto LAB_005a0133;
      }
LAB_005a01e4:
      iVar2 = FUN_0059fea0(local_60);
      if (iVar2 != 0) {
        *param_4 = *local_60;
        *(undefined8 *)(param_4 + 2) = *(undefined8 *)(local_60 + 2);
        uVar5 = 1;
        goto LAB_005a0135;
      }
    }
  }
LAB_005a0133:
  uVar5 = 0;
LAB_005a0135:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}


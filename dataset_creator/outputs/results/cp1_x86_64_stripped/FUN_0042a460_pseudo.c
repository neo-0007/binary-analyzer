
undefined8 FUN_0042a460(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if (param_1 == 0) goto LAB_0042a660;
  lVar4 = 0;
  lVar2 = thunk_FUN_0041cdd0(param_2,"n");
  lVar3 = thunk_FUN_0041cdd0(param_2,&DAT_007d4faa);
  if (param_3 == 0) {
    if (lVar2 == 0) goto LAB_0042a4f4;
LAB_0042a4e1:
    iVar1 = FUN_0041dc20(lVar2,&local_58);
    if (iVar1 != 0) goto LAB_0042a4f4;
LAB_0042a610:
    lVar4 = 0;
    lVar3 = 0;
    lVar2 = 0;
  }
  else {
    lVar4 = thunk_FUN_0041cdd0(param_2,"d");
    if (lVar2 != 0) goto LAB_0042a4e1;
LAB_0042a4f4:
    if ((((lVar3 != 0) && (iVar1 = FUN_0041dc20(lVar3,&local_50), iVar1 == 0)) ||
        ((lVar4 != 0 && (iVar1 = FUN_0041dc20(lVar4,&local_48), iVar1 == 0)))) ||
       (lVar2 = local_48, iVar1 = FUN_0042bf80(param_1,local_58,local_50,local_48), iVar1 == 0))
    goto LAB_0042a610;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    if (lVar2 == 0) {
      lVar4 = 0;
      lVar3 = 0;
      lVar2 = 0;
LAB_0042a6a6:
      FUN_004360b0(lVar2);
      FUN_004360b0(lVar3);
      FUN_004360b0(lVar4);
      uVar5 = 1;
      goto LAB_0042a660;
    }
    lVar2 = FUN_00436410();
    if (lVar2 == 0) goto LAB_0042a610;
    iVar1 = FUN_0042a3b0(lVar2,param_2,&PTR_s_rsa_factor1_0093b300);
    if (iVar1 == 0) {
      lVar4 = 0;
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_00436410();
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        iVar1 = FUN_0042a3b0(lVar3,param_2,&PTR_s_rsa_exponent1_0093b2a0);
        if ((((iVar1 != 0) && (lVar4 = FUN_00436410(), lVar4 != 0)) &&
            (iVar1 = FUN_0042a3b0(lVar4,param_2,&PTR_s_rsa_coefficient1_0093b240), iVar1 != 0)) &&
           ((iVar1 = FUN_00436480(lVar2), iVar1 == 0 ||
            (iVar1 = FUN_0042c660(param_1,lVar2,lVar3,lVar4), iVar1 != 0)))) goto LAB_0042a6a6;
      }
    }
  }
  FUN_004b7fa0(local_58);
  FUN_004b7fa0(local_50);
  FUN_004b7fa0(local_48);
  FUN_00436430(lVar2,FUN_004b7fa0);
  FUN_00436430(lVar3,FUN_004b7fa0);
  FUN_00436430(lVar4,FUN_004b7fa0);
  uVar5 = 0;
LAB_0042a660:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}


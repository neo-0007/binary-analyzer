
ulong FUN_005aeb80(long param_1,ulong *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  ulong *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar8 = 0;
    goto LAB_005aebf2;
  }
  if (*(long *)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_005aed11;
    uVar5 = FUN_00518970(param_1,0x86,"DER","SubjectPublicKeyInfo",0);
    uVar6 = FUN_005c0c00();
    lVar4 = FUN_004ab550(uVar6);
    local_38 = (ulong *)0x0;
    iVar2 = FUN_00516aa0(uVar5);
    if ((lVar4 == 0) || (iVar2 == 0)) {
LAB_005aec72:
      uVar8 = 0xffffffff;
    }
    else {
      iVar2 = FUN_00517230(uVar5,lVar4);
      if (iVar2 == 0) goto LAB_005aec72;
      lVar7 = FUN_004abd40(lVar4,0x73,0,&local_38);
      if (lVar7 < 1) goto LAB_005aec72;
      uVar8 = *local_38 & 0xffffffff;
      if (param_2 != (ulong *)0x0) {
        if (*param_2 == 0) {
          *param_2 = local_38[1];
          *local_38 = 0;
          local_38[1] = 0;
        }
        else {
          lVar7 = (long)(int)*local_38;
          thunk_FUN_00713a50(*param_2,local_38[1],lVar7);
          *param_2 = *param_2 + lVar7;
        }
      }
    }
    FUN_004ab560(lVar4);
    FUN_00518590(uVar5);
    goto LAB_005aebf2;
  }
  lVar4 = FUN_005ae270();
  if (lVar4 == 0) {
LAB_005aed11:
    uVar8 = 0xffffffff;
    goto LAB_005aebf2;
  }
  pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0x28);
  if (pcVar1 == (code *)0x0) {
LAB_005aebe4:
    uVar8 = 0xffffffff;
  }
  else {
    iVar2 = (*pcVar1)(lVar4,param_1);
    if (iVar2 == 0) goto LAB_005aebe4;
    *(long *)(lVar4 + 0x10) = param_1;
    uVar3 = FUN_005ae240(lVar4,param_2);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    uVar8 = (ulong)uVar3;
  }
  FUN_005ae290(lVar4);
LAB_005aebf2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


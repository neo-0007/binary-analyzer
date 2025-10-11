
bool FUN_00456720(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_00485290(*param_1);
  lVar3 = thunk_FUN_0041cdd0(param_2,"cipher");
  lVar4 = thunk_FUN_0041cdd0(param_2,"properties");
  lVar5 = thunk_FUN_0041cdd0(param_2,"save-parameters");
  if (lVar3 != 0) {
    local_40 = 0;
    local_38 = 0;
    iVar1 = FUN_0041e4a0(lVar3,&local_40);
    if ((iVar1 == 0) || ((lVar4 != 0 && (iVar1 = FUN_0041e4a0(lVar4,&local_38), iVar1 == 0)))) {
LAB_00456848:
      bVar6 = false;
      goto LAB_00456826;
    }
    FUN_00537a40(param_1[2]);
    param_1[2] = 0;
    *(uint *)((long)param_1 + 0xc) = (uint)(local_40 != 0);
    if (local_40 != 0) {
      lVar3 = FUN_00537960(uVar2,local_40,local_38);
      param_1[2] = lVar3;
      if (lVar3 == 0) goto LAB_00456848;
    }
  }
  bVar6 = true;
  if (lVar5 != 0) {
    iVar1 = thunk_FUN_0041cf60(lVar5,param_1 + 1);
    bVar6 = iVar1 != 0;
  }
LAB_00456826:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar6;
}


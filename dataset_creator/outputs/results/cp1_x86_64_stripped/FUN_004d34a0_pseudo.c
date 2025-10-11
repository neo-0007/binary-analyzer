
undefined8 FUN_004d34a0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  local_40 = 0;
  local_38 = 0;
  if (param_1 == 0) goto LAB_004d354c;
  lVar2 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5df);
  lVar3 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5e4);
  if ((param_3 == 0) || (lVar2 == 0)) {
LAB_004d351b:
    if (lVar3 != 0) {
      iVar1 = FUN_0041dc20(lVar3,&local_38);
      if (iVar1 == 0) goto LAB_004d3570;
    }
    iVar1 = FUN_004d6060(param_1,local_38,local_40);
    if (iVar1 != 0) {
      uVar4 = 1;
      goto LAB_004d354c;
    }
  }
  else {
    iVar1 = FUN_0041dc20(lVar2,&local_40);
    if (iVar1 != 0) goto LAB_004d351b;
  }
LAB_004d3570:
  FUN_004b7f20(local_40);
  FUN_004b7fa0(local_38);
  uVar4 = 0;
LAB_004d354c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


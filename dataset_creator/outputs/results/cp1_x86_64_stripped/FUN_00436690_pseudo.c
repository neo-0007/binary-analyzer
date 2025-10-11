
undefined8 FUN_00436690(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  iVar1 = *(int *)(param_3 + 1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (iVar1 == 0) {
    uVar2 = FUN_00418710(*param_3);
    iVar1 = FUN_00418920(uVar2,param_3[2]);
    if (param_1 == 0) goto LAB_00436724;
LAB_004366cd:
    iVar1 = FUN_00425a00(param_1,iVar1,param_3[3],param_2,&local_38);
    uVar2 = local_38;
    if (iVar1 != 0) goto LAB_004366ea;
  }
  else {
    if (param_1 != 0) goto LAB_004366cd;
LAB_00436724:
    param_1 = FUN_00417730(*param_3,0xf,&DAT_008eaa30);
    if (param_1 != 0) goto LAB_004366cd;
  }
  uVar2 = 0;
LAB_004366ea:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}


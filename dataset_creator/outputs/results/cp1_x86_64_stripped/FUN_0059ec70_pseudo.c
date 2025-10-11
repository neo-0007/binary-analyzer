
undefined4 FUN_0059ec70(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined4 local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_004069d0(param_2,&DAT_007d039e);
  FUN_005ad530(param_1,0);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (lVar2 != 0) {
    iVar1 = FUN_00407440(*(undefined8 *)(param_1 + 0x18),(long)*(int *)(param_1 + 0x20),local_38,0,
                         lVar2,0);
    if (iVar1 != 0) {
      uVar3 = local_38[0];
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      goto LAB_0059ecdf;
    }
  }
  uVar3 = 0;
LAB_0059ecdf:
  FUN_00406a50(lVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


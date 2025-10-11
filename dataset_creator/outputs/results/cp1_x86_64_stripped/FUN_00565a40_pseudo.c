
undefined8 FUN_00565a40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_00417730(param_1,2,&DAT_00910af0);
  if (lVar2 != 0) {
    iVar1 = FUN_00417520(param_1);
    if (iVar1 != 0) {
      local_38[0] = param_2;
      lVar2 = FUN_00545b60(lVar2,local_38);
      FUN_00417540(param_1);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 8);
        goto LAB_00565aab;
      }
    }
  }
  uVar3 = 0;
LAB_00565aab:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


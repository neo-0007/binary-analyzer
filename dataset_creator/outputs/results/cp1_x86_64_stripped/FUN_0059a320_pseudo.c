
undefined8 FUN_0059a320(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar3 = 0x18;
  }
  else {
    uVar1 = FUN_00423da0(*(undefined8 *)(param_2 + 0x20));
    iVar2 = FUN_00424c50(uVar1,0,&local_14);
    uVar3 = 0x4c;
    if (iVar2 != 0) {
      uVar3 = FUN_00423b00(local_14);
      iVar2 = FUN_0040e680(param_1,uVar3);
      if (iVar2 == 0) {
        iVar2 = FUN_0040e680(param_1,"RSA");
        uVar3 = 0x4d;
        if ((iVar2 != 0) && (local_14 == 0x390)) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


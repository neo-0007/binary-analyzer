
undefined8 FUN_004a0be0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = thunk_FUN_00712ab0(param_1,"MASK:",5);
  if (iVar1 == 0) {
    if ((*(char *)(param_1 + 5) == '\0') ||
       (uVar2 = FUN_006e9510(param_1 + 5,&local_18,0), *local_18 != '\0')) {
LAB_004a0c1b:
      uVar2 = 0;
      goto LAB_004a0c1d;
    }
  }
  else {
    iVar1 = thunk_FUN_00712780(param_1,"nombstr");
    if (iVar1 == 0) {
      uVar2 = 0xffffffffffffd7ff;
    }
    else {
      iVar1 = thunk_FUN_00712780(param_1,&DAT_007e7b18);
      if (iVar1 == 0) {
        uVar2 = 0xfffffffffffffffb;
      }
      else {
        iVar1 = thunk_FUN_00712780(param_1,"utf8only");
        if (iVar1 == 0) {
          uVar2 = 0x2000;
        }
        else {
          iVar1 = thunk_FUN_00712780(param_1,"default");
          uVar2 = 0xffffffff;
          if (iVar1 != 0) goto LAB_004a0c1b;
        }
      }
    }
  }
  FUN_004a0bc0(uVar2);
  uVar2 = 1;
LAB_004a0c1d:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}


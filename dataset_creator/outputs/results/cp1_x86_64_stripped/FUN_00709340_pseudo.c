
undefined8 FUN_00709340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  FUN_0070a340(&DAT_0093eae0);
  iVar1 = FUN_00708fd0(FUN_00709320,&local_48);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = local_30;
  }
  FUN_0070abb0(&DAT_0093eae0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



undefined8 * FUN_00678f20(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_S_construct null not valid");
  }
  lVar2 = thunk_FUN_007129d0(lVar1);
  if (lVar1 == lVar1 + lVar2) {
    puVar3 = &DAT_009452b8;
  }
  else {
    puVar3 = (undefined1 *)FUN_00678df0(lVar1,lVar1 + lVar2,&local_21);
  }
  *param_1 = puVar3;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


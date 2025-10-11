
undefined8 * FUN_0067a190(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_2 + 0x20) == (code *)&LAB_00679040) {
    lVar1 = *(long *)(param_2[2] + 0x10);
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
  }
  else {
    (**(code **)(*param_2 + 0x20))();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



int FUN_005cced0(code *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_58 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (code *)0x0) {
    param_1 = FUN_005cced0;
  }
  iVar1 = FUN_00708dd0(param_1,local_58);
  if (iVar1 == 0) {
    uVar2 = FUN_00708e00();
    param_3 = -1;
    FUN_0051ef40(2,"dlfcn_pathbyaddr(): ",uVar2);
  }
  else {
    iVar1 = thunk_FUN_007129d0(local_58[0]);
    if (param_3 < 1) {
      param_3 = iVar1 + 1;
    }
    else {
      if (iVar1 < param_3) {
        param_3 = iVar1 + 1;
      }
      else {
        iVar1 = param_3 + -1;
      }
      thunk_FUN_00713a50(param_2,local_58[0],(long)iVar1);
      *(undefined1 *)(param_2 + iVar1) = 0;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


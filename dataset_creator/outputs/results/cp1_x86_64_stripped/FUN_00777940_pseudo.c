
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00777940(undefined8 param_1,undefined4 param_2,long param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = thunk_FUN_007a3140(param_3,"on",2);
  if (iVar1 == 0) {
    _DAT_0094ac40 = _DAT_0094ac40 | param_4;
    param_3 = param_3 + 2;
  }
  else {
    iVar1 = thunk_FUN_007a3140(param_3,"off",3);
    if (iVar1 == 0) {
      param_3 = param_3 + 3;
      _DAT_0094ac40 = _DAT_0094ac40 & ~param_4;
    }
    else {
      uVar2 = FUN_006e27f0(&DAT_0083ed80,"%s: line %d: expected `on\' or `off\', found `%s\'\n",5);
      iVar1 = FUN_006f4ae0(&local_38,uVar2,param_1,param_2,param_3);
      if (iVar1 < 0) {
        param_3 = 0;
      }
      else {
        FUN_006fcea0(0,&DAT_007e3d61,local_38);
        FUN_007104f0(local_38);
        param_3 = 0;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


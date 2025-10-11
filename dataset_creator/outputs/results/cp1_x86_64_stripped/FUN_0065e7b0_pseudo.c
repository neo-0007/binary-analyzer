
long * FUN_0065e7b0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_2 + 0x20) == FUN_00653c00) {
    lVar3 = 1;
    lVar2 = *(long *)(param_2[2] + 0x10);
    *param_1 = (long)(param_1 + 2);
    if (lVar2 != 0) {
      lVar3 = thunk_FUN_007129d0(lVar2,param_2,1);
      lVar3 = lVar2 + lVar3;
    }
    FUN_00653a90(param_1,lVar2,lVar3);
  }
  else {
    (**(code **)(*param_2 + 0x20))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


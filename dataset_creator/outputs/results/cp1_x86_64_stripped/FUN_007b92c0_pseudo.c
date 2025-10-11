
long FUN_007b92c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = DAT_0094b428;
  if (param_1 == 0) {
    lVar2 = FUN_007101b0(param_2);
    return lVar2;
  }
  if (DAT_0094b418 == param_1) {
    DAT_0094b428 = param_1;
    lVar1 = FUN_007101b0(param_2);
    if (param_1 != lVar1) {
      lVar2 = thunk_FUN_00713a50(lVar1,param_1,lVar2 - param_1);
      return lVar2;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e2220("ptr == alloc_last_block","dl-minimal-malloc.c",0x70,"__minimal_realloc");
}


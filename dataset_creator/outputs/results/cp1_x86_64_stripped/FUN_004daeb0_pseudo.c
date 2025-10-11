
long FUN_004daeb0(long *param_1,int param_2,uint param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dso/dso_lib.c",0xc3,"DSO_ctrl");
    FUN_0051f8f0(0x25,0xc0102,0);
    lVar1 = -1;
  }
  else {
    if (param_2 == 2) {
      *(uint *)((long)param_1 + 0x14) = param_3;
      return 0;
    }
    if (param_2 == 3) {
      *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | param_3;
      return 0;
    }
    if (param_2 == 1) {
      lVar1 = (long)*(int *)((long)param_1 + 0x14);
    }
    else {
      if ((*param_1 != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20), UNRECOVERED_JUMPTABLE != (code *)0x0)
         ) {
                    /* WARNING: Could not recover jumptable at 0x004daee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (*UNRECOVERED_JUMPTABLE)();
        return lVar1;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/dso/dso_lib.c",0xd7,"DSO_ctrl");
      FUN_0051f8f0(0x25,0x6c,0);
      lVar1 = -1;
    }
  }
  return lVar1;
}


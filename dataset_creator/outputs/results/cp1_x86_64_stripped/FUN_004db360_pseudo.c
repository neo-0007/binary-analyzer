
undefined8 FUN_004db360(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dso/dso_lib.c",0x102,"DSO_merge");
    FUN_0051f8f0(0x25,0xc0102,0);
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x14) & 1) == 0) &&
     ((UNRECOVERED_JUMPTABLE = (code *)param_1[6], UNRECOVERED_JUMPTABLE != (code *)0x0 ||
      (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0))))
  {
                    /* WARNING: Could not recover jumptable at 0x004db37d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


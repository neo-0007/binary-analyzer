
undefined8 FUN_004edb60(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 == 0) || (*(long **)(param_1 + 0x18) == (long *)0x0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0x17f,"EC_KEY_check_key");
    FUN_0051f8f0(0x10,0xc0102,0);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x18) + 0x150);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004edb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0x184,"EC_KEY_check_key");
    FUN_0051f8f0(0x10,0xc0101,0);
  }
  return 0;
}


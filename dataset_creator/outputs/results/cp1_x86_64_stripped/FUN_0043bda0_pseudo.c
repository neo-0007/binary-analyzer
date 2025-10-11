
undefined8 FUN_0043bda0(void)

{
  undefined8 uVar1;
  
  if (DAT_00940e60 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_00940e60)();
    return uVar1;
  }
  return 0xffffffff;
}



undefined * FUN_00623ef0(code *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_0093d5a8;
  if (param_1 == (code *)0x0) {
    param_1 = FUN_00624420;
  }
  LOCK();
  PTR_FUN_0093d5a8 = param_1;
  UNLOCK();
  return puVar1;
}


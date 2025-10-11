
undefined8 FUN_0059f920(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  if (*(code **)(lVar1 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0059f940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x58))();
    return uVar2;
  }
  if (*(code **)(lVar1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0059f951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x28))();
    return uVar2;
  }
  return 1;
}


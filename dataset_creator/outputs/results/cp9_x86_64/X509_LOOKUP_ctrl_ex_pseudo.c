
undefined8 X509_LOOKUP_ctrl_ex(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  if (*(code **)(lVar1 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0058c840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x58))();
    return uVar2;
  }
  if (*(code **)(lVar1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0058c851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x28))();
    return uVar2;
  }
  return 1;
}


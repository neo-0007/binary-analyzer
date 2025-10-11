
undefined8 FUN_0041f170(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = FUN_00420cf0();
  plVar2 = (long *)FUN_00417730(uVar1,0x12,&DAT_008de0c0);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar3 = FUN_00421d90(param_1);
  if (*plVar2 != lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0041f1ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)plVar2[9])(lVar3,param_2);
    return uVar1;
  }
  return 1;
}



undefined8
FUN_004b0250(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00417730(*param_1,0x11,&DAT_009023c0);
  if ((puVar1 != (undefined8 *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = FUN_004ab640(param_1);
                    /* WARNING: Could not recover jumptable at 0x004b02a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}


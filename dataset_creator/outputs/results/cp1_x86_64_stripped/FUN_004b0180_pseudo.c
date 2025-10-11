
undefined8 FUN_004b0180(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00417730(*param_1,0x11,&DAT_009023c0);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = FUN_004ab640(param_1);
                    /* WARNING: Could not recover jumptable at 0x004b01d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3);
    return uVar2;
  }
  return 0xffffffff;
}



long FUN_006799c0(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((char)param_1[7] != '\x01') {
    if ((char)param_1[7] == '\0') {
      FUN_0063d6f0();
    }
    if (*(code **)(*param_1 + 0x38) != FUN_0063d4f0) {
                    /* WARNING: Could not recover jumptable at 0x00679a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4);
      return lVar1;
    }
  }
  if (param_2 != param_3) {
    thunk_FUN_00713a50(param_4,param_2,param_3 - param_2);
    param_2 = param_3;
  }
  return param_2;
}


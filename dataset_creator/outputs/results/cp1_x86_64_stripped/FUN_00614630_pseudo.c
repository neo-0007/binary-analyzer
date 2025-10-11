
void FUN_00614630(undefined8 param_1,int param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    FUN_006143c0(0x38e,param_1,param_3 | 8);
    return;
  }
  iVar1 = FUN_006145c0(param_2);
  if (-1 < iVar1) {
    lVar2 = FUN_00614580(iVar1);
                    /* WARNING: Could not recover jumptable at 0x00614669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))(lVar2,param_1,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0061467d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_0093d240)(param_2,param_1,param_3);
  return;
}


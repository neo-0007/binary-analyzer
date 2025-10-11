
void FUN_00706d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  if (lVar1 - 0x93f160U < 0x828) {
                    /* WARNING: Could not recover jumptable at 0x00706d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x40))();
    return;
  }
  FUN_00703130();
                    /* WARNING: Could not recover jumptable at 0x00706d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x40))(param_1,param_2,param_3);
  return;
}


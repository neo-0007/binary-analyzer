
void FUN_00422bf0(int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 != *param_2) {
    return;
  }
  if (DAT_0093fd18 != 0) {
    iVar1 = FUN_00436480();
    if (*param_1 < iVar1) {
      lVar2 = FUN_004364a0(DAT_0093fd18);
                    /* WARNING: Could not recover jumptable at 0x00422c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return;
    }
  }
  FUN_0041c9c0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
  return;
}


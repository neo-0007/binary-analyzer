
void FUN_00474480(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  FUN_0041c0b0(param_1[3],param_1[4],"../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x62)
  ;
  FUN_0041ad60(param_1[8],"../providers/implementations/keymgmt/mac_legacy_kmgmt.c",99);
  FUN_0043c400(param_1 + 5);
  FUN_00422300(*param_1);
  FUN_0041ad60(param_1,"../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x66);
  return;
}


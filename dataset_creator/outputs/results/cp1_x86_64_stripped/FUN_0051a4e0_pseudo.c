
undefined8 FUN_0051a4e0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  piVar1 = (int *)(param_1 + 0x9c);
  if (param_2 == 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar2 = iVar2 + -1;
  }
  else {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) goto LAB_0051a531;
  }
  if (0 < iVar2) {
    return 1;
  }
LAB_0051a531:
  FUN_0051d580(param_1);
  FUN_0051c780(param_1);
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    (**(code **)(param_1 + 0x58))(param_1);
  }
  FUN_0051aa90(param_1,param_2);
  FUN_00419990(10,param_1,param_1 + 0xa8);
  FUN_0041ad60(param_1,"../crypto/engine/eng_lib.c",0x60);
  return 1;
}


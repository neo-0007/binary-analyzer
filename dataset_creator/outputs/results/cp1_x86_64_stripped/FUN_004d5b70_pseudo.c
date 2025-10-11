
void FUN_004d5b70(long param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x90);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (pcVar3 = *(code **)(*(long *)(param_1 + 0xb8) + 0x28), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1);
  }
  FUN_0051a270(*(undefined8 *)(param_1 + 0xa8));
  FUN_00419990(6,param_1,param_1 + 0x98);
  FUN_00422300(*(undefined8 *)(param_1 + 0xc0));
  FUN_00541f50(param_1 + 8);
  FUN_004b7f20(*(undefined8 *)(param_1 + 0x70));
  FUN_004b7f20(*(undefined8 *)(param_1 + 0x78));
  FUN_0041ad60(param_1,"../crypto/dh/dh_lib.c",0x9e);
  return;
}


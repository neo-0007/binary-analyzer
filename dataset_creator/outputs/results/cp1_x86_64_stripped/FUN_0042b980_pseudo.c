
void FUN_0042b980(long param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xa0);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x40), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1);
  }
  FUN_0051a270(*(undefined8 *)(param_1 + 0x20));
  FUN_00419990(9,param_1,param_1 + 0x90);
  FUN_00422300(*(undefined8 *)(param_1 + 0xd0));
  FUN_004b7fa0(*(undefined8 *)(param_1 + 0x28));
  FUN_004b7fa0(*(undefined8 *)(param_1 + 0x30));
  FUN_004b7f20(*(undefined8 *)(param_1 + 0x38));
  FUN_004b7f20(*(undefined8 *)(param_1 + 0x40));
  FUN_004b7f20(*(undefined8 *)(param_1 + 0x48));
  FUN_004b7f20(*(undefined8 *)(param_1 + 0x50));
  FUN_004b7f20(*(undefined8 *)(param_1 + 0x58));
  FUN_004b7f20(*(undefined8 *)(param_1 + 0x60));
  FUN_0056a4a0(*(undefined8 *)(param_1 + 0x80));
  FUN_00436430(*(undefined8 *)(param_1 + 0x88),FUN_0042d3f0);
  FUN_004b1980(*(undefined8 *)(param_1 + 0xc0));
  FUN_004b1980(*(undefined8 *)(param_1 + 200));
  FUN_0041ad60(param_1,"../crypto/rsa/rsa_lib.c",0xb1);
  return;
}


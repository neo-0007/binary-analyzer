
void FUN_0059fc90(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x90);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar5 != 1) && (0 < iVar5 + -1)) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  iVar5 = 0;
  while( true ) {
    iVar3 = FUN_00436480(uVar2);
    if (iVar3 <= iVar5) break;
    uVar4 = FUN_004364a0(uVar2,iVar5);
    FUN_0059f8e0(uVar4);
    FUN_0059f830(uVar4);
    iVar5 = iVar5 + 1;
  }
  FUN_004360b0(uVar2);
  FUN_00436430(*(undefined8 *)(param_1 + 8),FUN_0059f740);
  FUN_00419990(4,param_1,param_1 + 0x80);
  FUN_005a8ad0(*(undefined8 *)(param_1 + 0x18));
  FUN_00422300(*(undefined8 *)(param_1 + 0x98));
  FUN_0041ad60(param_1,"../crypto/x509/x509_lu.c",0xf9);
  return;
}



void FUN_0040f4f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  LOCK();
  piVar1 = param_1 + 0xc;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  FUN_0053d300(param_1,1);
  FUN_0040eda0(param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0053e7e0(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x1a));
    FUN_0053e0f0(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
  }
  *param_1 = 0;
  FUN_00419990(0x11,param_1,param_1 + 0x14);
  FUN_00422300(*(undefined8 *)(param_1 + 0xe));
  FUN_00436430(*(undefined8 *)(param_1 + 0x10),FUN_00438680);
  FUN_0041ad60(param_1,"../crypto/evp/p_lib.c",0x6f0);
  return;
}


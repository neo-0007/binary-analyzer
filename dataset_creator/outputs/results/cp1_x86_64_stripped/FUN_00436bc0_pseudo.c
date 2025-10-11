
void FUN_00436bc0(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x80);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 != 1) && (0 < iVar2 + -1)) {
      return;
    }
    FUN_00420d40(*(undefined8 *)(param_1 + 0x60));
    FUN_00422300(*(undefined8 *)(param_1 + 0x88));
  }
  FUN_0041ad60(param_1,"../crypto/store/store_meth.c",0x26);
  return;
}



bool FUN_004dad70(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return 0 < iVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/dso/dso_lib.c",0x61,"DSO_up_ref");
  FUN_0051f8f0(0x25,0xc0102,0);
  return false;
}


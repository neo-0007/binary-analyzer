
bool FUN_00512830(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecx_meth.c",0x2dc,"validate_ecx_derive");
    FUN_0051f8f0(0x10,0x8c,0);
    return false;
  }
  lVar1 = FUN_00410840();
  lVar2 = FUN_00410840(*(undefined8 *)(param_1 + 0x90));
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x50) != 0)) {
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecx_meth.c",0x2e6,"validate_ecx_derive");
      FUN_0051f8f0(0x10,0x85,0);
    }
    else {
      *param_2 = *(long *)(lVar1 + 0x50);
      *param_3 = lVar2 + 0x11;
    }
    return lVar2 != 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecx_meth.c",0x2e2,"validate_ecx_derive");
  FUN_0051f8f0(0x10,0x7b,0);
  return false;
}


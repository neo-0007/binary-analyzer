
bool FUN_005b1e50(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0x40) {
    if (param_3 < 0x41) {
      if ((param_3 - 0x10U & 0xffffffef) == 0) {
        return true;
      }
      goto LAB_005b1e70;
    }
    if (param_3 != 0x1000) {
      if (param_3 < 0x1001) {
        if ((param_3 - 0x200U & 0xfffffdff) != 0) goto LAB_005b1e70;
      }
      else if (param_3 != 0x2000) {
LAB_005b1e70:
        FUN_0051f420();
        FUN_0051f540("../providers/common/securitycheck.c",0x37,"ossl_rsa_check_key");
        FUN_0051f8f0(0x39,0xc0103,"invalid operation: %d",param_3);
        return false;
      }
    }
  }
  iVar1 = FUN_0042c5e0(param_2,0xf000);
  if (iVar1 == 0x1000) {
    FUN_0051f420();
    FUN_0051f540("../providers/common/securitycheck.c",0x30,"ossl_rsa_check_key");
    FUN_0051f8f0(0x39,0xb2,"operation: %d",param_3);
  }
  return iVar1 != 0x1000;
}


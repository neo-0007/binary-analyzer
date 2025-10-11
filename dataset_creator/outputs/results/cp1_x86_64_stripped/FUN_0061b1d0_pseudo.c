
long FUN_0061b1d0(long *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    lVar2 = FUN_004a7670();
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_004a1fa0(lVar2,*param_2,param_3 & 0xffffffff);
      if (iVar1 != 0) {
        *param_2 = *param_2 + param_3;
        return lVar2;
      }
    }
  }
  else {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      lVar2 = FUN_004a7670();
      if (lVar2 != 0) goto LAB_0061b1f8;
    }
    else {
LAB_0061b1f8:
      iVar1 = thunk_FUN_004a1fa0(lVar2,*param_2,param_3 & 0xffffffff);
      if (iVar1 != 0) {
        *param_2 = param_3 + *param_2;
        *param_1 = lVar2;
        return lVar2;
      }
    }
    if (*param_1 == lVar2) goto LAB_0061b246;
  }
  thunk_FUN_004a2270(lVar2);
LAB_0061b246:
  FUN_0051f420();
  FUN_0051f540("../crypto/ocsp/v3_ocsp.c",0xce,"d2i_ocsp_nonce");
  FUN_0051f8f0(0x27,0xc0100,0);
  return 0;
}


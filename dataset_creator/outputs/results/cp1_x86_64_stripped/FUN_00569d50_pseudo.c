
undefined8 FUN_00569d50(void)

{
  long lVar1;
  undefined8 uVar2;
  int *in_RCX;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_0042b1b0();
  if ((int)uVar2 != 0) {
    if ((in_RCX == (int *)0x0) || (-1 < *in_RCX)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_ameth.c",0x246,"rsa_pss_verify_param");
      FUN_0051f8f0(4,0x8b,0);
      uVar2 = 0;
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_ameth.c",0x23e,"rsa_pss_verify_param");
      FUN_0051f8f0(4,0x96,0);
      uVar2 = 0;
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}


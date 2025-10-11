
int FUN_004ac6c0(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 != 0) {
    iVar1 = FUN_004ac070();
    if (iVar1 < 1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_lib.c",0x379,"BIO_wait");
      FUN_0051f8f0(0x20,(iVar1 == 0) + 'h',0);
      return iVar1;
    }
  }
  return iVar1;
}



long FUN_004ac3f0(long param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",0x2bf,"BIO_find_type");
    FUN_0051f8f0(0x20,0xc0102,0);
    param_1 = 0;
  }
  else {
    do {
      if (*(uint **)(param_1 + 8) != (uint *)0x0) {
        uVar1 = **(uint **)(param_1 + 8);
        if ((param_2 & 0xff) == 0) {
          if ((param_2 & uVar1) != 0) {
            return param_1;
          }
        }
        else if (param_2 == uVar1) {
          return param_1;
        }
      }
      param_1 = *(long *)(param_1 + 0x48);
    } while (param_1 != 0);
  }
  return param_1;
}


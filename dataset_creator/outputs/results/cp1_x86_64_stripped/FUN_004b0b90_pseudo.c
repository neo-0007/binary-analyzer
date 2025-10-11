
long FUN_004b0b90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  
  lVar1 = thunk_FUN_006fda20();
  lVar2 = thunk_FUN_00712710(param_2,0x62);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bss_file.c",0x43,"BIO_new_file");
    puVar5 = (uint *)FUN_006d2700();
    FUN_0051f8f0(2,*puVar5,"calling fopen(%s, %s)",param_1,param_2);
    if ((*puVar5 & 0xfffffffb) == 2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bss_file.c",0x4b,"BIO_new_file");
      lVar4 = 0;
      FUN_0051f8f0(0x20,0x80,0);
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bss_file.c",0x4d,"BIO_new_file");
      lVar4 = 0;
      FUN_0051f8f0(0x20,0x80002,0);
    }
  }
  else {
    uVar3 = FUN_004b0b80();
    lVar4 = FUN_004ab550(uVar3);
    if (lVar4 == 0) {
      FUN_006fd190(lVar1);
    }
    else {
      FUN_004ab6c0(lVar4,0);
      FUN_004abd40(lVar4,0x6a,(-(lVar2 == 0) & 0x10U) + 1,lVar1);
    }
  }
  return lVar4;
}



long FUN_0061e270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  iVar1 = FUN_00436480(param_3);
  lVar2 = FUN_004363b0(0,iVar1);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_extku.c",0x52,"v2i_EXTENDED_KEY_USAGE");
    FUN_0051f8f0(0x22,0xc0100,0);
    FUN_004360b0(0);
  }
  else {
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        lVar3 = FUN_004364a0(param_3,iVar4);
        lVar5 = *(long *)(lVar3 + 0x10);
        if (lVar5 == 0) {
          lVar5 = *(long *)(lVar3 + 8);
        }
        lVar3 = FUN_00424530(lVar5,0);
        if (lVar3 == 0) {
          FUN_00436430(lVar2,FUN_004a06b0);
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_extku.c",0x5f,"v2i_EXTENDED_KEY_USAGE");
          FUN_0051f8f0(0x22,0x6e,&DAT_007e3d61,lVar5);
          return 0;
        }
        iVar4 = iVar4 + 1;
        FUN_00435f80(lVar2,lVar3);
      } while (iVar1 != iVar4);
    }
  }
  return lVar2;
}


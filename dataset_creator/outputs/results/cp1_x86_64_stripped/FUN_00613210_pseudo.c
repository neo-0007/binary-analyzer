
long FUN_00613210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = FUN_00436480(param_3);
  lVar2 = FUN_004363b0(0,iVar1);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x1e5,"v2i_GENERAL_NAMES");
    FUN_0051f8f0(0x22,0xc0100,0);
    FUN_004360b0(0);
  }
  else {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = FUN_004364a0(param_3,iVar5);
        lVar4 = FUN_00612de0(param_1,param_2,uVar3);
        if (lVar4 == 0) {
          FUN_00436430(lVar2,FUN_0060e6f0);
          return 0;
        }
        iVar5 = iVar5 + 1;
        FUN_00435f80(lVar2,lVar4);
      } while (iVar1 != iVar5);
    }
  }
  return lVar2;
}



undefined4 FUN_005184a0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    FUN_0051f420();
    uVar6 = 0;
    FUN_0051f540("../crypto/encode_decode/encoder_meth.c",0x282,"OSSL_ENCODER_CTX_set_params");
    FUN_0051f8f0(0x3b,0xc0102,0);
  }
  else {
    uVar6 = 1;
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar1 = FUN_00516aa0();
      if ((long)iVar1 != 0) {
        uVar7 = 0;
        do {
          uVar3 = FUN_004364a0(*(undefined8 *)(param_1 + 0x18),uVar7 & 0xffffffff);
          lVar4 = FUN_00516bf0(uVar3);
          lVar5 = FUN_00516c10(uVar3);
          if ((lVar5 != 0) && (*(code **)(lVar4 + 0x58) != (code *)0x0)) {
            iVar2 = (**(code **)(lVar4 + 0x58))(lVar5,param_2);
            if (iVar2 == 0) {
              uVar6 = 0;
            }
          }
          uVar7 = uVar7 + 1;
        } while ((long)iVar1 != uVar7);
      }
    }
  }
  return uVar6;
}



undefined8 FUN_00516770(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/encoder_lib.c",0x120,"OSSL_ENCODER_CTX_add_encoder");
    FUN_0051f8f0(0x3b,0xc0102,0);
    return 0;
  }
  uVar2 = FUN_00518090(param_2);
  uVar2 = thunk_FUN_00420cb0(uVar2);
  lVar3 = (**(code **)(param_2 + 0x38))(uVar2);
  if (lVar3 == 0) {
    FUN_00516710(0);
    return 0;
  }
  plVar4 = (long *)FUN_0041aec0(0x20,"../crypto/encode_decode/encoder_lib.c",0xc4);
  if (plVar4 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/encoder_lib.c",0xc5,"ossl_encoder_instance_new");
    FUN_0051f8f0(0x3b,0xc0100,0);
  }
  else {
    iVar1 = FUN_00517500(param_2);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/encode_decode/encoder_lib.c",0xca,"ossl_encoder_instance_new");
      FUN_0051f8f0(0x3b,0xc0103,0);
    }
    else {
      uVar2 = FUN_00518090(param_2);
      uVar2 = FUN_00420cf0(uVar2);
      lVar5 = FUN_00518140(param_2);
      if (lVar5 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/encode_decode/encoder_lib.c",0xd2,"ossl_encoder_instance_new");
        uVar2 = FUN_005181e0(param_2);
        FUN_0051f8f0(0x3c,0x8010e,"there are no property definitions with encoder %s",uVar2);
      }
      else {
        uVar6 = FUN_00427ac0(lVar5,uVar2,"output");
        lVar7 = FUN_00427b50(uVar2,uVar6);
        plVar4[2] = lVar7;
        if (lVar7 != 0) {
          lVar5 = FUN_00427ac0(lVar5,uVar2,"structure");
          if (lVar5 != 0) {
            lVar5 = FUN_00427b50(uVar2,lVar5);
            plVar4[3] = lVar5;
          }
          lVar5 = *(long *)(param_1 + 0x18);
          *plVar4 = param_2;
          plVar4[1] = lVar3;
          if (lVar5 == 0) {
            lVar5 = FUN_00436410();
            *(long *)(param_1 + 0x18) = lVar5;
            if (lVar5 == 0) {
              FUN_0051f420(0);
              FUN_0051f540("../crypto/encode_decode/encoder_lib.c",0x106,
                           "ossl_encoder_ctx_add_encoder_inst");
              FUN_0051f8f0(0x3b,0xc0100,0);
              goto LAB_00516939;
            }
          }
          iVar1 = FUN_00435f80(lVar5,plVar4);
          if (0 < iVar1) {
            return 1;
          }
LAB_00516939:
          FUN_00516710(plVar4);
          return 0;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/encode_decode/encoder_lib.c",0xdc,"ossl_encoder_instance_new");
        uVar2 = FUN_005180e0(param_2);
        uVar6 = FUN_005181e0(param_2);
        FUN_0051f8f0(0x3c,0x8010e,
                     "the mandatory \'output\' property is missing for encoder %s (properties: %s)",
                     uVar6,uVar2);
      }
    }
    FUN_00516710(plVar4);
  }
  FUN_00516710(0);
  (**(code **)(param_2 + 0x40))(lVar3);
  return 0;
}


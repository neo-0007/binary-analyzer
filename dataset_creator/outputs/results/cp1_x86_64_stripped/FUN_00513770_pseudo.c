
long * FUN_00513770(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0xde,"ossl_decoder_instance_new");
    FUN_0051f8f0(0x3c,0xc0102,0);
  }
  else {
    plVar2 = (long *)FUN_0041aec0(0x28,"../crypto/encode_decode/decoder_lib.c",0xe2);
    if (plVar2 == (long *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0xe3,"ossl_decoder_instance_new");
      FUN_0051f8f0(0x3c,0xc0100,0);
    }
    else {
      iVar1 = FUN_00514b90(param_1);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0xe7,"ossl_decoder_instance_new");
        FUN_0051f8f0(0x3c,0xc0103,0);
      }
      else {
        uVar3 = FUN_00515780(param_1);
        uVar3 = FUN_00420cf0(uVar3);
        lVar4 = FUN_00515830(param_1);
        if (lVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0xef,"ossl_decoder_instance_new");
          uVar3 = FUN_005158d0(param_1);
          FUN_0051f8f0(0x3c,0x8010e,"there are no property definitions with decoder %s",uVar3);
        }
        else {
          uVar5 = FUN_00427ac0(lVar4,uVar3,"input");
          lVar6 = FUN_00427b50(uVar3,uVar5);
          plVar2[2] = lVar6;
          if (lVar6 != 0) {
            lVar4 = FUN_00427ac0(lVar4,uVar3,"structure");
            if (lVar4 != 0) {
              lVar4 = FUN_00427b50(uVar3,lVar4);
              plVar2[3] = lVar4;
            }
            *plVar2 = param_1;
            plVar2[1] = param_2;
            return plVar2;
          }
          FUN_0051f420();
          FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0xf9,"ossl_decoder_instance_new");
          uVar3 = FUN_005157d0(param_1);
          uVar5 = FUN_005158d0(param_1);
          FUN_0051f8f0(0x3c,0x8010e,
                       "the mandatory \'input\' property is missing for decoder %s (properties: %s)"
                       ,uVar5,uVar3);
        }
      }
      FUN_00513710(plVar2);
    }
  }
  return (long *)0x0;
}


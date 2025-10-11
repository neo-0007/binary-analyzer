
uint FUN_00460e40(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                 long param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  uint uVar5;
  
  if (param_4 != 0) {
LAB_00460e7a:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x51f,
                 "dsa_to_type_specific_der_encode");
    FUN_0051f8f0(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    uVar5 = param_5 & 2;
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x84) == 0) goto LAB_00460e7a;
      if (param_3 != 0) {
        lVar2 = FUN_0043bf50(*param_1);
        if (lVar2 != 0) {
          uVar5 = FUN_004576e0(lVar2,param_3,0x74,"DSA PARAMETERS",0,FUN_004d7bf0,param_1);
        }
        FUN_004ab560(lVar2);
        return uVar5;
      }
LAB_00461000:
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                   "key2any_encode");
      FUN_0051f8f0(0x39,0xc0102,0);
      return 0;
    }
    if (param_3 == 0) goto LAB_00461000;
    lVar2 = FUN_0043bf50(*param_1);
    if ((lVar2 == 0) ||
       ((param_6 != 0 && (iVar1 = FUN_00549540(param_1 + 3,param_6,param_7), iVar1 == 0))))
    goto LAB_00460ff8;
    pcVar4 = FUN_004d7c10;
    pcVar3 = "DSA PUBLIC KEY";
  }
  else {
    if (param_3 == 0) goto LAB_00461000;
    lVar2 = FUN_0043bf50(*param_1);
    if ((lVar2 == 0) ||
       ((param_6 != 0 && (iVar1 = FUN_00549540(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
LAB_00460ff8:
      uVar5 = 0;
      goto LAB_00460fde;
    }
    pcVar4 = FUN_004d7bd0;
    pcVar3 = "DSA PRIVATE KEY";
  }
  uVar5 = FUN_004576e0(lVar2,param_3,0x74,pcVar3,FUN_00459550,pcVar4,param_1);
LAB_00460fde:
  FUN_004ab560(lVar2);
  return uVar5;
}


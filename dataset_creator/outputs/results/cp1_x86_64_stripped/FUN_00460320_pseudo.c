
uint FUN_00460320(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                 long param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  
  if (param_4 != 0) {
LAB_0046034f:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x5a3,
                 "ec_to_EC_der_encode");
    FUN_0051f8f0(0x39,0x80106,0);
    return 0;
  }
  uVar6 = param_5 & 1;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_0046034f;
    if (param_3 == 0) goto LAB_00460450;
    lVar2 = FUN_0043bf50(*param_1);
    if (lVar2 == 0) goto LAB_004603d4;
    pcVar5 = FUN_004ea7e0;
    pcVar4 = (code *)0x0;
    pcVar3 = "EC PARAMETERS";
  }
  else {
    if (param_3 == 0) {
LAB_00460450:
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                   "key2any_encode");
      FUN_0051f8f0(0x39,0xc0102,0);
      return 0;
    }
    lVar2 = FUN_0043bf50(*param_1);
    if ((lVar2 == 0) ||
       ((param_6 != 0 && (iVar1 = FUN_00549540(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
      uVar6 = 0;
      goto LAB_004603d4;
    }
    pcVar5 = FUN_004ea4a0;
    pcVar4 = FUN_00456a40;
    pcVar3 = "EC PRIVATE KEY";
  }
  uVar6 = FUN_004576e0(lVar2,param_3,0x198,pcVar3,pcVar4,pcVar5,param_1);
LAB_004603d4:
  FUN_004ab560(lVar2);
  return uVar6;
}


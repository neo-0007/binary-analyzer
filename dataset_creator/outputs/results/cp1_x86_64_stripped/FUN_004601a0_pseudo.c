
uint FUN_004601a0(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                 long param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  
  if (param_4 != 0) {
LAB_004601cf:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x5a6,
                 "sm2_to_SM2_der_encode");
    FUN_0051f8f0(0x39,0x80106,0);
    return 0;
  }
  uVar6 = param_5 & 1;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_004601cf;
    if (param_3 == 0) goto LAB_004602d0;
    lVar2 = FUN_0043bf50(*param_1);
    if (lVar2 == 0) goto LAB_00460254;
    pcVar5 = FUN_004ea7e0;
    pcVar4 = (code *)0x0;
    pcVar3 = "SM2 PARAMETERS";
  }
  else {
    if (param_3 == 0) {
LAB_004602d0:
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
      goto LAB_00460254;
    }
    pcVar5 = FUN_004ea4a0;
    pcVar4 = FUN_00456a40;
    pcVar3 = "SM2 PRIVATE KEY";
  }
  uVar6 = FUN_004576e0(lVar2,param_3,0x494,pcVar3,pcVar4,pcVar5,param_1);
LAB_00460254:
  FUN_004ab560(lVar2);
  return uVar6;
}



bool FUN_00460960(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,byte param_5,
                 long param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  
  if (param_4 != 0) {
LAB_0046098f:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x535,
                 "ec_to_type_specific_no_pub_pem_encode");
    FUN_0051f8f0(0x39,0x80106,0);
    return false;
  }
  bVar6 = (bool)(param_5 & 1);
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_0046098f;
    if (param_3 == 0) goto LAB_00460ab0;
    lVar2 = FUN_0043bf50(*param_1);
    if (lVar2 == 0) goto LAB_00460a20;
    puVar8 = (undefined8 *)0x0;
    pcVar4 = FUN_004ea7e0;
    pcVar3 = "EC PARAMETERS";
    uVar5 = param_1[2];
    puVar7 = (undefined *)0x0;
  }
  else {
    if (param_3 == 0) {
LAB_00460ab0:
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                   "key2any_encode");
      FUN_0051f8f0(0x39,0xc0102,0);
      return false;
    }
    lVar2 = FUN_0043bf50(*param_1);
    if ((lVar2 == 0) ||
       ((puVar8 = param_1 + 3, param_6 != 0 &&
        (iVar1 = FUN_00549540(puVar8,param_6,param_7), iVar1 == 0)))) {
      bVar6 = false;
      goto LAB_00460a20;
    }
    uVar5 = param_1[2];
    pcVar4 = FUN_004ea4a0;
    pcVar3 = "EC PRIVATE KEY";
    puVar7 = PTR_FUN_0093af08;
  }
  iVar1 = FUN_00555e60(pcVar4,pcVar3,lVar2,param_3,uVar5,0,0,puVar7,puVar8);
  bVar6 = 0 < iVar1;
LAB_00460a20:
  FUN_004ab560(lVar2);
  return bVar6;
}


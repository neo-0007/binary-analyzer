
bool FUN_00461460(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,byte param_5,
                 long param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  byte bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  if (param_4 != 0) {
LAB_0046149a:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x532,
                 "dsa_to_type_specific_pem_encode");
    FUN_0051f8f0(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    bVar6 = param_5 & 2;
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x84) == 0) goto LAB_0046149a;
      if (param_3 != 0) {
        lVar2 = FUN_0043bf50(*param_1);
        if (lVar2 != 0) {
          iVar1 = FUN_00555e60(FUN_004d7bf0,"DSA PARAMETERS",lVar2,param_3,param_1[2],0,0,0,0);
          bVar6 = 0 < iVar1;
        }
        FUN_004ab560(lVar2);
        return (bool)bVar6;
      }
LAB_00461640:
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                   "key2any_encode");
      FUN_0051f8f0(0x39,0xc0102,0);
      return false;
    }
    if (param_3 == 0) goto LAB_00461640;
    lVar2 = FUN_0043bf50(*param_1);
    if ((lVar2 == 0) ||
       ((param_6 != 0 && (iVar1 = FUN_00549540(param_1 + 3,param_6,param_7), iVar1 == 0))))
    goto LAB_00461638;
    puVar9 = (undefined8 *)0x0;
    pcVar4 = FUN_004d7c10;
    pcVar3 = "DSA PUBLIC KEY";
    uVar5 = param_1[2];
    puVar8 = (undefined *)0x0;
  }
  else {
    if (param_3 == 0) goto LAB_00461640;
    lVar2 = FUN_0043bf50(*param_1);
    if ((lVar2 == 0) ||
       ((puVar9 = param_1 + 3, param_6 != 0 &&
        (iVar1 = FUN_00549540(puVar9,param_6,param_7), iVar1 == 0)))) {
LAB_00461638:
      bVar7 = false;
      goto LAB_00461621;
    }
    uVar5 = param_1[2];
    pcVar4 = FUN_004d7bd0;
    pcVar3 = "DSA PRIVATE KEY";
    puVar8 = PTR_FUN_0093af08;
  }
  iVar1 = FUN_00555e60(pcVar4,pcVar3,lVar2,param_3,uVar5,0,0,puVar8,puVar9);
  bVar7 = 0 < iVar1;
LAB_00461621:
  FUN_004ab560(lVar2);
  return bVar7;
}


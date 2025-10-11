
bool FUN_00463f20(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  bool bVar8;
  long local_40;
  
  if (param_4 != 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x36c,
                 "dsa2text_encode");
    FUN_0051f8f0(0x39,0x80106,0);
    return false;
  }
  lVar3 = FUN_0043bf50();
  if (lVar3 == 0) {
    return false;
  }
  if (param_3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x12d,"dsa_to_text")
    ;
    FUN_0051f8f0(0x39,0xc0102,0);
    bVar8 = false;
    goto LAB_00464088;
  }
  lVar4 = 0;
  if ((param_5 & 1) == 0) {
    local_40 = 0;
    if ((param_5 & 2) != 0) {
      pcVar7 = "Public-Key";
LAB_004640cf:
      lVar6 = FUN_004d8d60(param_3);
      if (lVar6 == 0) {
        FUN_0051f420();
        bVar8 = false;
        FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x142,
                     "dsa_to_text");
        FUN_0051f8f0(0x39,0xdc,0);
        goto LAB_00464088;
      }
      goto LAB_00463fda;
    }
    lVar6 = 0;
    if ((param_5 & 4) != 0) {
      pcVar7 = "DSA-Parameters";
      goto LAB_00463fde;
    }
    pcVar7 = (char *)0x0;
  }
  else {
    local_40 = FUN_004d8d70(param_3);
    if (local_40 == 0) {
      FUN_0051f420();
      bVar8 = false;
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x13b,
                   "dsa_to_text");
      FUN_0051f8f0(0x39,0xdd,0);
      goto LAB_00464088;
    }
    lVar6 = 0;
    pcVar7 = "Private-Key";
    if ((param_5 & 2) != 0) goto LAB_004640cf;
LAB_00463fda:
    if ((param_5 & 4) != 0) {
LAB_00463fde:
      lVar4 = FUN_004d8e60(param_3);
      if (lVar4 == 0) {
        FUN_0051f420();
        bVar8 = false;
        FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x149,
                     "dsa_to_text");
        FUN_0051f8f0(0x39,0xe2,0);
        goto LAB_00464088;
      }
    }
  }
  lVar5 = FUN_004d8d30(param_3);
  if (lVar5 == 0) {
    FUN_0051f420(0);
    bVar8 = false;
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x150,"dsa_to_text")
    ;
    FUN_0051f8f0(0x39,0x9e,0);
  }
  else {
    uVar1 = FUN_004b7bb0();
    iVar2 = FUN_004ae9e0(lVar3,"%s: (%d bit)\n",pcVar7,uVar1);
    if (((iVar2 < 1) ||
        ((local_40 != 0 && (iVar2 = FUN_00461e70(lVar3,"priv:",local_40), iVar2 == 0)))) ||
       ((lVar6 != 0 && (iVar2 = FUN_00461e70(lVar3,"pub: ",lVar6), iVar2 == 0)))) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
      if (lVar4 != 0) {
        iVar2 = FUN_00463520(lVar3,lVar4);
        bVar8 = iVar2 != 0;
      }
    }
  }
LAB_00464088:
  FUN_004ab560(lVar3);
  return bVar8;
}


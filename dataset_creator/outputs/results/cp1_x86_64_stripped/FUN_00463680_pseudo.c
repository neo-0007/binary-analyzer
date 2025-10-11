
bool FUN_00463680(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0xe2,"dh_to_text");
    FUN_0051f8f0(0x39,0xc0102,0);
    return false;
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) != 0) {
      pcVar8 = "DH Public-Key";
      lVar4 = 0;
      goto LAB_0046382a;
    }
    if ((param_3 & 4) == 0) {
      pcVar8 = (char *)0x0;
      lVar4 = 0;
      lVar7 = 0;
      lVar6 = 0;
      goto LAB_004636e7;
    }
    pcVar8 = "DH Parameters";
    lVar4 = 0;
    lVar7 = 0;
  }
  else {
    lVar4 = FUN_004d60e0(param_2);
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0xf0,"dh_to_text")
      ;
      FUN_0051f8f0(0x39,0xdd,0);
      return false;
    }
    pcVar8 = "DH Private-Key";
    lVar7 = 0;
    if ((param_3 & 2) != 0) {
LAB_0046382a:
      lVar7 = FUN_004d60f0(param_2);
      if (lVar7 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0xf7,
                     "dh_to_text");
        FUN_0051f8f0(0x39,0xdc,0);
        return false;
      }
    }
    if ((param_3 & 4) == 0) {
      lVar6 = 0;
      goto LAB_004636e7;
    }
  }
  lVar6 = FUN_004d6140(param_2);
  if (lVar6 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0xfe,"dh_to_text");
    FUN_0051f8f0(0x39,0xe2,0);
    return false;
  }
LAB_004636e7:
  lVar5 = FUN_004d60b0(param_2);
  if (lVar5 == 0) {
    FUN_0051f420(0);
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x105,"dh_to_text");
    FUN_0051f8f0(0x39,0x9e,0);
    return false;
  }
  uVar2 = FUN_004b7bb0();
  iVar3 = FUN_004ae9e0(param_1,"%s: (%d bit)\n",pcVar8,uVar2);
  if ((((0 < iVar3) &&
       ((lVar4 == 0 || (iVar3 = FUN_00461e70(param_1,"private-key:",lVar4), iVar3 != 0)))) &&
      ((lVar7 == 0 || (iVar3 = FUN_00461e70(param_1,"public-key:",lVar7), iVar3 != 0)))) &&
     ((lVar6 == 0 || (iVar3 = FUN_00463520(param_1,lVar6), iVar3 != 0)))) {
    lVar4 = FUN_004d6010(param_2);
    bVar1 = true;
    if (0 < lVar4) {
      iVar3 = FUN_004ae9e0(param_1,"recommended-private-length: %ld bits\n");
      bVar1 = 0 < iVar3;
    }
    return bVar1;
  }
  return false;
}


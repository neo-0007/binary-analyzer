
undefined8 FUN_005ad870(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar3 = (char *)FUN_005a0eb0(param_2,0,0);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  pcVar7 = pcVar3 + 1;
  pcVar5 = pcVar3 + 2;
  if (*pcVar3 == '\0') {
    FUN_0041ad60(pcVar3,"../crypto/x509/x_name.c",0x1fe);
    return 1;
  }
  cVar1 = pcVar3[1];
  pcVar6 = pcVar3 + 1;
  if (cVar1 == '/') goto LAB_005ad945;
LAB_005ad8c8:
  do {
    pcVar4 = pcVar5;
    if (cVar1 != '\0') goto LAB_005ad936;
    do {
      iVar2 = FUN_004ab7e0(param_1,pcVar7,(long)pcVar6 - (long)pcVar7 & 0xffffffff);
      if (iVar2 != (int)((long)pcVar6 - (long)pcVar7)) {
LAB_005ad988:
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x_name.c",0x21d,"X509_NAME_print");
        FUN_0051f8f0(0xb,0x80007,0);
        FUN_0041ad60(pcVar3,"../crypto/x509/x_name.c",0x21e);
        return 0;
      }
      if (pcVar5[-1] == '\0') {
LAB_005ad8ea:
        FUN_0041ad60(pcVar3,"../crypto/x509/x_name.c",0x21a);
        return 1;
      }
      iVar2 = FUN_004ab7e0(param_1,&DAT_00801fb4,2);
      if (iVar2 != 2) goto LAB_005ad988;
      pcVar4 = pcVar5;
      pcVar7 = pcVar5;
      if (pcVar5[-1] == '\0') goto LAB_005ad8ea;
LAB_005ad936:
      cVar1 = *pcVar4;
      pcVar5 = pcVar4 + 1;
      pcVar6 = pcVar4;
      if (cVar1 != '/') goto LAB_005ad8c8;
LAB_005ad945:
      iVar2 = FUN_005466f0((int)*pcVar5);
    } while ((iVar2 != 0) &&
            ((pcVar5[1] == '=' || ((iVar2 = FUN_005466f0(), iVar2 != 0 && (pcVar5[2] == '='))))));
    cVar1 = pcVar5[-1];
  } while( true );
}


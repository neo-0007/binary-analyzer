
long FUN_0060bec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar3 = FUN_0060be80();
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_bcons.c",0x40,"v2i_BASIC_CONSTRAINTS");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else {
    for (; iVar2 = FUN_00436480(param_3), iVar5 < iVar2; iVar5 = iVar5 + 1) {
      lVar4 = FUN_004364a0(param_3,iVar5);
      pcVar1 = *(char **)(lVar4 + 8);
      if (((*pcVar1 == 'C') && (pcVar1[1] == 'A')) && (pcVar1[2] == '\0')) {
        iVar2 = FUN_0059d2f0(lVar4,lVar3);
      }
      else {
        iVar2 = thunk_FUN_00712780(pcVar1,"pathlen");
        if (iVar2 != 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_bcons.c",0x4c,"v2i_BASIC_CONSTRAINTS");
          FUN_0051f8f0(0x22,0x6a,0);
          FUN_0051ef40(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",*(undefined8 *)(lVar4 + 0x10)
                      );
          goto LAB_0060bf4c;
        }
        iVar2 = FUN_0059d4a0(lVar4,lVar3 + 8);
      }
      if (iVar2 == 0) {
LAB_0060bf4c:
        FUN_0060bea0(lVar3);
        return 0;
      }
    }
  }
  return lVar3;
}


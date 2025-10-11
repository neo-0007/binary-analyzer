
undefined8 FUN_004ccce0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  
  if (param_4 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_lib.c",0x153,"NCONF_get_number_e");
    FUN_0051f8f0(0xe,0xc0102,0);
    return 0;
  }
  pcVar2 = (char *)FUN_004ccb80();
  if (pcVar2 != (char *)0x0) {
    pcVar5 = FUN_004cc5a0;
    pcVar4 = FUN_004cc5e0;
    if (param_1 != (long *)0x0) {
      pcVar4 = *(code **)(*param_1 + 0x38);
      pcVar5 = *(code **)(*param_1 + 0x40);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = FUN_004cc5e0;
      }
      if (pcVar5 == (code *)0x0) {
        pcVar5 = FUN_004cc5a0;
      }
    }
    lVar3 = 0;
    while( true ) {
      iVar1 = (*pcVar4)(param_1,(int)*pcVar2);
      if (iVar1 == 0) {
        *param_4 = lVar3;
        return 1;
      }
      iVar1 = (*pcVar5)(param_1,(int)*pcVar2);
      if ((long)((0x7fffffffffffffffU - (long)iVar1) / 10) < lVar3) break;
      pcVar2 = pcVar2 + 1;
      lVar3 = (long)iVar1 + lVar3 * 10;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_lib.c",0x166,"NCONF_get_number_e");
    FUN_0051f8f0(0xe,0x79,0);
    return 0;
  }
  return 0;
}


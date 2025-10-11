
undefined8 FUN_0059d2f0(long param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = *(char **)(param_1 + 0x10);
  if (pcVar2 != (char *)0x0) {
    iVar3 = thunk_FUN_00712780(pcVar2,&DAT_0080b580);
    if ((((iVar3 == 0) || (iVar3 = thunk_FUN_00712780(pcVar2,&DAT_0080b58b), iVar3 == 0)) ||
        ((cVar1 = *pcVar2, cVar1 == 'Y' && (pcVar2[1] == '\0')))) ||
       ((((cVar1 == 'y' && (pcVar2[1] == '\0')) ||
         (iVar3 = thunk_FUN_00712780(pcVar2,&DAT_0080b590), iVar3 == 0)) ||
        (iVar3 = thunk_FUN_00712780(pcVar2,"yes"), iVar3 == 0)))) {
      *param_2 = 0xff;
    }
    else {
      iVar3 = thunk_FUN_00712780(pcVar2,"FALSE");
      if (((((iVar3 != 0) && (iVar3 = thunk_FUN_00712780(pcVar2,"false"), iVar3 != 0)) &&
           ((cVar1 != 'N' || (pcVar2[1] != '\0')))) &&
          (((cVar1 != 'n' || (pcVar2[1] != '\0')) &&
           ((*pcVar2 != 'N' || ((pcVar2[1] != 'O' || (pcVar2[2] != '\0')))))))) &&
         ((*pcVar2 != 'n' || ((pcVar2[1] != 'o' || (pcVar2[2] != '\0')))))) goto LAB_0059d440;
      *param_2 = 0;
    }
    return 1;
  }
LAB_0059d440:
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_utl.c",0x121,"X509V3_get_value_bool");
  FUN_0051f8f0(0x22,0x68,0);
  FUN_0051ef40(4,"name=",*(undefined8 *)(param_1 + 8),", value=",*(undefined8 *)(param_1 + 0x10));
  return 0;
}

